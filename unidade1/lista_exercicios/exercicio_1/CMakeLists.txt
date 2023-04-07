cmake_minimum_required(VERSION 3.25.1)
project(Funcionario VERSION 0.1 LANGUAGES CXX )

include_directories( include )


add_executable( program
                src/main.cpp
                src/funcionario.cpp )
