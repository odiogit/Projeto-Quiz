#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funcoes.cpp"
#include "menus.cpp"
#include "jogo.cpp"

using namespace std;

int main (){

    int escolhaPrincipal;

    bemVindo();
    do{ //loop para garantir que o user escolhe uma opção válida
        menuPrincipal();
        cin >> escolhaPrincipal;

        switch (escolhaPrincipal){
            case 1:
                system("CLS");
                registracao();
                getch();
                system("CLS");
                break;
            case 2:
                system("CLS");
                if(login() == true){//Validação para login
                    cout << "\n > Boas vindas " << username << "!" << endl;
                    cout << "Pressione qualquer tecla para JOGAR" << endl;
                    getch();
                    system("CLS");
                    int escolhaJogo;
                    do{//loop para escolha válida dentro do menu do jogo
                        menuJogo();
                        cin >> escolhaJogo;
                        switch (escolhaJogo){
                            case 1:
                                system("CLS");
                                menuTemas();
                                break;
                            case 2:
                                system("CLS");
                                regras();
                                break;
                            case 3:
                                system("CLS");
                                break;
                            default:
                                cout << "Selecione uma opção válida" << endl;
                                cout << "Pressione qualquer tecla para continuar...." << endl;
                                getch();
                                system("CLS");
                                break;
                        }
                    }while(escolhaJogo != 3);
                }else{
                    cout << "LOGIN INVÁLIDO, CONTA TERMINADA!" << endl;
                    cout << "PRESSIONE PARA VOLTAR AO MENU!" << endl;
                    getch();
                    system("CLS");
                }
                break;
            case 3:
                system("CLS");
                adeus();
                break;
            default:
                cout << " > ESCOLHA INVÁLIDA" << endl;
                cout << "> pressione qualquer tecla para tentar novamente......" <<endl;
                getch();
                system("CLS");
        }
    }while(escolhaPrincipal != 3);
}