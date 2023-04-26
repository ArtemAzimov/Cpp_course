#ifndef SMART_POINTER_HPP
#define SMART_POINTER_HPP

#include <iostream>

using std::cout; using std::endl; using std::cerr;


template<typename T>
class SmartPointer
{
private:
    T* value;
    int count;
public:
    SmartPointer(T* value = nullptr) : value(value)
    {
        if (value != nullptr)
        {
            count = 1;
        }
        else count = 0;
    }

    SmartPointer(const SmartPointer<T>& newptr)     // конструктор копирования
    {
        value = newptr.value;
        count = newptr.count;
        if(value != nullptr) 
        {
            count++;        // если поинтер не нулевой то увеличить каунт
        }
    }

    ~SmartPointer()     // деструктор с проверкой на кол-во
    {
        if(value != nullptr)
        {
            count--;
            if(count == 0) 
            {
                delete value;
            }
        }
    }

    int counter() const     // имя члена-переменной класса != имя метода класса (count count)
    {
        return count;
    }

    void reset(T* newptr = nullptr)
    {
        if(value != nullptr) 
        {
            count--;
            if(count == 0) 
            {
                delete value;
            }
        }
        value = newptr;
        if (value != nullptr)
        {
            count = 1;
        }
        else count = 0;
    }

};

#endif // SMART_POINTER_HPP