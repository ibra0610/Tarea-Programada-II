#ifndef ARBOL_H
#define ARBOL_H

#include "persona.h"
#include "nodo.h"
#include <map> 

class Arbol{

    Nodo *raiz; 
    std::map<int, Nodo *> elementos; 

    public: 
    Arbol(int id, Persona persona); 
    ~Arbol(); 
    void agregarNodo(int id, Persona persona, int idPadre); 

    friend std::ostream& operator << (std::ostream &o, const Arbol &arbol); 
}; 

#endif 
