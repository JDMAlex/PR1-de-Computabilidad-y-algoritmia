// Universidad de La Laguna
// Escuela Superior de Ingenieria y Tecnologia
// Grado en Ingenieria Informatica
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Practica 1: Contenedores asociativos
// Autor: Alexandro Jesus Dorta Mirena
// Correo: alu0101802961@ull.edu.es
// Fecha: 10/09/2026
// Archivo makefile: makefile.
// Contiene la funcion main del proyecto que usa las clases X e Y
// para ... (indicar brevemente el objetivo)
// Referencias:
// Enlaces de interes
// Historial de revisiones
// 12/09/2023 - Creacion (primera version) del codigo

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
    void OrdenarCalificacion(const LectorFichero& Calificacion_leida);
    void MostrarCalificacionClasificada();


  private:
    std::map<std::string, double> calificaciones_;
};


void MostrarInformacion();


#endif