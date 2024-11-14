#include <iostream>

class Fixed {
    private:
        int value;
    public:

    Fixed() : value(0) {
        std::cout << "Default constructor is called" << std::endl;
    }
    Fixed(const Fixed& other) : value(other.value) {
        std::cout << "Copy constructor is called" << std::endl;
    }
    int getRawBits() const {
        std::cout << "getRawBits member function called" << std::endl;
        return value;
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