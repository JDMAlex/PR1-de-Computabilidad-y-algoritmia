// Universidad de La Laguna
// Escuela Superior de Ingenieria y Tecnologia
// Grado en Ingenieria Informatica
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Practica 1: Contenedores asociativos
// Autor: Alexandro Jesus Dorta Mirena
// Correo: alu0101802961@ull.edu.es
// Fecha: 10/09/2026
// Objetivo: creacion de las clases para cumplir con el principio de POO donde hay dos clases, una
// para leer el fichero y mostrar dicha informacion del fichero, ademas la otra clase se encarga de 
// clasificar las notas y estructurarlas

#ifndef P01_SINGLE_GRADES_H
#define P01_SINGLE_GRADES_H

#include <iostream>
#include <map>
#include <string>
#include <fstream>


class LectorFichero{
  public:
    //Constructor por defecto
    LectorFichero() = default;
    //Getter
    const std::multimap<std::string, double>& GetCalificacionLeida() const;
    //Metodos
    void LeerFichero(const std::string fichero_leer);
    void MostrarCalificacionLeida();
    void InsertarNuevoCalificacion(std::string alu, double nota);

  private:
  std::multimap<std::string, double> calificaciones_leida_;
};

class GestorNotas{
  public:
    //Constructor por defecto
    GestorNotas() = default;
    //Getter
    const std::map<std::string, double>& GetCalificacion() const;
    //Metodos
    void OrdenarCalificacion(const LectorFichero& calificaciones_leida);
    void MostrarCalificacionClasificada();
    void BuscarUsuario(const std::string& alu);


  private:
    std::map<std::string, double> calificaciones_;
};


void MostrarInformacion();



#endif