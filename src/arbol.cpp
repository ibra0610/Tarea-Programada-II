#include <map> 
#include "arbol.h" 
#include "nodo.h" 
#include "persona.h"
#include <string>
#include <sstream>


Arbol::Arbol(){
    this->raiz = nullptr; 

} 

Arbol::~Arbol(){
    if(this->raiz != nullptr){
        delete this->raiz; 
    }
}

void Arbol::agregarNodo(int id, Persona persona, int idPadre){
    Nodo *nodo = new Nodo(id, persona); 

    if(idPadre == 0){
        this->raiz = nodo; 
    }else{
        Nodo *nodoPadre = this->elementos.at(idPadre); 
        nodoPadre->agregarHijo(nodo); 
    }

    this ->elementos.insert(std::pair<int,Nodo *>(id, nodo)); 

} 

std::ostream& operator << (std::ostream &o, const Arbol &arbol){
    Nodo* raiz = arbol.raiz; 
    o << *(raiz); 

    return o; 
    }

std::istream& operator >> (std::istream &i, Arbol &arbol){
    std::string hilera = ""; 

    int id, tipo, supervisor; 
    std::string nombre, apellido, email;  

    while(std::getline(i,hilera)){
        id =0; 
        tipo = 0; 
        supervisor =0; 
        nombre = ""; 
        apellido =""; 
        email=""; 

        std::istringstream stream (hilera); 
        stream >> id >> nombre >> apellido >> email >> tipo >> supervisor; 
        Persona persona = Persona (); 
        persona.asigneDatos(id, nombre, apellido, email, tipo, supervisor); 

        arbol.agregarNodo(id, persona, supervisor); 
        std::clog<< "Agregando nodo: " << id << " , "<< persona << " , " << supervisor << std::endl; //ESTO ES UNA PRUEBA, RECUERDE ELIMINARLO

    }
    return i;
}
    


