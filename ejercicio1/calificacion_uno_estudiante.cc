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

#include "calificacion_uno_estudiante.h"

void MostrarInformacion(){
  std::cout << "El objetivo del programa es clasificar la mejor nota de cada alumno. Para que funcione este programa ha de recibir " << std::endl;
  std::cout << "por parametro  el nombre del fichero en formato .txt para hacer la calificacion y mostrarla por pantalla. " << std::endl;
}


void leer_fichero(std::string fichero_entrada, std::multimap<std::string,double>& alumnos){
  std::ifstream fichero_leido(fichero_entrada);
  if(!fichero_leido.is_open()){
    std::cerr << "error fichero no abierto" << std::endl;
    return;
  }
  std::string nombre_alumno;
  std::string nota_alumno;
  while(fichero_leido >> nombre_alumno >> nota_alumno){
    double nota_leida = std::stod(nota_alumno);
    alumnos.insert(std::make_pair(nombre_alumno, nota_leida));
  }
}

void Clasificacion_nota_mayor(std::map<std::string,double>& todos_alumnos_mejor_nota, std::multimap<std::string,double>& todos_alumnos){
  for(const auto&[persona, nota] :todos_alumnos ){
    if(todos_alumnos_mejor_nota.find(persona) == todos_alumnos_mejor_nota.end()){
      todos_alumnos_mejor_nota[persona] = nota;
    } else if(nota > todos_alumnos_mejor_nota[persona]){
      todos_alumnos_mejor_nota[persona] = nota;
    }
  }
}

void MostrarLista(std::map<std::string,double>& todos_alumnos_mejor_nota){
  for(const auto& [alumno, nota] : todos_alumnos_mejor_nota){
    std::cout << "alu= " << alumno << " nota= " << nota << std::endl;
  }
}
