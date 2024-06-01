//
//  Polimorfismo.h
//  Tarea3
//
//  Created by Ma. Guadalupe Roque Díaz de León on 23/05/24.
//
#ifndef Polimorfismo_h
#define Polimorfismo_h
#include <typeinfo>
#include <iostream>
#include <sstream>
#include <fstream>
#include "Pelicula.h"
#include "Serie.h"
#include "Episodio.h"
#include <stdio.h>

using namespace std;
const int MAX_VIDEOS = 100;

// Para identificar si un objeto es de cierta clase usaremos
// la función   typeid( )
// if (typeid(*arrPtrVideos[index]) == typeid(Pelicula))

class Polimorfismo{
private:
    Video *arrPtrVideos[MAX_VIDEOS];
    int cantidad;

    
public:
    // Constructor default - vacio
    Polimorfismo();
    
    void leerArchivo(string _nombre);


    // Métodos modificadores - setters
    void setPtrVideo(int index, Video *video);
    void setCantidad(int _cantidad);
    
    // Métodos de acceso - getters
    Video* getPtrVideo(int index);
    int getCantidad();
    
    // Otros métodos
    void reporteInventario();
    void reporteCalificacion(double _calificacion);
    void reporteGenero(string _genero);
    void reportePeliculas();
    void reporteSeries();
    
};


#endif /* Polimorfismo_h */




