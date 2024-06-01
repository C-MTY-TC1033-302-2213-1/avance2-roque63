//
//  Pelicula.h
//  Tarea2
//
//  Created by Ma. Guadalupe Roque Díaz de León on 19/05/23.
//

#ifndef Pelicula_h
#define Pelicula_h

#include <stdio.h>
#include <string>
#include "Video.h"

class Pelicula: public Video{
private:
    int oscares;
public:
    Pelicula();
    Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares);
    
    // Métodos modificadores
    void setOscares(int _oscares);
    
    // Médodo de acceso
    int getOscares();
    
    // Otros métodos
    string str();
};
#endif /* Pelicula_hpp */
