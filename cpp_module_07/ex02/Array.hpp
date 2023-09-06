#include <iostream>

template <typename T>
class Array
{
    private:
        int *a;
        T *_array;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        ~Array();
        Array(Array const &copy);
        Array &operator=(Array const &copy);
        T &operator[](unsigned int i);
        unsigned int size() const;
    
};

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(Array const &copy) : _array(NULL), _size(0)
{
    *this = copy;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &copy)
{
    if(this != &copy)
    {
        if (this->_array)
            delete [] this->_array;
        this->_size = copy._size;
        this->_array = new T[this->_size];
        unsigned int i = 0;
        while (i < this->_size)
        {
            this->_array[i] = copy._array[i];
            i++;
        }
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i >= this->_size)
        throw std::runtime_error("Out of range");
    return this->_array[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return this->_size;
}

template <typename T>
Array<T>::~Array()
{
    if (this->_array)
        delete [] this->_array;
}