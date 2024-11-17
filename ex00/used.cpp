#include "Fixed.hpp"

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void    Fixed::setRawBits(int value)
{
    this->value = value;
}
