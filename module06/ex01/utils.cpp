#include "serial.hpp"


uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}


// static_cast as long as the two types are compatible and the conversion is safe. compile time
    // For example, if you try to use static_cast to convert a pointer to an unrelated type,
    // the compiler will generate an error indicating that the conversion is not allowed.
// dynamic_cast is used to perform runtime type checking and type conversion for polymorphic types. runtime