#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <fstream>

using namespace std;

string username, password, email;
string user, pass, mail;
int erro = 0;


int registracao(){

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

                     file.open(email+ ".txt");

                     file << email << endl << username <<endl << password;

                     file.close();
                     cout <<"Bem Vindo! " << email << "!" << endl;
}
bool login(){

 setlocale(LC_ALL,"");



 cout <<"Insira o seu EMAIL: ";
 cin >> email;
 cout <<"Insira o seu USERNAME: ";
 cin.ignore();
 getline(cin, username);
 cout <<"Insira a sua PASSWORD: ";
 cin >> password;


 ifstream read(email + ".txt"); //ifstream read a file
 getline(read, mail); // read the email
 getline(read, user); //reads the username
 getline(read, pass); //reads the password

 if ( user == username && pass == password && mail == email){
    return true;
 }else {
     erro++;
 }  if(erro == 3){
    cout << "3 TENTATIVAS ERRADAS, A SUA CONTA FOI BLOQUEADA!" << endl;
    cout << "pressione qualquer tecla" << endl;
    getch();
    exit(0);
 }
    else if(erro == 1){
        cout << "ERRADO. 2 TENTATIVAS RESTANTES!" << endl;
    }else if(erro == 2){
        cout << "ERRADO. 1 TENTATIVA RESTANTE!" << endl;
    }

 }

