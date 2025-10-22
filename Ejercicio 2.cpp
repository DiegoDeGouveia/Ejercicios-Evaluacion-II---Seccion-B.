/*
Realice un programa que emplee instrucciones repetitivas para determinar
el numero de vehiculos cuyo precio de venta sea menor de 25.000$,
entre 75.000$ y 120.000$ y mayores de 120.000$ de un total de n entas realizadas
mensualmente ingresada por teclado. No se permite usar arreglos ni funciones
en este ejercicio
*/
#include<iostream>
using namespace std;

char respuesta;
int main(){

    int venta;
    int n;
    int contadorBajo = 0;
    int contadorMedio = 0;
    int contadorAlto = 0;
    char respuesta;    
    do {
 
 		cout<<"Ingrese el numero de ventas: ";
 		cin>>n;

        for(int i=0; i<n ; i++){

              cout<<"Ingrese el valor de la venta: ";
            cin>>venta;


            if(venta<25000){
                contadorBajo++;
            }
            
           else if (venta >= 75000 && venta <= 120000) {
             contadorMedio++;
        	 }
        	 
        	else  if (venta>120000){
                    contadorAlto++;
               }

        }
    
        cout<<"El numero de ventas menores a 25.000$ es: "<<contadorBajo<<endl;

       
        cout<<"El numero de ventas entre 75.000$ y 120.000$ es: "<<contadorMedio<<endl;

 
        cout<<"El numero de ventas mayores de 120.000$ es: "<<contadorAlto<<endl;
       
       	cout<<"Presione S para continuar, de lo contrario presione otra tecla"<<endl;
		cin>>respuesta;
		cout<<endl;
    } while (respuesta == 's' || respuesta == 'S') ; 

}
