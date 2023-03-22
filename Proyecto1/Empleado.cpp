#include "Empleado.hpp"
#include <iostream>

Empleado::Empleado(const std::string& nombre, int edad, double salario)
    : nombre(nombre), edad(edad), salario(salario) {}

void Empleado::mostrarInfo() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Salario: $" << salario << std::endl;
}
