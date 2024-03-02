#include <iostream>
using namespace std;

int main() {


    int i = 0;
    int cantidad = 50;

    cout << "Numeros impares a partir del 0 hasta el " << cantidad <<  " "<< ":";
    while (i  < cantidad) {
        int a = i % 2 == 0 ; //numeros impares
        int b = i % 2 != 0 ; //numeros pares
        if ( a ) {
            cout << i + 1 << " ";
        }


      /*  else if (b){
            cout << i + 1<< " ";
            cout << b ;
        }*/
         i++;
    }





    return 0;
}
