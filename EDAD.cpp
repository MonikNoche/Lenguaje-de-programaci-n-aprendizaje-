#include <stdio.h>
#include <iostream>

int main()

{
    int edad;
    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    if (edad >= 18) {
        std::cout << "Usted es mayor de edad." << std::ends;
    } else {
        std::cout << "Usted es menor de edad." << std::ends;
    }

    return 0;

}
