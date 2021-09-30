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
    void asignePago_a_Persona(float);
    void asigneNombreSup(std::string);
    int deIDSup();
    std::string deApellido();
    std::string deNombre(); 
    friend std::ostream& operator << (std::ostream &o, const Nodo &nodo); 
    
}; 

#endif