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

    cout << " ------------------------------ " << endl;
    cout << "|          Menú de Jogo        |" << endl;
    cout << " ------------------------------ " << endl;
    cout << endl;
    cout << "> utilizador: " << username << "   > pontuação: " << score << endl;
    cout << endl;
    cout << "[1] - Jogar" << endl;
    cout << "[2] - Regras" << endl;
    cout << "[3] - Reset de pontuação" << endl;
    cout << "[4] - Delete de conta"<< endl;
    cout << "[5] - Voltar atrás" << endl;
}
void menuTemas(){

        cout << " ------------------ "<< endl;
        cout << "| Seleção de Temas |" << endl;
        cout << " ------------------ "<< endl << endl;
        cout << "[1] - Videojogos" << endl;
        cout << "[2] - Música" << endl;
        cout << "[3] - Geografia" << endl;
        cout << "Escolha o tema das suas perguntas: " << endl;
}
void adeus (){
    cout << endl;
    cout << " ------------------------------- " << endl;
    cout << "|       Obrigada por jogar!     |" << endl;
    cout << " ------------------------------- " << endl;
    cout << endl << "Pressione qualquer tecla para sair..." <<endl;
    getch();
    system("CLS");
}
