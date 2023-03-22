#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>

class Empleado {
public:
    Empleado(const std::string& nombre, int edad, double salario);

    void mostrarInfo() const;

private:
    std::string nombre;
    int edad;
    double salario;
};

#endif // EMPLEADO_HPP
