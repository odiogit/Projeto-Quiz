#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <fstream>


using namespace std;

string username, password, email, score;
string user, pass, mail;

int erro = 0;
int resertscore = 0;

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

   int score = 0; 

   ofstream file; //ofstream creates a file

   file.open(email+ ".txt");

   file << email << endl << username <<endl << password << endl << score << endl;
   
   file.close();

   cout <<"Bem Vindo! " << email << "!" << endl;

   return 1;         
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


 ifstream read(email + ".txt"); 
 getline(read, mail); 
 getline(read, user); 
 getline(read, pass); 
 getline(read, score);
   if ( user == username && pass == password && mail == email){
      return true;
   }else {
      return false;    
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

void resetscore(){

   int resertscore; 

      cout << "[1] - Reset de pontuação"<< endl << "[2] - Voltar atras"<< endl;
      cin >> resertscore;

         if (resertscore == 1){
            cout << "Score resetado" << endl;
            getch();
            system("CLS");

            int score = 0;

            ofstream file; //ofstream creates a file
            file.open(email+ ".txt");

            file << email << endl << username <<endl << password << endl << score;

            file.close();
         } else {
            cout << "Score nao resetado!! " << endl << "Pressione qualquer tecla para continuar";
            getch();
            system("CLS");
         }
   }

int deleteconta(){ // Delete de conta

   int deleteconta;
   char delEmail[20];
   cout <<"Insira o seu email incluindo .txt no fim : "; // So faz dele da conta se no fim for inserido .txt
   cin >>delEmail;

    deleteconta = remove(delEmail); //CUIDADO isto faz dele de qualquer ficheiro se o nome for inserido coretamente.
    if(deleteconta == 0){
      cout << "\nConta deletada com sucesso!\n";
    } else {
      cout << "\nError conta nao deletada";
    }
    cout <<"\nPressione qualquer tecla para voltar ao menu principal";
    getch();
    
    system ("CLS");
   // Volta para o menu de utilizador devia voltar ao menu principal.
   return 0;
   }
  
   
