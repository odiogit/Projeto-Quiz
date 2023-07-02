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
    cout << "[3] - Recuperacao de conta"<< endl;
    cout << "[4] - Sair" << endl;
}
void menuJogo (){
    
   ifstream read(email + ".txt"); //ifstream read a file
    getline(read, mail); // read the email
    getline(read, user); //reads the username
    getline(read, pass); //reads the password
    getline(read, score);

    cout << " ------------------------------ " << endl;
    cout << "|          Menu de Jogo        |" << endl;
    cout << " ------------------------------ " << endl;
    cout << endl;
    cout << "> utilizador: " << username << "   > pontuacao: " << score << endl;
    cout << endl;
    cout << "[1] - Jogar" << endl;
    cout << "[2] - Regras" << endl;
    cout << "[3] - Reset de pontuacao" << endl;
    cout << "[4] - Delete de conta"<< endl;
    cout << "[5] - Voltar atras" << endl;
}
void menuTemas(){

        cout << " ------------------ "<< endl;
        cout << "| Selecao de Temas |" << endl;
        cout << " ------------------ "<< endl << endl;
        cout << "[1] - Videojogos" << endl;
        cout << "[2] - Musica" << endl;
        cout << "[3] - Geografia" << endl;
        cout << "Escolha o tema das suas perguntas: " << endl;
}
void adeus (){
    cout << endl;
    cout << " ------------------------------- " << endl;
    cout << "|       Obrigada por jogar!     |" << endl;
    cout << " ------------------------------- " << endl;
    cout << endl << "Pressione qualquer tecla para sair..." <<endl;
    cout << endl << "Projeto feito por:" << endl;
    cout << "Diogo ヽ༼ຈل͜ຈ༽ﾉ" << endl;
    cout << "Helena  (U w U *)/" << endl;
    cout << "Leonardo  (:3)-|--<" <<endl;
    cout << endl << " > Adeus!" <<endl;
    getch();
    system("CLS");
}
