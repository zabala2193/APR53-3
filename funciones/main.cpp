#include <iostream>

using namespace std;
void mensaje();
int main()
{
    int c = 3;
    for(int i=1; i<=3; i++){
        switch(i){
        case 1:
            mensaje();
            break;
        case 2:
            mensaje();
            break;
        case 3:
            mensaje();
            break;
        }
    }

    return 0;
}

void mensaje(){
    cout << "Hola mensaje mas" <<endl;
    cout << "Otro mensaje" << endl;
    cout << "cosa"<< endl;
}
