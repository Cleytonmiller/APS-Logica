#ifndef extenso
#define extenso
#include <iostream>
#endif// extenso

using namespace std;


int exextenso() {

int numero ; 
int n1; 
int n2; 
int n3; 
int milhar, centena, dezena, unidade ; 


cout << "Digite o numero: "; 
cin >> numero; 

milhar=numero/1000; 
numero=numero%1000; 
centena=numero/100; 
numero=numero%100;
dezena=numero/10;
unidade=numero%10;


if(milhar != 0){ 


cout << milhar << " mil e "; 

}

    switch(centena) {

        case 1: 
            if(dezena == 0 and unidade == 0){
                cout << "cem ";

            } else {
            cout << "cento e ";
            }  
            break; 
        case 2: 
            cout << "duzentos ";
            break;
        case 3: 
            cout << "trezentos "; 
            break; 
        case 4: 
            cout << "quatrocentos ";
            break; 
        case 5:
            cout << "quinhentos "; 
            break; 
        case 6: 
            cout << "seiscentos "; 
            break; 
        case 7: 
            cout << "setecentos "; 
            break; 
        case 8:
            cout << "oitocentos "; 
            break;
        case 9: 
            cout << "novecentos "; 
            break;

    
    


    }



    switch(dezena) {

        case 2: 
            cout << "vinte ";
            break;
        case 3: 
            cout << "trinta "; 
            break; 
        case 4: 
            cout << "quarenta ";
            break; 
        case 5:
            cout << "cinquenta "; 
            break; 
        case 6: 
            cout << "sessenta "; 
            break; 
        case 7: 
            cout << "setenta "; 
            break; 
        case 8:
            cout << "oitenta "; 
            break;
        case 9: 
            cout << "noventa "; 
            break;

    
    


    }

if(dezena == 1) {
    switch(unidade) {

        case 1: 
            cout << "onze "; 
            break; 
        case 2: 
            cout << "doze ";
            break;
        case 3: 
            cout << "treze "; 
            break; 
        case 4: 
            cout << "quatorze ";
            break; 
        case 5:
            cout << "quinze "; 
            break; 
        case 6: 
            cout << "dezesseis "; 
            break; 
        case 7: 
            cout << "dezessete "; 
            break; 
        case 8:
            cout << "dezoito "; 
            break;
        case 9: 
            cout << "dezenove "; 
            break;
        case 0: 
            if(milhar == 0 and centena == 0){
            cout << "dez "; 
            }
            break;


    }
} else {

    switch(unidade) {

        case 1: 
            cout << "um "; 
            break; 
        case 2: 
            cout << "dois ";
            break;
        case 3: 
            cout << "tres "; 
            break; 
        case 4: 
            cout << "quatro ";
            break; 
        case 5:
            cout << "cinco "; 
            break; 
        case 6: 
            cout << "seis "; 
            break; 
        case 7: 
            cout << "sete "; 
            break; 
        case 8:
            cout << "oito "; 
            break;
        case 9: 
            cout << "nove "; 
            break;


    


    }

}



}
