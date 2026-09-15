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

#include "p01_single_grades.h"

int main(int argc, char* argv[]){
  if( argc == 1){
    std::cerr << "Modo de empleo: " << argv[0] << " [nombre_fichero] " << std::endl;
    std::cerr << "Pruebe 'p01_single_grades --help' para mas informacion.";
    return 1;
  }
  std::string argumento1 = argv[1];
  if(argc == 2 && argumento1 == "--help"){
    MostrarInformacion();
    return 1;
  }

  std::cout << "-fichero leido-" << std::endl;
  LectorFichero Calificacion_leida;
  Calificacion_leida.LeerFichero(argumento1);
  Calificacion_leida.MostrarCalificacionLeida();
  std::cout << std::endl;

  std::cout << "-fichero clasificado-" << std::endl;
  GestorNotas calificacion_clasificada;
  calificacion_clasificada.OrdenarCalificacion(Calificacion_leida);
  calificacion_clasificada.MostrarCalificacionClasificada();

  std::cout << "¿Desea insertar una nueva nota? ¿ si o no ?" << std::endl;
  std::string respuesta_user;
  std::cin >> respuesta_user;
  while(respuesta_user == "si"){
    std::cout << "Introduzca alu y nota = ";
    std::string alu_user;
    double nota_user;
    std::cin >> alu_user >> nota_user;
    Calificacion_leida.InsertarNuevoCalificacion(alu_user,nota_user);
    calificacion_clasificada.OrdenarCalificacion(Calificacion_leida);
    calificacion_clasificada.MostrarCalificacionClasificada();
    std::cout << "¿Desea seguir insertando nuevas notas? ¿ si o no ? " << std::endl;
    std::cin >> respuesta_user;
  }


  return 0;
}
