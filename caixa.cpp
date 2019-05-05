#ifndef caixa
#define caixa
#include <iostream>
#include <fstream>
#include <string>
#include <ctype.h>
#include <stdio.h>
#endif


using namespace std;


int excaixa(){
ofstream myfile ("cadastro.txt", ios::out | ios::app); 
ifstream arquivo("cadastro.txt");

bool user; 
user = false; 
int saldo, saque, cadastro, valor, i,  valorSaque ;

string nome, nome2consulta, sobrenome, line, nomeConsulta, y, n, resposta, valor1 ; 
n = n; 
y = y; 

cout << "SALDO    | DIGITE 1 \n";
cout << "SAQUE    | DIGITE 2 \n";
cout << "CADASTRO | DIGITE 3 \n";
cout << "MENU DE ATIVIDADES OU SAIR  | DIGITE 4 \n";
cout << "\n \n Digite uma opcao: \n"; 
cin >> valor ; 

    switch(valor) {

        case 1: 
        cout << "\n" << "Digite o seu nome para consulta de saldo:  \n" ;            
        cin >> nome;
        cout << "\n" << "Digite o seu sobrenome:  \n";
		cin >> sobrenome; 

        arquivo.is_open(); 
            while ( getline (arquivo,line) ){
                arquivo >> nomeConsulta >> nome2consulta >> saldo ;
                     if(nomeConsulta == nome&&nome2consulta == sobrenome){
                        cout << "\n \n \n ###################### USUARIO CADASTRADO ! ####################  \n \n \n ";
                        cout << "\n" <<  "Seu saldo e de: R$" << saldo << "\n";
                        cout << "\n";
                        arquivo.close();
                    user = true ; 
                    } 
            }
        arquivo.close();  

            if( user == false ) { 

                cout << "\n \n \n #################### USUARIO NAO CADASTRADO !! ####################  \n \n \n \n"; 


            }


           
            excaixa();
            

        case 2: 
            ;

        cout << "\n" << "Digite o seu nome para consulta de SAQUE:  \n" ;            
        cin >> nome;
        cout << "\n" << "Digite seu sobrenome:  \n";
        cin >> sobrenome;
        

        arquivo.is_open(); 
            while ( getline (arquivo,line) ){
                arquivo >> nomeConsulta >> nome2consulta >> saldo ;
                     if(nomeConsulta == nome&&nome2consulta == sobrenome){
                        cout << "\n \n \n #################### USUARIO CADASTRADO ! ####################  \n \n \n";
                        
                        
                        cout << "\n" << "Seu saldo e de: R$" << saldo << "\n";

                        arquivo.close();
                    user = true ; 
                    } 


                    
                        }


                        if( user == false ) { 

                cout << "\n \n \n #################### USUARIO NAO CADASTRADO !! ####################  \n \n \n \n"; 
				excaixa();

            }

        arquivo.close(); 



      cout << "\n" << "Deseja realizar um saque ?:[y/n] \n" ; 
      cin >> resposta ; 
         
    if(resposta == "n"){

            cout << "\n" << "Nao me faca perder meu tempo \n" ; 

        } else if(resposta == "y") { 

        cout << "\n" << "Digite o valor para saque: \n"; 
        cin >> valorSaque ; 

        if(valorSaque <= saldo){
        
        saldo = saldo - valorSaque; 

        cout << "\n" << "Retire na gaveta sua grana parca, seu novo saldo e de: " << saldo << "\n" ;
        cout <<"\n";
        excaixa();


        } else {

            cout << "\n" << "Moio o role, tem grana nao \n" ; 

        }


        } else { 

            cout << "\n" << "Digita certo cabaco \n";   
        }


            break;
        case 3: 

        cout << "\n" << "Bora fazer seu cadastro, digite o seu primeiro nome: "; 
        cin >> nome; 
		cout << "\n" << "digite o seu segundo nome: "; 
        cin >> sobrenome;
		

        arquivo.is_open(); 
            while ( getline (arquivo,line) ){
                arquivo >> nomeConsulta >> nome2consulta >> saldo ;
                     if(nomeConsulta == nome&&nome2consulta == sobrenome){
                        cout << "\n \n \n ###################### USUARIO JA CADASTRADO ! ####################  \n \n \n ";
						arquivo.close();
                        excaixa();
                    
					}
            }
        arquivo.close();

        cout << "\nDigite quanto de grana vc esta colocando no banco:  "; 
        cin >> saldo ;
        cout << "\n ### Registrado com sucesso ###\n";
		cout << "\n ### Deposito efetuado com sucesso ###\n";
        cout << "\n";
        
        myfile.is_open(); 
        myfile << "\n" << nome << "     " << sobrenome << "     " << saldo << "\n" ; 
        myfile.close();
        excaixa();
        break;
        
        case 4:
        	int main();
        	break;
		
		  
       default: 
		 	cout << "### OPCAO INVALIDA ###" << "\n";
		 	cout << "### PRECIONE UMA TECLA E DIGITE ###" << "\n";
		 	cout << "### NOVAMENTE A OPCAO CORRETA ###" << "\n";
		 	cout << " ---------------------------------------- " << "\n";
			system("pause");
			system("cls");
			excaixa();
	
		 	
		 	break;


    
    


    }


}

