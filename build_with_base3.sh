#!/bin/bash

g++ -c read_results_file.cpp -o read_results_file.o
g++ -c node_location_tests.cpp -o node_location_tests.o
g++ -c FEM_solution_manipulation.cpp -o FEM_solution_manipulation.o
g++ -c Grid_Conversion3.cpp -o Grid_Conversion3.o

g++ read_results_file.o node_location_tests.o FEM_solution_manipulation.o Grid_Conversion3.o -o Grid_Conversion3
