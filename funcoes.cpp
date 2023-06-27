#include <iostream>
#include <stdlib.h>
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
   getch();
   system("CLS");
}

bool login(){

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
      exit(0);
   }
      else if(erro == 1){
         cout << "ERRADO. 2 TENTATIVAS RESTANTES!" << endl;
      }else if(erro == 2){
         cout << "ERRADO. 1 TENTATIVA RESTANTE!" << endl;
      }
     
}

void regras(){
   cout << " -------------------- " << endl;
   cout << "|       Regras:      |" << endl;
   cout << " -------------------- " << endl;
   cout << endl;
   cout << "Neste Quiz vai testar o seu conhecimento em três tópicos: Videojogos, Música e Geografia." << endl;
   cout << "Para iniciar o jogo deve escolher a opção [JOGAR] no menú de jogo, e de seguida escolher o seu tema, pressionando [1 -], [2] ou [3]. Irá receber 10 perguntas pertinentes à sua área de conhecimento selecionada, cada uma com 4 possíveis opções de resposta. Para responder precisa apenas de selecionar o número correspondente à resposta que deseja, e os pontos serão automaticamente adicionados caso escolha corretamente." << endl;
   cout << "No final das 10 questões poderá escolher jogar novamente para continuar a somar à sua pontuação e experimentar os restantes temas." << endl;
   cout << endl << "Pressione qualquer tecla para voltar ao menú..." << endl;
   getch();
   system("CLS");
 }
