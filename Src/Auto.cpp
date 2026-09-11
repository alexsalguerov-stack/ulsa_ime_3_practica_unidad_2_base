#include "Auto.h"
#include <iostream>

namespace Vehiculos{
    Auto::Auto(const std::string& nombre) : nombre(nombre), velocidad(0) {}

    void Auto::arrancar() {
        velocidad = 20;
        std::cout << "[Auto] " << nombre << " acelera desde el reposo (" << velocidad << " km/h).\n";
    }

    void Auto::arrancar(int potencia) {
        velocidad = potencia;
        std::cout << "[Auto] " << nombre << " acelera con potencia asignada (" << velocidad << " km/h).\n";
    }

    void Auto::detener() {
        velocidad = 0;
        std::cout << "[Auto] " << nombre << " se detiene.\n";
    }

    std::string Auto::getNombre() const { return nombre; }

    int Auto::getVelocidad() const { return velocidad; }
}