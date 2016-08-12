#include <iostream>
#include <string>
using namespace std;
void Polinomio();
void Imprimir(int**,int,int);
void Impresion();

int main()
{
	int Opcion=0;
	do{
    	cout<<"Ejercico 1:\nEjercicio 2:";
    	cin>>Opcion;
	if(Opcion==1){
		Polinomio();	

	}
	}while(Opcion!=0); 
 
}

void Polinomio(){
	int Grado,Dividiendo,Cont=0;
	cout<<"Ingrese el grado del polinomio: ";
	cin>>Grado;
	int** Matriz=new int*[3];
	for(int i=0;i<3;i++){
		Matriz[i]=new int[Grado];
	}	
	for(int i=Grado+1;i>0;i--){
		cout<<"Ingrese el polinomio x^"<<i-1<<":";
		cin>>Matriz[0][Cont];
		Cont++;
	}
	cout<<"Ingrese a:";
	cin>>Dividiendo;
	for(int i=0;i<2;i++){
		if(i==0){
			Matriz[1][0]=Matriz[0][0];
			Matriz[2][0]=Matriz[0][0];
			Imprimir(Matriz,Dividiendo,Grado);
		}else{
			for(int j=1;j<=Grado;j++){
			Matriz[i][j]=Matriz[i+1][j-1];
			Matriz[i+1][j]=Matriz[i-1][j]+Matriz[i][j];
			Imprimir(Matriz,Dividiendo,Grado);
			}		
		}
	}
	cout<<"El Residuo es :"<<Matriz[2][Grado]<<"\n";
}	

void Imprimir(int** Matriz,int Dividiendo,int Grado){
	for(int i=0;i<3;i++){
		for(int j=0;j<Grado+1;j++){
			cout<<" "<<Matriz[i][j];
		}
		if(i<2){
			cout<<"| "<<Dividiendo;
		}
			
		cout<<"\n";
		if(i==2){
			cout<<"------------------------ \n";
		}
	}
	cout<<"\n";
	
}

