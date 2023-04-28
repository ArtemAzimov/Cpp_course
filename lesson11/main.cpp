#include <iostream>

using std::cout, std::endl;


int main()
{
    {   // локальная область видимости лямбды
        int x = 10;
        int y = 45;

        auto lambda = [](int x, int y){        // [] - маска переменных
            x;                                  // можно передать ридонли, или по ссылке &
        };                                      // стандартная маска №1 - [&] - все из локальной области видимости по ссылке
    }                                           // стандартная маска №2 - [=] - все из локальной области видимости по значению
                                                // () - список параметров, нужен при вызве функции

    {
        int x = 10;
        int y = 45;

        auto lambda = [](int x, int y) {
            x++;
            y++;
            return (x+y);
        };

        cout << lambda(x, y) << endl; // получены по значению, оригинальные x, y не изменились
    }

    {
        int x = 10;
        int y = 45;

        auto lambda = [=]() mutable -> int {     // mutable - убирает константность переменных чтобы изменить, оригиналы остаются те же
            x++;                                 // -> int - указать тип, который возвращает лямбда (если много ретурнов)
            y++;
        };
    }
}