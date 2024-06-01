//
//  Pelicula.cpp
//  Tarea2
//
//  Created by Ma. Guadalupe Roque Díaz de León on 19/05/23.
//

#include "Pelicula.h"

// Nota - llamar al constructor default de clase Padre
// :Video()
Pelicula::Pelicula():Video(){
    oscares = 100;
}

// Nota - llamar al constructor con parámetros de clase Padre
// :Video(_iD, _titulo, _duracion, _genero, _calificacionPromedio)
Pelicula::Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares):
Video(_iD, _titulo, _duracion, _genero, _calificacionPromedio){
    oscares = _oscares;
}

// Métodos modificadores
void Pelicula::setOscares(int _oscares){
    oscares = _oscares;
}

// Médodo de acceso
int Pelicula::getOscares(){
    return oscares;
}

// Otros métodos
string Pelicula::str(){
    return Video::str() + ' ' + std::to_string(oscares);
}
