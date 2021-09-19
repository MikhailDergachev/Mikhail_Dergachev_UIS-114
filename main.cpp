#include <iostream>
#include "vector3d.h"



int main() {

    vector3d vector_test = vector3d(3, 5, 9);
    
    const vector3d second = vector3d(2.0, 4.0, 7.0);
    const vector3d addition = vector_test.addition(second);
    std::cout << "addition= " <<  addition << "\n";


    const vector3d third = vector3d(3.0, 6.0, 5.0);
    const vector3d subtraction = vector_test.subtraction(third);
    std::cout << "subtraction= " << subtraction << "\n";

    const vector3d fourth = vector3d(4.0, 6.0, 8.0);
    const double scalar_product = vector_test.scalar_product(fourth);
    std::cout << "scalar_product= " << scalar_product << "\n";


    const double fifth = 5.0;
    const double multiplication_scalar = vector_test.multiplication_scalar(fifth);
    std::cout << "multiplication_scalar= " << multiplication_scalar << "\n";

    const vector3d sixth = vector3d(4.0, 5.0, 5.0);
    const bool vector_competion = vector_test.vector_competion(sixth);
    std::cout << "vector_competion= " << vector_competion << "\n";

    const double length = vector_test.length();
    std::cout << "length= " << length << "\n";

    const vector3d seventh = vector3d(3.0, 6.0, 7.0);
    const bool are_equal = vector_test.are_equal(seventh);
    std::cout << "are_equal= " << are_equal << "\n";

    std::cout << std::endl;
    return 0;
}