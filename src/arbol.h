#ifndef ARBOL_H
#define ARBOL_H

#include "persona.h"
#include "nodo.h"
#include <map> 
#include <iostream>

class Arbol{

    Nodo *raiz; 
    std::map<int, Nodo *> elementos; 

    public: 
    Arbol(); 
    ~Arbol(); 
    void agregarNodo(int id, Persona persona, int idPadre); 
    void asignePago(int, float); 
    std::string deNombre(int); 
    void asigneNombreSupervisor(int, std::string);
    friend std::ostream& operator << (std::ostream &o, const Arbol &arbol);
    friend std::istream& operator >> (std::istream &i, Arbol &arbol); 
     
}; 

#endif 
