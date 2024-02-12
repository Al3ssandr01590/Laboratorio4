#include <iostream>
#include <cmath>

// Declaración de funciones
double realizarOperacion(double num1, double num2, char operador);
void imprimirResultado(double resultado);

int main() {
    // Variables necesarias
    int cantidadOperaciones;
    double num1, num2, resultado;
    char operador;

    // Pide al usuario la cantidad de operaciones a realizar
    std::cout << "Ingrese la cantidad de operaciones a realizar: ";
    std::cin >> cantidadOperaciones;

    // Bucle para pedir datos y realizar operaciones
    for (int i = 0; i < cantidadOperaciones; ++i) {
        std::cout << "Operacion " << i+1 << ":" << std::endl;
        std::cout << "Ingrese el primer numero: ";
        std::cin >> num1;
        std::cout << "Ingrese el operador (+, -, *, /, %): ";
        std::cin >> operador;
        std::cout << "Ingrese el segundo numero: ";
        std::cin >> num2;

        // Realizar la operación
        resultado = realizarOperacion(num1, num2, operador);

        // Imprimir resultado
        imprimirResultado(resultado);
    }

    return 0;
}

// Implementación de la función para realizar operaciones matemáticas
double realizarOperacion(double num1, double num2, char operador) {
    switch (operador) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                std::cerr << "Error: división por cero" << std::endl;
                return NAN; // Retornar un valor no válido
            }
        case '%':
            if (num2 != 0) {
                return fmod(num1, num2); // Usar fmod para el módulo de números con decimales
            } else {
                std::cerr << "Error: división por cero" << std::endl;
                return NAN; // Retornar un valor no válido
            }
        default:
            std::cerr << "Error: operador no válido" << std::endl;
            return NAN; // Retornar un valor no válido
    }
}

// Implementación de la función para imprimir resultados
void imprimirResultado(double resultado) {
    std::cout << "El resultado es: " << resultado << std::endl;
}
