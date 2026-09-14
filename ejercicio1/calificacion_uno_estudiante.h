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

#ifndef CALIFICACION_UNO_ESTUDIANTE_H
#define CALIFICACION_UNO_ESTUDIANTE_H

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <iostream>
#include <utility>

void leer_fichero(std::string fichero_entrada, std::multimap<std::string,double>& alumnos);
void Clasificacion_nota_mayor(std::map<std::string,double>& todos_alumnos_mejor_nota, std::multimap<std::string,double>& todos_alumnos);
void MostrarInformacion();
void MostrarLista(std::map<std::string,double>& todos_alumnos_mejor_nota);






#endif