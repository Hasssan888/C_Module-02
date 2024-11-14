#include <iostream>
#include <cmath>  // For rounding functions (like std::round)

class Fixed {
private:
    int value;  // This stores the fixed-point value
    static const int fractionalBits = 8;  // Constant number of fractional bits (8)

public:
    // Default constructor
    Fixed() : value(0) {
        std::cout << "Default constructor called" << std::endl;
    }

    // Constructor that takes an integer
    Fixed(int const integer) : value(integer << fractionalBits) {
        std::cout << "Int constructor called" << std::endl;
    }

    // Constructor that takes a floating-point number
    Fixed(float const floatingPoint) : value(static_cast<int>(round(floatingPoint * (1 << fractionalBits)))) {
        std::cout << "Float constructor called" << std::endl;
    }

    // Copy constructor
    Fixed(const Fixed& other) : value(other.value) {
        std::cout << "Copy constructor called" << std::endl;
    }

    // Copy assignment operator
    Fixed& operator=(const Fixed& other) {
        std::cout << "Copy assignment operator called" << std::endl;
        if (this != &other) {  // Prevent self-assignment
            value = other.value;
        }
        return *this;
    }

    // Destructor
    ~Fixed() {
        std::cout << "Destructor called" << std::endl;
    }

    // Member function to get the raw value
    int getRawBits(void) const {
        return value;
    }

    // Member function to set the raw value
    void setRawBits(int const raw) {
        value = raw;
    }

    // Converts the fixed-point value to a floating-point value
    float toFloat(void) const {
        return static_cast<float>(value) / (1 << fractionalBits);
    }

    // Converts the fixed-point value to an integer value
    int toInt(void) const {
        return value >> fractionalBits;  // Discards the fractional part
    }

    // Overload the insertion operator to output as a floating-point value
    friend std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
        os << obj.toFloat();
        return os;
    }
};

int main(void) {
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);
    a = Fixed(1234.4321f);

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    return 0;
}
