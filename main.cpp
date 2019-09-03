#include <iostream>
#include <cstring>
using namespace std;
int tam;

void invertir(char *puntero){
    while(tam>=0){
        cout<<*(puntero+tam);
        tam--;
    }
    cout<<endl<<(puntero);
}

int main() {
   char cadena[]="PED se pasa sola";
   tam = sizeof(cadena)/sizeof(*cadena);
   cout<<"Frase Original: "<<cadena<<endl;
    invertir(cadena);


    return 0;
}