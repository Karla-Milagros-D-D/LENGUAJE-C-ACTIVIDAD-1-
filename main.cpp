/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
KARLA MILAGROS DOMINGUEZ DOPORTO 

25 DE JULIO DE 2025    10:55 PM 

(actividad 1 . CALCULO DE EDAD EN LENGUAJEC++)
ESTE CODIGO EN LENGUAJE C++ SERA REALIZADO CON LA INTENCION:
DE QUE AL INGRESAR UN VALOR EN ESTE CASO EDAD SE DETERMINE SI ES MAYOR DE EDAD O NO
*******************************************************************************/

#include <iostream> 
using namespace std;

int main() {
    int edad;
    cout << "ingresar su edad";
    cin>> edad;
    if(edad>=18){
        cout << "es mayor de edad, puerta abierta."<< endl;
    }else{
        cout<<"es menor de edad,puerta cerrada."<<endl;
    }
    return 0;
} 