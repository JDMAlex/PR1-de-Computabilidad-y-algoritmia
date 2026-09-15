/*Universidad de La Laguna
Escuela Superior de Ingenieria y Tecnologia
Grado en Ingenieria Informatica
Asignatura: Computabilidad y Algoritmia
Curso: 2º
Practica 1: Contenedores asociativos
Autor: Alexandro Jesus Dorta Mirena
Correo: alu0101802961@ull.edu.es
Fecha: 10/09/2026
Archivo makefile: makefile.
Objetivo: creacion de las clases para cumplir con el principio de POO donde hay dos clases, una
para leer el fichero y mostrar dicha informacion del fichero, ademas la otra clase se encarga de 
clasificar las notas y estructurarlas
*/

#ifndef P01_MULTIPLE_GRADES_H
#define P01_MULTIPLE_GRADES_H

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <vector>


class LectorFichero{
  public:
    //Constructor por defecto
    LectorFichero() = default;
    //Getter
    const std::multimap<std::string, double>& GetCalificacionLeida() const;
    //Metodos
    void LeerFichero(const std::string fichero_leer);
    void MostrarCalificacionLeida();

  private:
  std::multimap<std::string, double> calificaciones_leida_;
};

class GestorNotas{
  public:
    //Constructor por defecto
    GestorNotas() = default;
    //Getter
    const std::map<std::string, std::vector<double>>& GetCalificacion() const;
    //Metodos
    void OrdenarCalificacion(const LectorFichero& calificaciones_leida);
    void MostrarCalificacionClasificada();
    void InsertarNuevoCalificacion(std::string alu, double nota);


  private:
    std::map<std::string, std::vector<double>> calificaciones_;
};


void MostrarInformacion();


#endif