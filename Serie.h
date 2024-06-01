//
//  Serie.h
//  Tarea2
//
//  Created by Ma. Guadalupe Roque Díaz de León on 19/05/23.
//

#ifndef Serie_h
#define Serie_h

#include <stdio.h>
#include "Episodio.h"
#include "Video.h"

class Serie: public Video{
    
private:
    Episodio episodios[5];
    int cantidad;
    
public:
    // Constructor default
    Serie();
    Serie(string _iD,string _titulo,
    int _duracion,
    string _genero,
    double _calificacion);
    
    
    // Métodos modificadores
    void setEpisodio(int index, Episodio episodio);
    void setCantidad(int _cantidad);
    
    // Métodos de acceso
    Episodio getEpisodio(int index);
    int getCantidad();
    
    // Otros métodos
    double calculaPromedio();
    string str();
    void agregaEpisodio(Episodio episodio);

    // método que actualiza duracion en base 
    // calculando los minutos de la serie en base a la suma de todos los minutos de sus episodios,
    // si la serie no tiene episodios se cambia a 0
    void calculaDuracion(); 
};


#endif /* Serie_h */
