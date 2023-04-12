cmake_minimum_required(VERSION 3.25.1)
project(Pessoa VERSION 0.1 LANGUAGES CXX )

include_directories( include )


add_executable( program
                src/main.cpp
                src/pessoa.cpp )


