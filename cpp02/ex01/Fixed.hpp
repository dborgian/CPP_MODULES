#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed{

    private:
        int _valueFixedPoint;
        static const int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed(const int n);
        Fixed(const float x);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt(void) const;
        float toFloat(void) const;
        Fixed &operator=(const Fixed &first);

};

std::ostream &operator<<(std::ostream &stream, const Fixed &n);

#endif