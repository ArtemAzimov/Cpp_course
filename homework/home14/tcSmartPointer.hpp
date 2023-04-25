#ifndef SMART_POINTER_HPP
#define SMART_POINTER_HPP

#include <iostream>

using std::cout; using std::endl; using std::cerr;


template<typename T>
class SmartPointer
{
priavte:
    T* value;
    int count;
public:
    SmartPointer(T* value, int count) : value(value), count(count)
    {
        this = new T(value);
    }
    ~SmartPointer(){}

    int count() const
    {
        cout << count;
    }

    void reset()
    {

    }

};

/*

template <typename T>
class smartptr
{
private:
    int* count;
    T* value;
public:
    smartptr();
    void reset();
    int count() const;
    ~smartptr();
};


*/

#endif SMART_POINTER_HPP