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
            this->data_ = new T[this->capacity_];
            if (!this->data_)
                throw std::exception();
        }

        Array(const Array &_arr)
        {
            *this = _arr;
        }

        Array &operator=(const Array &rhs)
        {
            this->capacity_ = rhs.capacity_;
            this->data_ = new T[this->capacity_];
            if (!this->data_)
            {
                std::cout << "error" << std::endl;
                throw std::exception();
            }
            for (int i = 0; i < this->capacity_; i++)
                this->data_[i] = rhs.data_[i];
            return (*this);
        }

        T &operator[](int index)
        {
            if (index < 0 || index > this->capacity_)
            {
                std::cout << "error :"<< index << std::endl;
                throw(std::exception());
            }
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