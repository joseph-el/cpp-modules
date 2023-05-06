# include "Point.hpp"

Point::Point() : X(0), Y(0) {}

Point::Point(const Point &Another) {
    memcpy(this, &Another, sizeof(Point));
}

Point& Point::operator=(const Point &Another) {
    memcpy(this, &Another, sizeof(Point));
    return (*this);
}

Fixed Point::Get_X_Y(short flag) const{
    if (flag & GET_X)
        return (this->X);
    return (this->Y);
}

Point::Point(const Fixed &obj1, const Fixed &obj2) : X(obj1), Y(obj2) {}

Point::~Point() {}