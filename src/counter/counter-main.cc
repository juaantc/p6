#include "counter.h"
#include <iostream>

int main(){
    
    std::cout << "=== PRUEBA DE LA CLASE COUNTER ===" << std::endl;

    Counter c(500, 0, 1000);
    std::cout << "Contador c inicializado a 500 [0-1000]. Valor actual: " << c << std::endl;

    c++;
    std::cout << "c++ -> " << c << std::endl;
    ++c;
    std::cout << "++c -> " << c << std::endl;

    std::cout << "Intentando sumar 2000 a c..." << std::endl;
    c = c + 2000;
    std::cout << "c + 2000 -> " << c << " (Debería ser 1000)" << std::endl;

    std::cout << "Intentando restar 2000 a c..." << std::endl;
    c = c - 2000;
    std::cout << "c - 2000 -> " << c << " (Debería ser 0)" << std::endl;

    std::cout << "\nPrueba de entrada por teclado. Introduce un valor valido (0-1000): " << std::endl;
    std::cin >> c;
    std::cout << "Valor introducido: " << c << std::endl;

    std::cout << "----- PROGRAMA FINALIZADO -----";
    return 0;
}