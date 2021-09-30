#include "persona.h" 
#include <string> 
#include <iostream>


Persona::Persona(){
    this->id_empleado = 0 ;
    this -> nombre = ""; 
    this -> apellido =""; 
    this -> email = ""; 
    this -> nombre_supervisor ="";
    this ->tipo_empleado = 0; 
    this -> id_supervisor =0;
    this->pago_neto =0;  
}

void Persona::asigneDatos(int _id_empleado, std::string _nombre, std::string _apellido, std::string _email, int _tipo_empleado, int _id_supervisor){
    this->id_empleado = _id_empleado ;
    this -> nombre = _nombre; 
    this -> apellido = _apellido; 
    this -> email = _email; 
    this ->tipo_empleado = _tipo_empleado; 
    this -> id_supervisor = _id_supervisor; 
}

void Persona::asignePago(float _pago_neto){
    pago_neto = _pago_neto; 
}

void Persona::asigneNombreSupervisor(std::string _nombre_supervisor){
    nombre_supervisor = _nombre_supervisor; 
}


std::ostream& operator << (std::ostream &o, const Persona &persona){
    o<<persona.id_empleado; 
    o<< ","; 
    o<< persona.nombre;
    o<< " ";
    o<< persona.apellido;
    o<< ","; 
    o<<persona.nombre_supervisor; 
    o<<","; 
    o<<persona.pago_neto; 

    return o; 
}

//METODOS GETTERS 

std::string Persona::deNombre(){
    return nombre; 
}

std::string Persona::deApellido(){
    return apellido; 
} 

int Persona::deID_Empleado(){
    return id_empleado; 
} 

float Persona::dePago(){
    return pago_neto; 
}

int Persona::deID_supervisor(){
    return id_supervisor;
}
