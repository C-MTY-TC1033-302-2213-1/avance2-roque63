//
//  Video.cpp
//  Tarea2
//
//  Created by Ma. Guadalupe Roque Díaz de León on 19/05/23.
//

#include "Video.h"

// Constructores
Video::Video(){
    iD = "0000";
    titulo = "TC1030";
    duracion = 10;
    genero = "Computación";
    calificacion = 100;
}


Video::Video(string _iD,string _titulo,
      int _duracion,
      string _genero,
             double _calificacionPromedio){
    iD = _iD;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacion = _calificacionPromedio;
    
}


// Métodos modificadores -
void Video::setID(string _iD){
    iD = _iD;
}

void Video::setTitulo(string _titulo){
    titulo = _titulo;
}

void Video::setDuracion(int _duracion){
    duracion = _duracion;
}

void Video::setGenero(string _genero){
    genero = _genero;
}

void Video::setCalificacion(double _calificacionPromedio){
    calificacion = _calificacionPromedio;
}

// Métodos de acceso -
string Video::getID(){
    return iD;
}

string Video::getNombre(){
    return titulo;
}

int Video::getDuracion(){
    return duracion;
}

string Video::getGenero(){
    return genero;
}

double Video::getCalificacion(){
    return calificacion;
}

// Otros métodos
string Video::str(){
    return iD + ' ' + titulo + ' ' + to_string(duracion)+ ' ' + genero + ' ' + to_string(calificacion);
}
