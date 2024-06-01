//
//  Poliformismo.cpp
//  Tarea2
//
//  Created by Ma. Guadalupe Roque Díaz de León on 25/05/23.
//


#include "Polimorfismo.h"
// Constructor default - vacio
Polimorfismo::Polimorfismo(){
    for (int index = 0; index < MAX_VIDEOS; index++){
        arrPtrVideos[index] = nullptr;
    }
    
    // Inicializar cantidad de videos
    cantidad = 0;
}
 
// Métodos modificadores - setters
/*
void Polimorfismo::setPtrVideo(int index, Video* video)
    - Validar que existe ese video en la posición index
    - si si existe se modifica esa posición del arreglo de apuntadores
    y se le asigna el apuntador recibido como parámetro de entrada
    - i no existe no se modifica el arreglo de apuntadores.
*/
void Polimorfismo::setPtrVideo(int index, Video* video){
    // validar index >=0 && index < cantidad
    if ( index >= 0 && index < cantidad){
        // cambiar modicar el apuntador
        arrPtrVideos[index] = video;
    }
}

/*
void Polimorfismo::setCantidad(int _cantidad)
    - cambia el valor del atributo cantidad
    - validar que cantidad  este entre 0 .. MAX_VIDEOS, 
    - de lo contrario NO se modifica el valor del cantidad
*/
void Polimorfismo::setCantidad(int _cantidad){
    // validar el valor de _cantidad
    if (_cantidad >= 0 && _cantidad <= MAX_VIDEOS){
        cantidad = _cantidad;
    }
}

/*
Video* Polimorfismo::getPtrVideo(int index)
    - retorna el apuntador que esta en la posición indicada en index
    - el método debe validar que exista index en el arreglo de apuntadores
*/
Video* Polimorfismo::getPtrVideo(int index){
    // validar que exista el index
    if (index >= 0 && index < cantidad){
        return arrPtrVideos[index];
    }

    // si no existe
    return nullptr;
}

/*
int Polimorfismo::getCantidad(){
    - retorna el atributo cantidad
*/ 
int Polimorfismo::getCantidad(){
    return cantidad;
}

/* 
void Polimorfismo::reporteInventario()
    Despliega la información de todas las series y peliculas del arreglo
    usando el método str() correspondiente al tipo del apuntador,
    al final despliega  
    Peliculas = ##
    Series = ##
    Nota: ## indica la cantidad en existencia (ver casos de prueba).
*/
void Polimorfismo::reporteInventario(){
    // Declaración de contadores
    int contPeliculas, contSeries;

    // inicializar 
    contPeliculas = 0;
    contSeries = 0;
    
    // recorrer todo el arreglo de ptr usando un for
    for (int index = 0; index < cantidad; index++){
        std::cout << arrPtrVideos[index]->str() << endl;

        // * indirección (ptr) genera el objeto
       if (typeid(*arrPtrVideos[index]) == typeid(Pelicula)){
            contPeliculas++;
       }
       else  if (typeid(*arrPtrVideos[index]) == typeid(Serie)){
            contSeries++;
       }
    }

    // fuera del for - desplegar los totales
    std::cout << "Peliculas = " << contPeliculas << endl;
    std::cout << "Series = " << contSeries << endl;
}

/*
void Polimorfismo::reporteCalificacion(double _calificacion)
    Despliega la información de todas las Series y Peliculas que tienen 
    la calificación indicada en el parámetro de entrada,
    al final despliega la cantidad con el siguiente mensaje (ver casos de prueba).
    Total = ##
    Nota: ## indica la cantidad en existencia (ver casos de prueba).
*/
void Polimorfismo::reporteCalificacion(double _calificacion){
// contador total
int total;

    // inicializar el contador
    total = 0;

    for(int index = 0; index < cantidad; index++){
        // verificar si tiene la calificacion == _calificacion
        // si es un apuntador se usa la notación ->
        if (arrPtrVideos[index]->getCalificacion() == _calificacion){
            std::cout << arrPtrVideos[index]->str() << endl;
            total++;
        }
    }

    // desplegar el total fuera del for
    std::cout << "Total = " << total << endl;
}

/*
void Polimorfismo::reporteGenero(string _genero)
    Despliega la información de todas las Series y Peliculas que 
    tienen el genero indicado en el parámetro de entrada,
    al final despliega la cantidad que cumplio (ver casos de prueba).
    Total = ##
*/
void Polimorfismo::reporteGenero(string _genero){
    int total = 0;
for(int index = 0; index < cantidad; index++){
        // verificar si tiene la calificacion == _calificacion
        // si es un apuntador se usa la notación ->
        if (arrPtrVideos[index]->getGenero() == _genero){
            std::cout << arrPtrVideos[index]->str() << endl;
            total++;
        }
    }

    // desplegar el total fuera del for
    std::cout << "Total = " << total << endl;
}

/*
void Polimorfismo::reportePeliculas()
    Despliega la información de todas las Peliculas que existan en el arreglo,
    al final despliega la cantidad en existencia.
    Total Peliculas = ##
    en caso de que no existan peliculas debe
    desplegar No peliculas con salto de línea al final(ver casos de prueba)
*/
void Polimorfismo::reportePeliculas(){
// Declaración de contadores
    int contPeliculas;

    // inicializar 
    contPeliculas = 0;
    
    // recorrer todo el arreglo de ptr usando un for
    for(int index = 0; index < cantidad; index++){
        // * indirección (ptr) genera el objeto
       if ( typeid(*arrPtrVideos[index]) == typeid(Pelicula) ){
            contPeliculas++;
            std::cout << arrPtrVideos[index]->str() << endl;

       } 
    }
    
    if (contPeliculas == 0){
        std::cout << "No peliculas" << endl;
    }
    else {
        std::cout << "Total Peliculas = " << contPeliculas << endl;
    }

}

