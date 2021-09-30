#ifndef PERSONA_H 
#define PERSONA_H 

#include <string> 

class Persona{
    int id_empleado; 
    std::string nombre; 
    std::string apellido; 
    std::string email;
    std::string nombre_supervisor; 
    int tipo_empleado; 
    int id_supervisor; 
    float pago_neto;

    

    public: 
    Persona();
    void asigneDatos(int, std::string, std::string, std::string, int, int);
    void asignePago(float);
    void asigneNombreSupervisor(std::string); 
    int deID_Empleado();
    int deID_supervisor();
    float dePago();
    std::string deNombre();
    std::string deApellido(); 
    friend std::ostream& operator << (std::ostream &o, const Persona &persona); 


}; 

#endif 