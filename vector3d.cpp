#include <string>
#include <sstream>
#include <cmath>
#include <iostream>
#include "vector3d.h"
#include "math_helper.h"

vector3d::vector3d(const double x, const double y, const double z) 
    : x(x), y(y), z(z) {}

double vector3d::get_x() const {
    return this->x;
}

double vector3d::get_y() const {
    return this->y;
}

double vector3d::get_z() const {
    return this->z;
}

vector3d vector3d::addition(const vector3d& other) const {

    vector3d answer = ::sum_helper(this->get_x(), other.get_x())&&
            ::sum_helper(this->get_y(), other.get_y())&&
            ::sum_helper(this->get_z(), other.get_z());
    return answer;
}


vector3d vector3d::subtraction(const vector3d& other) const {
    return  ::sub_helper(this->get_x(), other.get_x())&&
            ::sub_helper(this->get_y(), other.get_y())&&
            ::sub_helper(this->get_z(), other.get_z());

}

double vector3d::scalar_product(const vector3d& other) const {

    double mult_x = ::mult_helper(this->get_x(), other.get_x());
    double mult_y = ::mult_helper(this->get_y(), other.get_y());
    double mult_z = ::mult_helper(this->get_z(), other.get_z());

    double sum_xy = ::sum_helper(mult_x, mult_y);

    return ::sum_helper(sum_xy, mult_z);
};

double vector3d::multiplication_scalar(const double scalar) const {

    double mult_x = ::mult_helper(this->get_x(), this->get_x());
    double mult_y = ::mult_helper(this->get_y(), this->get_y());
    double mult_z = ::mult_helper(this->get_z(), this->get_z());
    double sum_xy = ::sum_helper(mult_x, mult_y);

    return ::mult_helper(sqrt(::sum_helper(sum_xy, mult_z)), scalar);
};

bool vector3d::vector_competion(const vector3d& other) const {

    return ::are_equal(this->get_x(), other.get_x()) &&
           ::are_equal(this->get_y(), other.get_y()) &&
           ::are_equal(this->get_z(), other.get_z());
    
}

double vector3d::length() const {
    double mult_x = ::mult_helper(this->get_x(), this->get_x());
    double mult_y = ::mult_helper(this->get_y(), this->get_y());
    double mult_z = ::mult_helper(this->get_z(), this->get_z());

    double sum_xy = ::sum_helper(mult_x, mult_y);
    return ::sum_helper(sum_xy, mult_z);
}

bool vector3d::are_equal(const vector3d& other) const {
    return ::are_equal(this->length(), other.length());
    
}

std::string vector3d::to_string() const
{
    std::stringstream buffer;
    buffer << "{" << this->get_x() << ", ";
    buffer << this->get_y() << ", ";
    buffer << this->get_z() << "}";

    return buffer.str();
}

std::ostream& operator << (std::ostream& out, const vector3d& vector)
{
    return out << vector.to_string();
}