// Actividad43.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <cstdbool>
#include <stdbool.h>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <iterator>
#include <tuple>

using namespace std;
//Obtiene la 4ta palabra de una linea y despues filtra esa palabra para 
//Que solo devuelva el contenido antes de :
//Es decir, filtra la ip sin ":"
string reduceWord(string str)
{
    // word variable to store word
    string word;
    int contador = 0;

    // making a string stream
    stringstream iss(str);

    // Read and print each word.
    while (iss >> word) {
        if (contador == 3) {
            //return process(word);
        }
        contador++;
    }

    return word;
}

void printThirdAndFourthWord(string str)
{
    // word variable to store word
    string word;
    int contador = 0;

    // making a string stream
    stringstream iss(str);

    // Read and print each word.
    while (iss >> word) {
        if (contador == 3) {
            cout << word << endl;
        }
        if (contador == 4) {
            cout << word << endl;
        }
        contador++;
    }

}

void ChargeOnGraph() {

}

void ReturnFirstLine(string filename) {

    string dummyLine; //Para saltarnos solo la primera linea
    std::ifstream infile(filename);
    getline(infile, dummyLine);
    std::istringstream iss(dummyLine);
    int a, b;
    iss >> a >> b;
    cout << a << " " << b << endl;
}


int main()
{

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
