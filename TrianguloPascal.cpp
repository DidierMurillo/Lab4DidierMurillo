#include <iostream>
#include <string>
#include "TrianguloPascal.h"
#include <iomanip>
using namespace std;

void TrianguloPascal::Impresion(){
        int Col,Filas, Valor,Distancia;
        for (Filas = 0; Filas < NFilas; Filas++)
        {
                Valor = 1;
                for(Distancia = 0; Distancia <NFilas -Filas;Distancia++)
                {
                cout<<"  ";
        }

         for (Col = 0; Col <= Filas; Col++)
         {
                if(Valor%2==1){
                        cout<<setw(2)<<"  "<<"ღ ";
                        Valor = Valor * (Filas - Col) / (Col + 1);
                }else{
                        cout<<setw(2)<<"  "<<"☮ ";
                        Valor = Valor * (Filas - Col) / (Col + 1);
                }
        }
        cout<<"\n";
        }
        cout<<"\n";
}




TrianguloPascal::TrianguloPascal(int Numero){
        NFilas=Numero;
}

TrianguloPascal::~TrianguloPascal(){


}


