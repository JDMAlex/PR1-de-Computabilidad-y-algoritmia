/* Universidad de La Laguna
Escuela Superior de Ingenieria y Tecnologia
Grado en Ingenieria Informatica
Asignatura: Computabilidad y Algoritmia
Curso: 2º
Practica 1: Contenedores asociativos
Autor: Alexandro Jesus Dorta Mirena
Correo: alu0101802961@ull.edu.es
Fecha: 10/09/2026
Objetivo: implementacion de los metodos de las clases como leer ficheros, clasificar informacion y sus getters
ademas que hay una funcion para mostrar la informacion del programa por si el usuario lo necesita
*/

#include "p01_single_grades.h"

void MostrarInformacion(){
  std::cout << "El objetivo del programa es clasificar la mejor nota de cada alumno. Para que funcione este programa ha de recibir " << std::endl;
  std::cout << "por parametro  el nombre del fichero en formato .txt para hacer la calificacion y mostrarla por pantalla. " << std::endl;
}

const std::multimap<std::string, double>& LectorFichero::GetCalificacionLeida() const{
  return calificaciones_leida_;
}

const std::map<std::string, double>& GestorNotas::GetCalificacion() const{
  return calificaciones_;
}


void LectorFichero::LeerFichero(const std::string fichero_leer){
  std::ifstream fichero_leido(fichero_leer);
  if(!fichero_leido.is_open()){
    std::cerr << "fichero no abierto" << std::endl;
    return;
  }
  std::string alu;
  std::string nota;
  while(fichero_leido >> alu >> nota){
    double nota_double = std::stod(nota);
    calificaciones_leida_.insert(std::make_pair(alu, nota_double));
  }

  fichero_leido.close();
}


void LectorFichero::MostrarCalificacionLeida(){
  for(const auto& [alu, nota] : calificaciones_leida_){
    std::cout << alu << ": " << nota << std::endl;
  }
}

void GestorNotas::OrdenarCalificacion(const LectorFichero& calificaciones_leida){
  for(const auto& [alu, nota] : calificaciones_leida.GetCalificacionLeida()){
    if(calificaciones_.find(alu) == calificaciones_.end()){
      calificaciones_.insert(std::make_pair(alu, nota));
    } else{
        calificaciones_[alu] = nota;
    }
  }
}

void GestorNotas::MostrarCalificacionClasificada(){
  for(const auto& [alu, nota] : calificaciones_){
    std::cout << alu << ": " << nota << std::endl;
  }
}

void LectorFichero::InsertarNuevoCalificacion(std::string alu, double nota){
  calificaciones_leida_.insert(std::make_pair(alu, nota));
}



