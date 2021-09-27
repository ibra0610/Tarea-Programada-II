#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "persona.h" 
#include "arbol.h"


int main(){

    

    std::ifstream ifs("Personas.txt", std::ifstream::in); 

    if(!ifs.is_open()){
        std::cerr << "Error leyendo archivo Personas.txt" << std::endl;
    }

    Arbol *arbol = new Arbol(); 

    ifs >> *arbol; 

    std::cout <<arbol; 

    delete arbol;

    return 0; 


}