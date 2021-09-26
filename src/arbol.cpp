#include <map> 
#include "arbol.h" 
#include "nodo.h" 
#include "persona.h"

Arbol::Arbol(int _id, Persona _persona){
    Nodo *nodoRaiz; 

    this->elementos.insert(std::pair<int,Nodo *>(_id, nodoRaiz)); 
} 

Arbol::~Arbol(){
    delete this->raiz; 
}

void Arbol::agregarNodo(int id, Persona persona, int idPadre){
    Nodo *nodo = new Nodo(id, persona); 

    Nodo *nodoPadre = this ->elementos.at(idPadre); 
    nodoPadre->agregarHijo(nodo); 

    this -> elementos.insert(std::pair<int, Nodo *>(id, nodo)); 

} 

std::ostream& operator << (std::ostream &o, const Arbol &arbol){

    Nodo* raiz = arbol.raiz; 
    o<< *(raiz); 

    return o; 
}
