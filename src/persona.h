#ifndef PERSONA_H 
#define PERSONA_H 

#include <string> 

class Persona{
    int id_empleado; 
    std::string nombre; 
    std::string apellido; 
    std::string email; 
    int tipo_empleado; 
    int id_supervisor; 

    

    public: 
    Persona();
    Persona(int, std::string, std::string, std::string, int, int);
    virtual std::string obtenerNombre();  
    virtual void obtenerDatos();
    virtual int obtenerIdSupervisor(); 
    virtual int obtenerIDempleado();  
    friend std::ostream& operator << (std::ostream &o, const Persona &persona); 


}; 

#endif 