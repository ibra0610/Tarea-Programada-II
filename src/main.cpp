#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "persona.h" 

using namespace std; 

int main(){

    ifstream ifs("Personas.txt", ifstream::in); 
    if(!ifs.is_open()){
        cerr<< "Error al leer el archivo Personas.txt" << endl; 
        return -1;  
    } 

    string hilera = ""; 

    int id, tipo, supervisor; 
    string nombre, apellido, email; 

    while(getline(ifs, hilera)){
        try{
            istringstream stream(hilera); 
            id=0; 
            tipo=0; 
            supervisor=0; 
            nombre = ""; 
            apellido = ""; 
            email = ""; 

            stream >> id >> nombre >> apellido >> email >> tipo >> supervisor; 
            Persona * persona = new Persona(id, nombre, apellido,email, tipo, supervisor);  
            persona -> obtenerDatos(); 


            if(nombre.length()==0){
                string error = "Error en línea \"" + hilera + "\". Nombre no puede ser vacío.";
                throw error;
            } 
        }
        catch(string &exception){
            cerr<< exception << endl; 
        }
    } 

    ifs.close(); 

    return 0; 


}