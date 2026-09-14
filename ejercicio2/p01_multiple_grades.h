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

#ifndef P01_MULTIPLE_GRADES_H
#define P01_MULTIPLE_GRADES_H

#include<iostream>
#include<fstream>
#include<map>
#include<vector>

void MostrarInformacion();
void LeerFichero(std::multimap<std::string, double>& grades_total, std::string argumento1);
void MostrarFicheroLeido(std::multimap<std::string, double> notas_totales);
void OrganizarNotas(std::multimap<std::string, double>& notas_totales, std::map<std::string, std::vector<double>>& notas_totales_agrupadas);
void MostrarClasificacionNotas(std::map<std::string, std::vector<double>>& notas_totales_agrupadas);
void IntroducirNuevoAlumno(std::string alu_user, double nota_user ,std::map<std::string, std::vector<double>>& notas_totales_agrupadas);






#endif