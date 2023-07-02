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
   cout << " ------------------ " << endl;
   cout << "|   Criar Conta    |" << endl;
   cout << " ------------------ " << endl;

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

   cout << endl << "> Boas Vindas " << username << "!" << endl;

   return 1;         
}
bool login(){

   setlocale(LC_ALL,"");

   cout << " --------------------- " << endl;
   cout << "|   Iniciar Sessão    |" << endl;
   cout << " --------------------- " << endl;
   cout << endl;

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
   cout << "Para iniciar o jogo deve escolher a opção [JOGAR] no menú de jogo, e de seguida escolher o seu tema, pressionando [1 -], [2] ou [3]." << endl;
   cout << "Irá receber 10 perguntas pertinentes à sua área de conhecimento selecionada, cada uma com 4 possíveis opções de resposta." << endl;
   cout << "Para responder precisa apenas de selecionar o número correspondente à resposta que deseja." << endl;
   cout << "Os seus pontos serão automaticamente adicionados caso escolha a resposta correta, caso contrário irão manter-se inalterados." << endl;
   cout << "No final das 10 questões poderá escolher jogar novamente para continuar a somar à sua pontuação e experimentar os restantes temas." << endl;
   cout << endl << "Pressione qualquer tecla para voltar ao menú..." << endl;
   getch();
   system("CLS");
 }

void resetscore(){

   int resertscore; 

      cout << "Tem a certeza que deseja retornar a sua pontuação a zero?" << endl;
      cout << endl << "[1] - SIM: Reiniciar a pontuação"<< endl << "[2] - NÃO: Voltar atrás"<< endl;
      cin >> resertscore;

         if (resertscore == 1){
            cout << "> Score Reiniciado" << endl << "Pressione qualquer tecla para voltar...";
            getch();
            system("CLS");

            int score = 0;

            ofstream file; //ofstream creates a file
            file.open(email+ ".txt");

            file << email << endl << username <<endl << password << endl << score;

            file.close();
         } else {
            cout << "> Score não alterado! " << endl << "Pressione qualquer tecla para voltar...";
            getch();
            system("CLS");
         }
   }

int deleteconta(){ // Delete de conta

   int deleteconta;
   char delEmail[20];
   cout << "Está a apagar a sua conta e qualquer pontuação que tenha guardada" << endl;
   cout <<"> Insira o seu email incluindo .txt no fim para continuar: "; // So faz delete da conta se no fim for inserido .txt
   cin >>delEmail;

    deleteconta = remove(delEmail); //CUIDADO isto faz delete de qualquer ficheiro se o nome for inserido corretamente.
    if(deleteconta == 0){
      cout << "\n> Conta apagada com sucesso!\n";
    } else {
      cout << "\n> ERRO! Conta não apagada";
    }
    cout <<"\nPressione qualquer tecla para voltar ao menú principal...";
    getch();
    
    system ("CLS");
   // Volta para o menu de utilizador devia voltar ao menu principal.
   return 0;
   }
  
   
