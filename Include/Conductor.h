#pragma once
#include "Auto.h"
#include "Status.h"
#include <string>

class Conductor {
private:
    std::string nombre;
    Vehiculos::Auto* auto_conductor;

public:
    Conductor(const std::string& nombre, Vehiculos::Auto* auto_);

    void reaccionar(ControlVial::Status s);
};