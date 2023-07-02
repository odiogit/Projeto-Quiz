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
    do{
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
                        cout << endl;
                        cout << "> Boas vindas novamente " << username << "!" << endl;
                        cout << endl << "Pressione qualquer tecla para JOGAR" << endl;
                        getch();
                        system("CLS");
                        int escolhaJogo;
                        do{//loop para escolha válida dentro do menu do jogo
                            menuJogo();
                            cin >> escolhaJogo;
                            switch (escolhaJogo){
                                case 1:
                                    system("CLS");
                                    int escolhaTema;
                                    do{
                                        menuTemas();
                                        cin >> escolhaTema;
                                        switch(escolhaTema){
                                            case 1:
                                                system("CLS");
                                                jogoVideojogos();
                                                break;
                                            case 2:
                                                system("CLS");
                                                jogoMusica();
                                                break;
                                            case 3:
                                                system("CLS");
                                                jogoGeografia();
                                                break;
                                            default:
                                                system("CLS");
                                                break;
                                        }
                                    }while(escolhaTema < 1 || escolhaTema > 3);
                                    break;
                                case 2:
                                    system("CLS");
                                    regras();
                                    break;
                                case 3:
                                    system("CLS");
                                    resetscore();
                                    break;
                                case 4:
                                    system("CLS");
                                    deleteconta();
                                    escolhaJogo = 5;
                                    break;
                                case 5:
                                    system("CLS");
                                    break;
                                default:
                                    cout << "> ERRO! Selecione uma opcao valida" << endl;
                                    cout << "Pressione qualquer tecla para continuar..." << endl;
                                    getch();
                                    system("CLS");
                                    break;
                            }
                        }while(escolhaJogo != 5);
                    }else{
                        cout << "> LOGIN INVALIDO" << endl;
                        cout << endl << "Pressione qualquer tecla para voltar ao menu..." << endl;
                        getch();
                        system("CLS");
                    }
                break;
            case 3:
                system("CLS");
                recup();
                break;
            case 4:
                system("CLS");
                    adeus();
                break;
            default:
                cout << " > ESCOLHA INVALIDA" << endl;
                cout << "Pressione qualquer tecla para continuar..." <<endl;
                getch();
                system("CLS");
        }
    }while(escolhaPrincipal != 4);
    return 0;
}