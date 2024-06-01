//
//  Video.h
//  Tarea2
//
//  Created by Ma. Guadalupe Roque Díaz de León on 19/05/23.
//

// No borrar -
#ifndef Video_h
#define Video_h

#include <stdio.h>
#include <string>
using namespace std;
class Video{
// Atributos
protected:
    string iD;
    string titulo;
    int duracion;
    string genero;
    double calificacion;
// Métodos
public:
    // Constructores
    Video();
    Video(string _iD,string _titulo,
          int _duracion,
          string _genero,
          double _calificacion);
    
    // Métodos modificadores -
    void setID(string _iD);
    void setTitulo(string _titulo);
    void setDuracion(int _duracion);
    void setGenero(string _genero);
    void setCalificacion(double _calificacion);
    
    // Métodos de acceso -
    string getID();
    string getNombre();
    int getDuracion();
    string getGenero();
    double getCalificacion();
    
    // Otros métodos
    virtual string str();
};



#endif /* Video_hpp */
