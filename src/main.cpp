#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "persona.h" 
#include "arbol.h"
#include "pago.h"

using namespace std;

int main(){

    

    ifstream ifs("Personas.txt", ifstream::in); 

    if(!ifs.is_open()){
        cerr << "Error leyendo archivo Personas.txt" << endl;
    }

    Arbol *arbol = new Arbol(); 
    Pago *planilla = new Pago();

    ifs >> *arbol; 

    planilla->calcule_y_asignePago(arbol);

    ofstream archivo; 

    archivo.open("Reporte.csv", ios::out); 

    if(archivo.fail()){
        cout<< "No se pudo crear el archivo Reporte.csv"; 
    } 

    archivo << *arbol << ","<<endl; 
    archivo<< "Subtotal: " <<","<< planilla->deSubtotal() << ","<<endl; 
    archivo<< "Total de impuestos: " << "," << planilla->deTotalImpuestos() << ","  << endl; 
    archivo<< "Total: " << "," << planilla->deTotal()<< "," << endl; 

    archivo.close();

    
    delete arbol;
    delete planilla; 

    return 0; 


}