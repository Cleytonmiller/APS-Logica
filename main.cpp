#include <iostream>
#include <fstream>
#include <string>
#include <ctype.h>
#include <stdio.h>
#include "caixa.cpp"
#include "extenso.cpp"
#include "fatorial.cpp"
#include "fibonacci.cpp"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main() {
	
	int opcao;
	cout << "#### APS DE LOGICA ####" << "\n";
    cout << "#### MENU DE ATIVIDADES ####" << "\n";
    cout << "#### ESCOLHA UMA ATIVIDADE ####" << "\n";
    cout << "\n";
    cout << "CAIXA - 1"<<"\n";
    cout << "\n";
    cout << "NUMERO POR EXTENSO - 2"<<"\n";
    cout << "\n";
    cout << "CALCULE O FATORIAL DO VALOR N - 3" <<"\n";
    cout << "\n";
    cout << "SEQUENCIA DE FIBONACCI - 4"<<"\n";
    cin >> opcao;
    cout << "\n ";
    
    switch(opcao)
    {
    	case 1:
    		cout << "### VOCE ENTROU NO SISTEMA DE CAIXA ! ###" << "\n";
    		cout << "\n";
			excaixa();
			cout << "\n";
				cout << "\n" << "### DESEJA SAIR? 1- SIM / 2- NAO ###" << "\n";
			    cin >> opcao;
				if(opcao==1){
					return 0;
				}
				if(opcao==2){
				   system("cls");
				   main();
				
				}
				break;	
			
			
    		
    	case 2:
    		cout << "### VOCE ENTROU NO NUMERO POR EXTENSO !###" << "\n";
		    cout << "\n";
			exextenso();
			    cout << "\n";
				cout << "\n" << "### DESEJA SAIR? 1- SIM / 2- NAO ###" << "\n";
			    cin >> opcao;
				if(opcao==1){
					return 0;
				}
				if(opcao==2){
				   system("cls");
				   main();
				
				}
				break;	
		case 3: 
			cout << "### VOCE ENTROU NO FATORIAL DE VALOR N !###" << "\n";
			cout << "\n";
			exfatorial();	
				cout <<" \n" << "### DESEJA SAIR? 1- SIM / 2- NAO ###" << "\n";
			    cin >> opcao;
				if(opcao==1){
					return 0;
				}
				if(opcao==2){
				   system("cls");
				   main();
				
				}
				break;
		case 4:
			cout << "### VOCE ENTROU NA SEQUENCIA DE FIBONACCI ! ###" << "\n";
			cout << "\n";
			exfibonacci();
			cout <<" \n" << "### DESEJA SAIR? 1- SIM / 2- NAO ###" << "\n";
			cin >> opcao;
				if(opcao==1){
					return 0;
				}
				if(opcao==2){
				   system("cls");
				   main();
				
				}
				break;
		default: 
		 	cout << "### OPCAO INVALIDA ###" << "\n";
		 	cout << "### PRECIONE UMA TECLA E DIGITE ###" << "\n";
		 	cout << "### NOVAMENTE A OPCAO CORRETA ###" << "\n";
		 	cout << " ---------------------------------------- " << "\n";
		 	system("pause");
			system("cls");
		 	main();
		 	break;
		   
		
		    
				 }
		 	
	
	
	return 0;	 	
	}
	

