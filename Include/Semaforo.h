#pragma once
#include <vector>
#include "Status.h"

class Conductor;

namespace ControlVial {
    class Semaforo {
    private:
        Status estado[3]; // Verde, Amarillo, Rojo
        Status* actual;
        std::vector<Conductor*> conductores;

        void notificar();

    public:
        Semaforo();

        void nuevo_conductor(Conductor* c);
        void cambiar_estado();
        Status get_estado_actual() const;
    };
}
