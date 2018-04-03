#include <iostream>

using namespace std;
int suma(int,int,int);
int resta(int,int,int);
void ingreso();
int a=0, b=0, c=0;
int main()
{
    int total=0,elec=0;
    cout << "1 para suma 2 para resta: ";
    cin >> elec;
    if(elec==1){
//        cout << "ingrese numero 1: ";
//        cin >> a;
//        cout << "ingrese numero 2: ";
//        cin >> b;
        ingreso();
        total = suma(a,b,c);
        cout << total << endl;
        total = resta(a,b,c);
        cout << total;
    }
    if(elec==2){
//        cout << "ingrese numero 1: ";
//        cin >> a;
//        cout << "ingrese numero 2: ";
//        cin >> b;
        ingreso();
        total = resta(a,b,c);
        cout << total;
    }

    return 0;
}
int suma(int num1, int num2, int num3){

    return num1+num2+num3;
}
int resta(int num1, int num2, int num3){
    return num1-num2-num3;
}
void ingreso(){
    cout << "ingrese numero 1: ";
    cin >> a;
    cout << "ingrese numero 2: ";
    cin >> b;
    cout << "ingrese numero 3: ";
    cin >> c;
}
