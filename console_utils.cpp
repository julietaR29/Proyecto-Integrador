#include "console_utils.h"

#include <cstdlib>
#include <iostream>
#include <limits>

int leerEntero(const char* mensajeError) {
    int valor;

    while (!(std::cin >> valor)) {
        std::cout << mensajeError << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Opcion: ";
    }

    return valor;
}

int leerEnteroEnRango(int minimo, int maximo, const char* mensajeError) {
    int valor = leerEntero(mensajeError);

    while (valor < minimo || valor > maximo) {
        std::cout << mensajeError << std::endl;
        std::cout << "Opcion: ";
        valor = leerEntero(mensajeError);
    }

    return valor;
}

void limpiarPantalla() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pausarConsola() {
#ifdef _WIN32
    system("pause");
#else
    std::cout << "Presione Enter para continuar...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
#endif
}
