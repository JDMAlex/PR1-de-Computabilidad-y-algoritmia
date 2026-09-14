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

int main(int argc, char* argv[]){
  
  if(argc == 1){
    std::cerr << "Modo de empleo: " << argv[0] << " [Nombre_fichero] " << std::endl;
    std::cerr << "Pruebe " << " 'p01_single_grades --help' para mas informacion. " << std::endl;
    return 1;
  }
  std::string argumento1 = argv[1];
  if( argc == 2 && argumento1 == "--help"){
    MostrarInformacion();
  }

  std::string fichero_entrada = argv[1];
  std::multimap<std::string,double> todos_alumnos;
  leer_fichero(fichero_entrada, todos_alumnos);
  if(todos_alumnos.empty()){
    return 1;
  }

  std::cout << std::endl;
  std::cout << "Todos los alumnos y sus notas son estos" << std::endl;
  for(const auto& [alumno, nota] : todos_alumnos){
    std::cout << "alu= " << alumno << " nota= " << nota << std::endl;
  }

  std::map<std::string,double> todos_alumnos_mejor_nota;
  Clasificacion_nota_mayor(todos_alumnos_mejor_nota, todos_alumnos);

  std::cout << std::endl;
  std::cout << "Clasificacion hecha: " << std::endl;
  MostrarLista(todos_alumnos_mejor_nota);

  
  std::cout << std::endl;
  std::cout << "¿ Desea insertar un nuevo alumno junto con su nota a la lista ? si o no " << std::endl;
  std::string respuesta_usuario;
  
  std::string alu_usuario;
  double nota_usuario;
  std::cin >> respuesta_usuario;
  std::cout << std::endl;
  if(respuesta_usuario == "si"){
    while(respuesta_usuario == "si"){
    std::cout << "Introduzca el alu y la nota del alumno = ";
    std::cin >> alu_usuario >> nota_usuario;
    todos_alumnos.insert(std::make_pair(alu_usuario, nota_usuario));
    Clasificacion_nota_mayor(todos_alumnos_mejor_nota, todos_alumnos);
    MostrarLista(todos_alumnos_mejor_nota);
    std::cout << "¿Desea seguir agregando alumnos ? si o no " << std::endl;
    std::cin >> respuesta_usuario;
    }
  }
  std::cout << "Fin del programa" << std::endl;
  


  return 0;
}