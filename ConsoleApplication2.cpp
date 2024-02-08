﻿#include <iostream>

double calcul(double radius) {
    return 3.14 * radius * radius;
}
double calculateRingArea(double outerR, double innerR) {
    double outerArea = calcul(outerR);
    double innerArea = calcul(innerR);
    return outerArea - innerArea;
}
int main() {
    setlocale(LC_ALL, "Rus");
    double outerR, innerR;
    std::cout << "Введите внешний радиус кольца: ";
    std::cin >> outerR;
    std::cout << "Введите внутренний радиус кольца: ";
    std::cin >> innerR;
    double ringArea = calcul(outerR, innerR);
    std::cout << "Площадь круга: " << ringArea << std::endl;
    return 0;
}