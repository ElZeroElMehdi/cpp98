#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
    private:
        int capacity_;
        T *data_;

    public:
        Array()
        {
            this->data_ = NULL;
        }

        Array(int cap)
        {
            this->capacity_ = cap;
            this->data_ = new(std::nothrow) T[this->capacity_];
            if (!this->data_)
                throw std::bad_alloc::exception();
        }

        Array(const Array &_arr)
        {
            this->capacity_ = _arr.capacity_;
            this->data_ = new T[this->capacity_];
            for (int i = 0; i < this->capacity_; i++)
                this->data_[i] = _arr.data_[i];
        }

        Array &operator=(const Array &rhs)
        {
            this->capacity_ = rhs.capacity_;
            if (this->data_)
                delete [] this->data_;
            this->data_ = new(std::nothrow) T[this->capacity_];
            if (!this->data_)
                throw std::bad_alloc::exception();
            for (int i = 0; i < this->capacity_; i++)
                this->data_[i] = rhs.data_[i];
            return (*this);
        }

        T &operator[](int index)
        {
            if (index < 0 || index > this->capacity_)
                throw(std::exception());
            else
                return data_[index];
        }

        ~Array()
        {
            if (this->data_)
                delete[] this->data_;
        }
};

#endif