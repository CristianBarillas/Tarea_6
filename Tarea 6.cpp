#include <iostream>
using namespace std;
//metodos y funciones =ejecutan una porcion de codigos N cantidad de veces
//metodo = no retorna un tipo de dato
//80 linea de codigo en 10 lugares distintos=800 linea de codigo de las cuales 80 son iguales
//crean una funcion o un metodo=y lo mandan a llamar 10 veces
//funcion que sume dos valores

int suma(int &num1,int &num2){
	
	int resultado=0;
	resultado=num1+num2;
	return resultado;
	
}
//metodo y envio de parametros por valor
	void suma2(int &num1,int &num2){	
	int resultado=0;
		num1+=1;
		num2+=1;
	resultado=num1+num2;
	cout<<resultado<<endl;
}
main(){
	int a=10,b=20;
	suma2(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	
	
	


		
	
	
	system("pause");
}
