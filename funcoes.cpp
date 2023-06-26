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

            file.open(email+".txt");
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

    ifstream read(email+".txt"); //ifstream read a file
    getline(read, email); // read the email
    getline(read, username); //reads the username
    getline(read, password); //reads the password

    if ( usernameLogin == username && passwordLogin == password && emailLogin == email){
        return true;
    }else{
        return false;
    }
}