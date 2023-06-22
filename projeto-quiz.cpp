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
            registo();
            break;
        case 2:
            login();
            if(login() == false){
                cout << "Login Inválido" << endl;
                getch();
                system("CLS");
            }else{
                cout << "Login Válido bem vindo" << endl;
                getch();
                system("CLS");
            }
            break;
        case 3:
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

