#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
    private:
        int capacity_;
        T* data_;
    public:
        Array()
        {
            this->data_ = NULL;
            capacity_ = 0;
        }
        Array(int cap)
        {
            this->capacity_ = cap;
            this->data_ = new T[this->capacity_];
        }
        T& operator[](size_t index)
        {
            if (index < 0 || index > this->capacity_)
                throw (std::exception());
            else
                return data_[index];
        }
        // size_t size()
        // {
        //     return sizeof(data_)/sizeof(T);
        // }

        ~Array()
        {
            if (this->data_)
                delete[] this->data_;
        }

};


#endif