#ifndef ARRAY_HPP
#define ARRAY_HPP

template <class T>
class Array
{
    private:
        int size_;
        int capacity_;
        T* data_;
    public:
        Array() : size_(0), capacity_(10), data_(new T[capacity_]) {}
};


#endif