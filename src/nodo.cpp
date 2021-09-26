#include "nodo.h" 
#include <iostream> 

Nodo::Nodo(int _id, Persona _persona){
    this->id=_id; 
    this->persona = _persona; 
} 

Nodo::~Nodo(){
    std::clog<<"Borrando nodo " << this->id << std::endl; 

    for(Nodo* hijo : this->hijos){
        delete hijo; 
    } 

    std::clog << "Se termina de borrar nodo " << this-> id << std:: endl; 
} 

void Nodo::agregarHijo(Nodo *hijo){
    this->hijos.push_back(hijo); 
}

std::ostream& operator << (std::ostream &o, const Nodo &nodo){
    o<< "Nodo: "; 
    o<< nodo.id; 
    o<< ". Persona: "; 
    o<< nodo.id;  
    o<< std::endl; 

    for(Nodo *nodoHijo: nodo.hijos){
        o<< *nodoHijo; 
    } 
    return o; 
}