/*
void Polimorfismo::reporteSeries(){
    Despliega todos las Series que existan en el arreglo,
    al final despliega la cantidad en existencia.
    Total Series = ##
    en caso de que no existan Series debe
    desplegar No series con salto de línea al final
*/
void Polimorfismo::reporteSeries(){
int contSeries;

    // inicializar 
    contSeries = 0;
    
    // recorrer todo el arreglo de ptr usando un for
    for (int index = 0; index < cantidad; index++){

        // * indirección (ptr) genera el objeto
       if (typeid(*arrPtrVideos[index]) == typeid(Serie)){
            contSeries++;
            std::cout << arrPtrVideos[index]->str() << endl;

       } 
    }
    if (contSeries == 0){
        std::cout << "No series" << endl;
    }
    else {
        std::cout << "Total Series = " << contSeries << endl;
    }
}

void Polimorfismo::leerArchivo(string nombre ){
    // todas las declaraciones se hacen abajo del encabezado estandar c++ ITESM
    Serie *arrPtrSeries[50];
    Pelicula *arrPtrPeliculas[50];
    Episodio episodio;
    fstream entrada;
    string row[7];              // row - arreglo de 7 elementos de strings, para almacenar los datos de la línea del archivo ya separados
    string line, word;          // line-  almacena la linea leída, y word la palabra que se saca de line
    int cantidadPeliculas = 0;  // contadores de peliculas y series, inicialmente son 0
    int cantidadSeries = 0;
    int iR = 0, index;
    double promedio;

    entrada.open(nombre, ios::in);      // Abrir archivo de entrada

    while ( getline(entrada, line)) {   // lee una línea del archivo y la almacena en line
        stringstream s(line);           // usado para separar las palabras  split()
        iR = 0;                         // Cada vez que inicia una nueva línea inicializar iR = 0

        // Ciclo que extrae caracteres de s y los almacena en word hasta que encuentra el delimitador ','
        while (getline(s, word, ',')) {
             // añade word al arreglo row e incrementa iR p/la proxima palabra
            row[iR++] = word;            
        }
        
        // Determinar si la línea es P-Pelicula, S-Serie, E-Episocio
        if (row[0] == "P"){
            // se crea un apuntador usando el operador new y el constructor con parámetros y se guarda en el arrPtrPeliculas
            arrPtrPeliculas[cantidadPeliculas] = new Pelicula( row[1], row[2], stoi(row[3]), row[4], stod(row[5]), stoi(row[6]));
            // cout << "Pelicula" << arrPeliculas[cantidadPeliculas]->str() << endl;
            cantidadPeliculas++; //inc la cantidad de peliculas
        }
        else if (row[0] == "S"){
            arrPtrSeries[cantidadSeries] = new Serie( row[1], row[2], stoi(row[3]), row[4], stod(row[5]));
            // cout << "Serie" << arrSeries[cantidadSeries]->str() << endl;
            cantidadSeries++;
        }
        else if (row[0] == "E"){
            // Calcular a qué Serie le pertenece el episodio?
            index = stoi(row[1]) - 500;
            // Se agrega el episodio usando el método agragaEpisodio
            // Se crea el apuntador y se convierte a objeto usando el operador de indirección
            arrPtrSeries[index]->agregaEpisodio(* new Episodio( row[2], stoi(row[3]), stoi(row[4])));

            // cout << "Episodio" << arrSeries[index]->str() << endl;
        }
    }
    
    // fuera del ciclo
    // ya se termino de leer todo el archivo ahora se guardan los
    // todos los apuntadores de Pelicula y Serie en el arrPtrVideo
    // copiar todos los apuntadores del arreglo de Series al arreglo de apuntadores de Video calculando su calificacionPromedio
    // ya que tiene todos los episodios

    for(int index = 0; index < cantidadSeries; index++){
        promedio = arrPtrSeries[index]->calculaPromedio(); // calcula la calificacion de la Serie
        arrPtrSeries[index]->setCalificacion(promedio); // cambia la calificacion de la Serie
        // añade el calcular la duración de la serie
        arrPtrSeries[index]->calculaDuracion();
        arrPtrVideos[cantidad++] = arrPtrSeries[index];
    }
    
    // copiar todos los apuntadores del arreglo de Peliculas al arreglo de apuntadores de Video
    for(int index = 0; index < cantidadPeliculas; index++){
        arrPtrVideos[cantidad++] = arrPtrPeliculas[index];
    }
    
    /* Desplegar todo el contenido del arreglo de apuntadores de la clase Video (Base)
     - se da el POLIFORMISMO  - SUPER SUPER SUPER !!, 
     se ejecuta el método str() que corresponde al tipo del apuntador almacenado, 
     no el correspondiente al tipo del arreglo.
     Favor de comentar el siguiente código para el Avance2
     */

//  for(int index = 0; index < cantidad; index++){
//   cout << index << " " << arrPtrVideos[index]->str() << endl;
//  }
    
    
    entrada.close(); // cerrar el archivo
}







