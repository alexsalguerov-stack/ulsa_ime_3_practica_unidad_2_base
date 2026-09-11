#include "Semaforo.h"
#include "Conductor.h"
#include <iostream>

namespace ControlVial {
    Semaforo::Semaforo() {
        estado[0] = Status::Verde;
        estado[1] = Status::Amarillo;
        estado[2] = Status::Rojo;
        actual = &estado[0];
    }

    void Semaforo::nuevo_conductor(Conductor* c) {
        conductores.push_back(c);
    }

    void Semaforo::cambiar_estado() {
        if (actual == &estado[2]) {
            actual = &estado[0];
        } 
        
        else {
            actual++;
        }

        std::cout << "\n >>> Estado del semáforo cambiado <<<\n";
        notificar();
    }

    void Semaforo::notificar() {
        for (Conductor* c : conductores) {
            c->reaccionar(*actual);
        }
    }

    Status Semaforo::get_estado_actual() const {
        return *actual;
    }
}  
