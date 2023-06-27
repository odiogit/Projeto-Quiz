#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <fstream>

using namespace std;

string email, username, password, loginif;
string emailLogin, usernameLogin, passwordLogin;

void registo(){
    int score = 0;
     cout <<"Criar Conta" << endl;
                cout <<endl;

                cout << "Insira o seu EMAIL: ";
                cin >> email;

                cout <<"Escolha um USERNAME: ";
                cin.ignore();
                getline(cin, username);

                cout <<"Escolha uma PASSWORD: ";
                cin >> password;
                
                ofstream file; //ofstream creates a file

                file.open(loginif+".txt");
                file << email << endl << username <<endl << password << score;
                file.close();
                cout <<"Bem Vindo " << username << "!" << endl;
                getch();
                system("CLS");
}

bool login(){

    cout <<"Insira o seu EMAIL: ";
    cin >> emailLogin;
    cout <<"Insira o seu USERNAME: ";
    cin.ignore();
    getline(cin, usernameLogin);
    cout <<"Insira a sua PASSWORD: ";
    cin >> passwordLogin;

    ifstream read(loginif+".txt"); //ifstream read a file
    getline(read, email); // read the email
    getline(read, username); //reads the username
    getline(read, password); //reads the password

    if ( usernameLogin == username && passwordLogin == password && emailLogin == email){
        return true;
    }else{
        return false;
    }
 }
void regras(){
   cout << " -------------------- " << endl;
   cout << "|       Regras:      |" << endl;
   cout << " -------------------- " << endl;
   cout << endl;
   cout << "Neste Quiz vai testar o seu conhecimento em três tópicos: Videojogos, Música e Geografia." << endl;
   cout << "\nPara iniciar o jogo deve escolher a opção [JOGAR] no menú de jogo, e de seguida escolher o seu tema, pressionando [1 -], [2] ou [3]. Irá receber 10 perguntas pertinentes à sua área de conhecimento selecionada, cada uma com 4 possíveis opções de resposta. Para responder precisa apenas de selecionar o número correspondente à resposta que deseja, e os pontos serão automaticamente adicionados caso escolha corretamente." << endl;
   cout << "No final das 10 questões poderá escolher jogar novamente para continuar a somar à sua pontuação e experimentar os restantes temas." << endl;
   cout << endl << "Pressione qualquer tecla para voltar ao menú..." << endl;
   getch();
   system("CLS");
 }
