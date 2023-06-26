#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <fstream>

using namespace std;

string email, username, password, loginif;
string emailLogin, usernameLogin, passwordLogin;
int erro = 0;

int registracao(){

cout << "Insira o seu username: ";
cin.ignore();
getline(cin, username);
cout << "Insira o seu email: ";
cin >> email;
cout << "Insira a sua password: ";
cin >> password;


ofstream file;
    file.open(email + ".txt");
    file << email << endl << username << endl << password;
    file.close(); 

cout << "Bem vindo " << username << endl;

return 0;
}


bool login(){

cout << "Insira o seu email: ";
cin >> emailLogin;
cout << "Insira o seu username: ";
cin.ignore();
getline(cin, usernameLogin);
cout << "Insira a password: ";
cin >> passwordLogin;

ifstream read (email + ".txt");
getline(read, email);
getline(read, username);
getline(read, password);

if ( emailLogin == email && usernameLogin ==  username  && passwordLogin == password){
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

