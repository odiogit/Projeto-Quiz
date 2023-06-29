#include <stdio.h>
#include <stdlib.h>
#include <locale>   
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
    
   ifstream read(email + ".txt"); //ifstream read a file
    getline(read, mail); // read the email
    getline(read, user); //reads the username
    getline(read, pass); //reads the password
    getline(read, score);

    cout << "> utilizador: " << username << "   > pontuação: " << score << endl;
    cout << endl;
    cout << "[1] - Jogar" << endl;
    cout << "[2] - Regras" << endl;
    cout << "[3] - Reset de pontuação" << endl;
    cout << "[4] - Voltar atrás" << endl;
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
    cout << "Pressione para continuar para o jogo!" << endl;
    getch();
    system("CLS");
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
