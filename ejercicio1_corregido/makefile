## Universidad de La Laguna
## Escuela Superior de Ingenieria y Tecnologia
## Grado en Ingenieria Informatica
## Asignatura: Computabilidad y Algoritmia
## Curso: 2º
## Practica 1: Contenedores asociativos
## Autor: Alexandro Jesus Dorta Mirena
## Correo: alu0101802961@ull.edu.es
## Fecha: 10/09/2026
## Archivo makefile: Makefile se encarga de compilar el programa princicpal y asu vez los .o


# Variables de configuración
CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = p01_single_grades
OBJS = p01_single_grades_main.o p01_single_grades.o

# Regla principal
$(TARGET) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)
# Reglas para compilar cada archivo objeto
p01_single_grades_main.o: p01_single_grades_main.cc p01_single_grades.h
	$(CXX) $(CXXFLAGS) -c p01_single_grades_main.cc
p01_single_grades.o: p01_single_grades.cc p01_single_grades.h
	$(CXX) $(CXXFLAGS) -c p01_single_grades.cc
# Regla para limpiar archivos temporales
clean:
	rm -f $(TARGET) $(OBJS)
# Declara objetivos que no son archivos físicos
.PHONY: clean