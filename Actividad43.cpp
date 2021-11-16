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

tuple<string,string> returnThirdAndFourthWord(string str)
{
    // word variable to store word
    string word;
    int contador = 0;
    string terceraP, cuartaP;
 
    // making a string stream
    stringstream iss(str);

    // Read and print each word.
    while (iss >> word) {
        if (contador == 3) {
            cout << word << " ";
            terceraP = word;
        }
        if (contador == 4) {
            cout << word << endl;
            cuartaP = word;
        }
        contador++;
    }
    return { terceraP, cuartaP };
}

tuple<int, int> ReturnFirstAndSecondNumber(string str) {
    string word;
    int contador = 0;
    int primeraP, segundaP;
    // making a string stream
    stringstream iss(str);

    // Read and print each word.
    while (iss >> word) {
        if (contador == 0) {
            cout << word << " ";
            primeraP = stoi(word);
        }
        if (contador == 1) {
            cout << word << endl;
            segundaP = stoi(word);
        }
        contador++;
    }
    return { primeraP, segundaP };
}

string ReturnFirstWord(string str) {
    string word;
    int contador = 0;
    // making a string stream
    stringstream iss(str);

    // Read and print each word.
    while (iss >> word) {
        if (contador == 0) {
            cout << word << endl;
            return word;
        }
        contador++;
    }
    return word;
}

int main()
{
    /**
    string holamundo = "Sep 17 00:54:39 33.213.148.82:2528 137.169.193.233:3170 Failed password for admin";
    
    //tie(firstNumber, secondNumber) = ReturnFirstAndSecondNumber(holamundo);
    tie(ThirdNumber, FourthNumber) = returnThirdAndFourthWord(holamundo);
    **/

    int firstNumber, secondNumber;
    int i = 0, j;
    string ThirdWord, FourthWord, Node, Edge;

    //Cargamos Nombre de archivo
    string filename;
    filename = "bitacoracorta.txt";

    string Linea;

    //Leer solo la primera Linea (Nodes,Edges)
    ifstream infile(filename);
    getline(infile, Linea);
    istringstream iss(Linea);
    tie(firstNumber, secondNumber) = ReturnFirstAndSecondNumber(Linea);

    //Leemos todos los Nodes y los anadimos a Graph
        while (std::getline(infile, Linea))
        {
            istringstream iss(Linea);
            Node = ReturnFirstWord(Linea);
            //Anadir el Node a Graph
            //Graph.[i] = Node;
            if (i < firstNumber -1) {
                i++;
            }
            else {
                break;
            }
            
        }
        i = 0;
    //Leemos todos Edges y los anadimos a Graph
        while (std::getline(infile, Linea)){
        istringstream iss(Linea);
        tie(ThirdWord,FourthWord) = returnThirdAndFourthWord(Linea);
        //Anadimos el Edge a Graph
        //Graph.AddEdge(ThirdNumber,FourthNU
        if (i < firstNumber) {
            i++;
        }
        else {
            break;
        }
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
