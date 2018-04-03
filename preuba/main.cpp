#include<iostream>
#define kwtotal 10000
using namespace std;
void consumo(float cons){

    cout<<  "Ingrese su consumo: ";
    cin>> cons;
    float a;
    a = (cons / kwtotal) * 100;
    cout << a;
    if(a >= 80 && a <= 100){
            cout<< "CONSUMO MEDIO" ;
    }
    else if(a > 100){
    cout<< "ALTO CONSUMO DE ENERGIA";
     }
     }
     int main(){
         float cons;
         consumo(cons);
         return 0; }
