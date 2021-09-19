#pragma once
#include <string>
#include <iostream>

/**
 * @brief Класс позволяющий работать с векторами
 */

class vector3d {

private:

    /**
     * @brief координата вектора по x
     */
    double x;

    /**
     * @brief координата вектора по y
     */
    double y;
    
    /**
     * @brief координата вектора по z
     */
    double z;

public:

    /**
     * @brief Параметризированный конструктор
     * @param x Координата вектора по x
     * @param y Координата вектора по y
     * @param z Координата вектора по z
     */
    explicit vector3d(const double x, const double y, const double z);
    
    /**
     * @brief Конструктор копирования
     */

    vector3d(const vector3d& other) = default;

    /**
     * @brief конструтор перемещения 
     */
    vector3d(vector3d&& other) = default;

    /**
     * @brief Деструктор
     */
    ~vector3d() = default;

    /**
     * @brief Возвращает координату x
     */

    double get_x() const;

    /**
     * @brief Возвращает координату y
     */

    double get_y() const;

    /**
     * @brief Возвращает координату z
     */

    double get_z() const;

    /**
     * @brief Возвращает сумму векторов a и b
     */
    vector3d vector3d::addition(const vector3d& other) const;


    /**
     * @brief Возвращает разность векторов a и b
     */
    vector3d vector3d::subtraction(const vector3d& other) const;

    /**
     * @brief Возвращает скалярное произведение векторов a и b
     */
    double scalar_product(const vector3d& other) const;

    /**
     * @brief Возвращает умножение на скаляр вектора a
     */

    double multiplication_scalar(const double scalar) const;

    /**
     * @brief Сравнивает равны ли вектор a, вектора b
     * @return true или false
     */

    bool vector_competion(const vector3d& other) const;

    /**
     * @brief Считает длину вектора a
     */

    double length() const;

    /**
     * @brief сравнивает равны ли вектора по длине 
     * @return true или false
     */

    bool are_equal(const vector3d& other) const;

    std::string to_string() const;

    friend std::ostream& operator << (std::ostream& out, const vector3d& vector);

};