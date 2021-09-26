#include "persona.h" 
#include <string> 


Persona::Persona(int _id_empleado, std::string _nombre, std::string _apellido, std::string _email, int _tipo_empleado, int _id_supervisor){
    this-> id_empleado = _id_empleado; 
    this->nombre = _nombre; 
    this-> apellido = _apellido; 
    this-> email = _email; 
    this-> tipo_empleado = _tipo_empleado; 
    this-> id_supervisor = _id_supervisor; 
}

//std::string Persona::obtenerDatos(){
  //  return "ID de empleado: " + id_empleado + " Nombre: " + nombre + " Apellido: " + apellido + " Email: " + email + " Tipo de empleado: " + 
  // tipo_empleado + " ID supervisor: " + id_supervisor; 
//}
