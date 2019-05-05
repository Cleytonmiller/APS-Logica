#ifndef fibonacci
#define fibonacci 
#include <iostream>
#endif

using namespace std;


int exfibonacci() {

float numero ; 
int seq = 2 ; 
int n1 = 1 ; 
int n2 = 1 ;
int n3 ; 


cout << "Digite o numero a ser calculado: " ; 
cin >> numero ; 

while(seq < numero) {

 n3=n1+n2; 
n2=n3 ; 
n1=n3-n1; 
seq++ ; 

}

cout << "O numero em fibonacci: " << n3 << "\n"; 


}
