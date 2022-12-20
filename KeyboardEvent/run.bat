@echo off 

echo Compiling main.cpp
g++ -c main.cpp -Isrc/include 
echo Compiling main.o
g++ main.o -o sfml-app -Lsrc/lib -lsfml-graphics -lsfml-window -lsfml-system 
echo Running sfml-app
sfml-app 