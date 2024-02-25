#ifndef Grafo_H_INCLUDED
#define Grafo_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> createAdjacencyMatrix(){

    int vertices = 4; 

    vector <vector<int> >Matrix(vertices);
    Matrix[0].push_back(0);
    Matrix[0].push_back(1);
    Matrix[0].push_back(0);
    Matrix[0].push_back(1);

    Matrix[1].push_back(1);
    Matrix[1].push_back(0);
    Matrix[1].push_back(1);
    Matrix[1].push_back(0);

    Matrix[2].push_back(0);
    Matrix[2].push_back(1);
    Matrix[2].push_back(0);
    Matrix[2].push_back(1);

    Matrix[3].push_back(1);
    Matrix[3].push_back(0);
    Matrix[3].push_back(1);
    Matrix[3].push_back(0);
    
    return Matrix; 
}

void printEdgesGraph(vector <vector<int>> Matrix){
    int vertices = Matrix.size(); 
    for(int i= 0; i < vertices; i++){
        cout<<"Vertices Adyacentes a "<<i<<"::";
        for(int j = 0; j<vertices; j ++){
            if(Matrix[i][j] == 1){
                cout<<j <<" "; 
            }
        }
        cout<<endl; 
    }
}

void createAndPrintGraph(){

    int vertices = 6, edges = 9; /*vertices aristas*/
    vector <vector<int> > Matrix(vertices);/*grafo*/

    /*rellenar el grafo*/
    for(int i=0; i< 3; i++){
        Matrix[i].push_back(3);
        Matrix[3].push_back(i);

        Matrix[i].push_back(4);
        Matrix[4].push_back(i);
        
        Matrix[i].push_back(5);
        Matrix[5].push_back(i);
    }
    
    /*Imprimir el grafo*/

    for(int i=0 ; i<vertices ; i++){
        cout<<"Vertices Adyacentes a "<<i+1<<"::";
        for(int j=0; j< Matrix[i].size(); j++){
            cout<<Matrix[i][j]+1<<' ';
        }
        cout<<endl;
    }
}



#endif // Grafo_H_INCLUDED
