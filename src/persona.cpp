#include "persona.h" 
#include <string> 
#include <iostream>

Persona::Persona(int _id_empleado, std::string _nombre, std::string _apellido, std::string _email, int _tipo_empleado, int _id_supervisor){
    this-> id_empleado = _id_empleado; 
    this->nombre = _nombre; 
    this-> apellido = _apellido; 
    this-> email = _email; 
    this-> tipo_empleado = _tipo_empleado; 
    this-> id_supervisor = _id_supervisor; 
}

void Persona::obtenerDatos(){ 
    std::cout << "ID de empleado: " << id_empleado << " Nombre: " << nombre << " Apellido: " << apellido << 
    " Email: " << email << " Tipo de empleado: " << tipo_empleado << " ID supervisor: " << id_supervisor;  
    }

std::string Persona::obtenerNombre(){
    return nombre; 
}

int Persona::obtenerIDempleado(){
    return id_empleado; 
}

std::ostream& operator << (std::ostream &o, const Persona &persona){
    o<<"ID de empleado: "; 
    o<< persona.id_empleado; 
    o<<" Nombre: "; 
    o<< persona.nombre; 
    o<<" Apellido: "; 
    o<< persona.apellido; 
    o<<" Email: "; 
    o<< persona.email; 
    o<< " Tipo de empleado"; 
    o<< persona.tipo_empleado; 
    o<<" ID supervisor: "; 
    o<< persona.id_supervisor; 

    return o; 
} 

int Persona::obtenerIdSupervisor(){
    return id_supervisor; 
}
