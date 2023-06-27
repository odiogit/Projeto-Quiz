#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>

using namespace std;

void bemVindo(){
    cout << " -------------------- " << endl;
    cout << "|      Bem Vindo     |" << endl;
    cout << " -------------------- " << endl;
}
void menuPrincipal (){
    cout << "[1] - Sign In" << endl;
    cout << "[2] - Login" << endl;
    cout << "[3] - Sair" << endl;
}
void menuJogo (){
    // mostrar aqui o username e pontuação total
    cout << "> utilizador: " << username << "   > pontuação: " << endl;
    cout << endl;
    cout << "[1] - Jogar" << endl;
    cout << "[2] - Regras" << endl;
    cout << "[3] - Voltar atrás" << endl;
}
void menuTemas(){
    int escolhaTema;
    do{
        cout << "[1] - Videojogos" << endl;
        cout << "[2] - Música" << endl;
        cout << "[3] - Geografia" << endl;
        cout << "Escolha o tema: " << endl;
        cin >> escolhaTema;
    }while(escolhaTema < 1 || escolhaTema > 3);
}
void adeus (){
    cout << endl;
    cout << " ------------------------------- " << endl;
    cout << "|       Obrigada por jogar!     |" << endl;
    cout << " ------------------------------- " << endl;
    cout << endl << "> pressione qualquer tecla para sair ......" <<endl;
    getch();
    system("CLS");
}
