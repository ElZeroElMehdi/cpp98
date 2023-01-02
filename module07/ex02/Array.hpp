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
            if (!this->data_)
                exit(1);
        }
        Array(const Array &_arr)
        {
            *this = _arr;
        }

        Array &operator=(const Array & copyAssig) {
            this->capacity_ = copyAssig.capacity_;
            this->data_ = new T[this->capacity_];
            if (!this->data_)
            {
                exit(1);
            }
            int i = 0;
            while (i < this->capacity_)
            {
                this->data_[i] = copyAssig.data_[i];
                i++;
            }
            return (*this);
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