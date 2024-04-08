#include <iostream>

int main()
{
    float numero1, numero2;
    std::cout << "Escribe el primer número: ";
    std::cin>> numero1;
    std::cout << "Escribe el segundo número: ";
    std::cin >> numero2;

    float suma = numero1 + numero2;
    float resta = numero1 + numero2;
    float multiplicación = numero1 * numero2;
    float división = numero1 / numero2;

    std::cout << "la suma es: " << suma << std::ends;
    std::cout << "la resta es: " << resta << std::ends;
    std::cout << "la multiplicación es " << multiplicación << std::ends;
    std::cout << "la división es " << división << std::ends;
    return 0;
}
