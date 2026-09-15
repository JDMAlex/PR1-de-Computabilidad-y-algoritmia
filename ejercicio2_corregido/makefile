## Universidad de La Laguna
## Escuela Superior de Ingenieria y Tecnologia
## Grado en Ingenieria Informatica
## Asignatura: Computabilidad y Algoritmia
## Curso: 2º
## Practica 1: Contenedores asociativos
## Autor: Alexandro Jesus Dorta Mirena
## Correo: alu0101802961@ull.edu.es
## Fecha: 10/09/2026
## Archivo makefile: makefile.
## Contiene la funcion main del proyecto que usa las clases X e Y
## para ... (indicar brevemente el objetivo)
## Referencias:
## Enlaces de interes
## Historial de revisiones
## 12/09/2023 - Creacion (primera version) del codigo

# Variables de configuración
CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = p01_multiple_grades
OBJS = p01_multiple_grades_main.o p01_multiple_grades.o

# Regla principal
$(TARGET) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)
# Reglas para compilar cada archivo objeto
p01_multiple_grades_main.o: p01_multiple_grades_main.cc p01_multiple_grades.h
	$(CXX) $(CXXFLAGS) -c p01_multiple_grades_main.cc
p01_multiple_grades.o: p01_multiple_grades.cc p01_multiple_grades.h
	$(CXX) $(CXXFLAGS) -c p01_multiple_grades.cc
# Regla para limpiar archivos temporales
clean:
	rm -f $(TARGET) $(OBJS)
# Declara objetivos que no son archivos físicos
.PHONY: clean