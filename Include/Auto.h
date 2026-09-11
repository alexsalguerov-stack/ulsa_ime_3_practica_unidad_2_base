#pragma once
#include <string>

namespace Vehiculos{
    class Auto{
    private:
        std::string nombre;
        int velocidad;

    public:
        explicit Auto(const std::string& nombre);

        void arrancar();
        void arrancar(int potencia);
        void detener();

        std::string getNombre() const;
        int getVelocidad() const;
    };
}