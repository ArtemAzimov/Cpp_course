// 1. Напишите функцию, которая принимает вектор целых чисел и возвращает итератор на первый элемент, который не является четным числом.

#include <iostream>
#include <vector>
#include <algorithm>

using uint = unsigned int;

// Что ретурнить если нечетное число не найдено?
std::vector<uint>::iterator findFirstEven(std::vector<uint> vec)
{
    std::vector<uint>::iterator it;
    for (it = vec.begin(); it != vec.end(); ++it){
        if (*it % 2 != 0) { return it;}
    }
    return it;
}


int main()
{
    std::vector<uint> vector1 {2, 4, 6, 8, 7, 10, 290, 1, 33, 20};
    // std::vector<uint> vector1 {2, 4, 6, 8, 10, 290, 20};
    std::cout << *(findFirstEven(vector1)) << std::endl;


    return 0;
}
