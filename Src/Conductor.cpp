#include "Conductor.h"
#include <iostream>

Conductor::Conductor(const std::string& nombre, Vehiculos::Auto* auto_)
    : nombre(nombre), auto_conductor(auto_) {}

void Conductor::reaccionar(ControlVial::Status s) {
    using ControlVial::Status;

    std::cout << "[Conductor] " << nombre << " reacciona al semáforo.\n";

    if (s == Status::Verde){
        auto_conductor->arrancar(60);
    }

    else{
        auto_conductor->detener();
    }
}