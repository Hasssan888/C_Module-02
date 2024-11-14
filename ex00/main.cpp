#include <iostream>

class Fixed {
private:
    int value;  // This will store the fixed-point number value as an integer
    static const int fractionalBits = 8;  // Constant number of fractional bits (8 bits)

public:
    // Default constructor
    Fixed() : value(0) {
        std::cout << "Default constructor called" << std::endl;
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

    // Member function to get the raw bits
    int getRawBits(void) const {
        std::cout << "getRawBits member function called" << std::endl;
        return value;
    }

    // Member function to set the raw bits
    void setRawBits(int const raw) {
        value = raw;
    }
};

int main(void) {
    Fixed a;            // Default constructor is called
    Fixed b(a);         // Copy constructor is called
    Fixed c;            // Default constructor is called
    c = b;              // Copy assignment operator is called

    std::cout << a.getRawBits() << std::endl;  // Print raw value for a
    std::cout << b.getRawBits() << std::endl;  // Print raw value for b
    std::cout << c.getRawBits() << std::endl;  // Print raw value for c

    return 0;
}
