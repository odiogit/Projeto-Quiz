#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale>   
#include <conio.h>
#include "funcoes.cpp"
#include "menus.cpp"

using namespace std;





int main (){

int escolhaPrincipal;


bemVindo();
do{
    menuPrincipal();
    cin >> escolhaPrincipal;

    switch (escolhaPrincipal){
        case 1:
            registracao();
            break;
        case 2:
            login();
        
            
            break;
        case 3:
        case 4:
            adeus();
            break;
        default:
            cout << " > ESCOLHA INVÁLIDA" << endl;
            cout << "> pressione qualquer tecla......" <<endl;
            getch();
            system("CLS");
    }
}while(escolhaPrincipal != 3);
}