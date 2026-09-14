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

#include "p01_multiple_grades.h"

void MostrarInformacion(){
  std::cout << "El programa consiste en un clasificacion de varias notas de alumnos con su alu que se toman de un" << std::endl;
  std::cout << "fichero aparte, no obstante usted como usuario puede agregar tantos alu como notas como le haga falta " << std::endl;
}

void LeerFichero(std::multimap<std::string, double>& notas_totales, std::string argumento1){
  std::ifstream fichero_entrada(argumento1);
  if(!fichero_entrada.is_open()){
    std::cerr << "fichero no abierto" << std::endl;
    return;
  }
  std::string alu;
  std::string nota;
  while(fichero_entrada >> alu >> nota){
    double nota_leida = std::stod(nota);
    notas_totales.insert(std::make_pair(alu, nota_leida));
  }
  fichero_entrada.close();

}

void MostrarFicheroLeido(std::multimap<std::string, double> notas_totales){
  for(const auto& [alu, nota] : notas_totales){
    std::cout << alu << " " << nota << std::endl;
  }
}

void OrganizarNotas(std::multimap<std::string, double>& notas_totales, std::map<std::string, std::vector<double>>& notas_totales_agrupadas){
  for(const auto& [alu, nota] : notas_totales){
    if(notas_totales_agrupadas.find(alu) == notas_totales_agrupadas.end()){
      std::vector<double> notas_contadas;
      notas_contadas.push_back(nota);
      notas_totales_agrupadas.insert(std::make_pair(alu, notas_contadas));
    } else{
        notas_totales_agrupadas[alu].push_back(nota);
    }
  }
}

void MostrarClasificacionNotas(std::map<std::string, std::vector<double>>& notas_totales_agrupadas){
  for(const auto& [alu, notas] : notas_totales_agrupadas){
    std::cout << alu << ": ";
    for(size_t i = 0; i < notas.size(); i++){
      std::cout << notas[i] << " ";
    }
    std::cout << std::endl;
  }
}

void IntroducirNuevoAlumno(std::string alu_user, double nota_user ,std::map<std::string, std::vector<double>>& notas_totales_agrupadas){
  if(notas_totales_agrupadas.find(alu_user) == notas_totales_agrupadas.end()){
    std::vector<double> notas_constadas;
    notas_constadas.push_back(nota_user);
    notas_totales_agrupadas.insert(std::make_pair(alu_user, notas_constadas));
  } else {
      notas_totales_agrupadas[alu_user].push_back(nota_user);
  }
}