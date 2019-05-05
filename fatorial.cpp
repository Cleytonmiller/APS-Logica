#ifndef fatorial
#define fatorial
#include <iostream>
#endif

using namespace std;

int exfatorial() {
    
    int numero ;
    int fim ;
    int xfatorial ;
    int valor ;
    
    fim = 1 ;
    cout << "Digite o numero para fatorial: ";
    cin >> numero ;
    xfatorial=numero;
    
    while(numero > fim ) {
        
        valor=numero-1;
        
        xfatorial=xfatorial*valor;
        
        numero=valor;
        
        
    }
    
    cout << "fatorial: " << xfatorial << "\n";
    
}

