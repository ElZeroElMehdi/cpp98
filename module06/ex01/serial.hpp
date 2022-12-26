#ifndef SERIAL_HPP
#define SERIAL_HPP

#include <iostream>
#include <cstdint>

typedef struct ddt
{
	int x;
}Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif



/*
In the context of C++98, serialization refers to the process of converting the state
of an object or data structure into a form that can be stored or transmitted,
and then reconstituting the object or data structure from that stored or transmitted form.
Serialization is often used when an object needs to be persisted to storage
(such as a file or database) or transmitted over a network connection.

There are several ways to perform serialization in C++98.
One approach is to manually write code that converts the object's data members to a
serialized form, such as a string or binary stream, and then write code to reconstitute the
object from that serialized form. This can be a time-consuming and error-prone process, 
especially for complex objects with many data members.

Another approach is to use a library or framework that provides serialization support.
There are several libraries available that can simplify the process of serialization in 
C++98, such as Boost Serialization or Google Protocol Buffers. These libraries provide 
functions and classes that can automatically serialize and deserialize objects and data 
structures, making it easier to implement serialization in your C++98 application.

It's important to note that serialization in C++98 can be somewhat limited compared 
to more modern versions of the language. For example, C++98 does not have language 
support for reflection, which makes it difficult to automatically serialize objects with 
complex data structures or inheritance hierarchies. Modern C++ versions, such as C++11 and later, 
provide better support for serialization through language features such as std::unique_ptr 
and std::shared_ptr.
*/