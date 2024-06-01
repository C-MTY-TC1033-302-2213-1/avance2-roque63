//
//  Serie.cpp
//  Tarea2
//
//  Created by Ma. Guadalupe Roque Díaz de León on 19/05/23.
//

#include "Serie.h"

    // Constructor default
Serie::Serie():Video(){
    cantidad = 0;
}

Serie::Serie(string _iD,string _titulo,int _duracion,string _genero,double _calificacion):
Video(_iD, _titulo, _duracion, _genero, _calificacion){
    cantidad = 0;
}
    
// Métodos modificadores
void Serie::setEpisodio(int index, Episodio episodio){
    if (index >= 0 && index < cantidad){
        episodios[index] = episodio;
    }
}
void Serie::setCantidad(int _cantidad){
    if (_cantidad >= 0 && _cantidad < 5)
        cantidad = _cantidad;
}
    
    // Métodos de acceso
Episodio Serie::getEpisodio(int index){
    if (index >= 0 && index < cantidad)
        return episodios[index];
    
    return Episodio();
}

int Serie::getCantidad(){
    return cantidad;
}
    
// Otros métodos
string Serie::str(){
    string epi = "\n";
    
    for (int cant = 0; cant < cantidad; cant++)
        epi = epi + episodios[cant].str() + '\n';
    
    return Video::str() + ' ' + to_string(cantidad)  + epi;
    
}

// Otros métodos
// 1. sumar todas las calificaciones de los episodios
// 2. calcular el promedio
// 3. modificar el atributo calificacionPromedio
// 4. retorna el promedio
double Serie::calculaPromedio(){
    // Declarar un acumulador double -
    double promedio = 0;
    for(int index = 0; index < cantidad; index++){
        promedio = promedio + episodios[index].getCalificacion();
    }
    // Verificar si existen episodios
    if (cantidad > 0){
        promedio = promedio / cantidad;
    }
    calificacion = promedio;
    return promedio;
}

void Serie::agregaEpisodio(Episodio _episodio){
    if (cantidad < 5){
        episodios[cantidad++] = _episodio;
    }
}


void Serie::calculaDuracion(){
        int acum = 0;
        for(int index = 0; index < cantidad; index++){
            acum = acum + episodios[index].getTemporada();
        }
        duracion = acum;
}


