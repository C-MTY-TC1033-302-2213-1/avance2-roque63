//
//  Episodio.hpp
//  Tarea2
//
//  Created by Ma. Guadalupe Roque Díaz de León on 19/05/23.
//

#ifndef Episodio_h
#define Episodio_h

#include <stdio.h>
#include <string>
using namespace std;

class Episodio{
private:
    string titulo;
    int temporada;
    int calificacion;
    
public:
    Episodio();
    Episodio(string _titulo, int _temporada, int _calificacion);
    
    // métodos modificadores
    void setTitulo(string _titulo);
    void setTemporada(int _temporada);
    void setCalificacion(int _calificacion);
    
    // métodos de acceso
    string getTitulo();
    int getTemporada();
    int getCalificacion();
    
    string str();
};

#endif /* Episodio_hpp */
