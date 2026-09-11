#include <iostream>
#include <thread>
#include <chrono>
#include "Auto.h"
#include "Semaforo.h"
#include "Conductor.h"

int main() {
    using namespace ControlVial;
    using namespace Vehiculos;

    Auto auto1("Auto 1");
    Auto auto2("Auto 2");

    Conductor conductor1("Conductor 1", &auto1);
    Conductor conductor2("Conductor 2", &auto2);

    Semaforo semaforo;
    semaforo.nuevo_conductor(&conductor1);
    semaforo.nuevo_conductor(&conductor2);

    int timer[3] = {15, 5, 25}; // Duración de cada estado: Verde, Amarillo, Rojo
    int index = 0;
    int segundos = 0;

    std::cout << "Simulación de semáforo iniciada. Presiona Ctrl+C para detener.\n";

    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        
        if (segundos >= timer[index]) {
            semaforo.cambiar_estado();
            index = (index + 1) % 3; // Cambiar al siguiente estado
            segundos = 0;
        }
    }

    return 0;
}
    