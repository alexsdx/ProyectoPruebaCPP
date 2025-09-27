#include <iostream>
#include <limits>  // Necesario para std::numeric_limits en la limpieza del buffer


int main() {
    int num1, num2;
    
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;
    
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;
    
    std::cout << "La suma es: " << num1 + num2 << std::endl;

    // Pausa para que el resultado se mantenga visible
    std::cout << "Presione Enter para salir..." << std::endl;

     // Limpia el buffer de entrada para evitar problemas con caracteres residuales (como el Enter después de ingresar números)
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    // Espera a que el usuario presione Enter
    std::cin.get();
    
    return 0;
}