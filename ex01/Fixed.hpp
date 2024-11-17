#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed_2
{
private:
    int value;
    static const int fractionalBits = 8;
public:
    Fixed_2();
    Fixed_2(int const integer);
    Fixed_2(float const floatingPoint);
    Fixed_2(const Fixed_2& other);
    Fixed_2& operator = (const Fixed_2& other);
    ~Fixed_2();
    int getRawBits() const;
    void setRawBits();
    float toFloat() const;
    int toInt

};




#endif