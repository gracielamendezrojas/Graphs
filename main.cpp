#include <iostream>
#include "grafo.h"

using namespace std;

int main()
{
    cout<<"Ejercicio 2"<<endl; 
    printEdgesGraph(createAdjacencyMatrix()); 
    system("pause"); 

    cout<<"Ejercicio 3 (extra)"<<endl; 
    createAndPrintGraph(); 
    system("pause"); 
    return 0;
}
