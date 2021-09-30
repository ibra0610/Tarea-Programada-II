#include "nodo.h" 
#include <iostream> 

Nodo::Nodo(int _id, Persona _persona){
    this->id=_id; 
    this->persona = _persona; 
} 

Nodo::~Nodo(){
    //std::clog<<"Borrando nodo " << this->id << std::endl; 

    for(Nodo* hijo : this->hijos){
        delete hijo; 
    } 

   // std::clog << "Se termina de borrar nodo " << this-> id << std:: endl; 
} 


void Nodo::agregarHijo(Nodo *hijo){
    this->hijos.push_back(hijo); 
}

void Nodo::asignePago_a_Persona(float _nuevoPago){
    persona.asignePago(_nuevoPago);
}

std::string Nodo::deNombre(){
    return persona.deNombre();
}

void Nodo::asigneNombreSup(std::string _nombre_sup){
    persona.asigneNombreSupervisor(_nombre_sup);
}

std::ostream& operator << (std::ostream &o, const Nodo &nodo){
    o<< nodo.persona; 
    o<< std::endl; 

    for(Nodo *nodoHijo: nodo.hijos){
        o<< *nodoHijo; 
    } 
    return o; 
}