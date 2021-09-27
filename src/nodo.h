#ifndef NODO_H 
#define NODO_H 

#include <iostream>
#include <vector> 
#include "persona.h" 

class Nodo{
    int id ;
    Persona persona; 
    std::vector<Nodo *> hijos; 

    public: 
    Nodo(int id, Persona persona); 
    ~Nodo(); 

    void agregarHijo(Nodo *hijo); 

    friend std::ostream& operator << (std::ostream &o, const Nodo &nodo); 
    
}; 

#endif