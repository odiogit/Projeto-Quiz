#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <fstream>
#include <time.h>

using namespace std;

string username, password, email, score , random;
string user, pass, mail;

int erro = 0;
int resertscore = 0;

int registracao(){

// Providing a seed value
	srand((unsigned) time(NULL));

	// Get a random number
	int random = rand();

	// Print the random number
	



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

   // Print the random number
   cout << "Codigo de recuperação "<< random << endl;
   


   int score = 0; 

   ofstream file; //ofstream creates a file

   file.open(email+ ".txt");

   file << email << endl << username <<endl << password << endl << score << endl << random;
   
   file.close();

   cout << endl << "> Boas Vindas " << username << "!" << endl;

   return 1;         
}
bool login(){

   setlocale(LC_ALL,"");

   cout << " --------------------- " << endl;
   cout << "|   Iniciar Sessao    |" << endl;
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
   getline(read, random);
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
   cout << "Neste Quiz vai testar o seu conhecimento em tres topicos: Videojogos, Musica e Geografia." << endl;
   cout << "Para iniciar o jogo deve escolher a opcao [JOGAR] no menu de jogo, e de seguida escolher o seu tema, pressionando [1 -], [2] ou [3]." << endl;
   cout << "Ira receber 10 perguntas pertinentes a sua area de conhecimento selecionada, cada uma com 4 possiveis opcoes de resposta." << endl;
   cout << "Para responder precisa apenas de selecionar o numero correspondente a resposta que deseja." << endl;
   cout << "Os seus pontos serao automaticamente adicionados caso escolha a resposta correta, caso contrario irao manter-se inalterados." << endl;
   cout << "No final das 10 questoes podera escolher jogar novamente para continuar a somar a sua pontuacao e experimentar os restantes temas." << endl;
   cout << endl << "Pressione qualquer tecla para voltar ao menu..." << endl;
   getch();
   system("CLS");
 }

void resetscore(){

   int resertscore; 

      cout << "Tem a certeza que deseja retornar a sua pontuacao a zero?" << endl;
      cout << endl << "[1] - SIM: Reiniciar a pontuacao"<< endl;
      cout << "[2] - NAO: Voltar atras"<< endl;
      cin >> resertscore;

         if (resertscore == 1){
            cout << "> Score Reiniciado" << endl << "Pressione qualquer tecla para voltar...";
            getch();
            system("CLS");

            int score = 0;

            ofstream file; //ofstream creates a file
            file.open(email+ ".txt");

            file << email << endl << username <<endl << password << endl << score << endl << random;

            file.close();
         } else {
            cout << "> Score nao alterado! " << endl << "Pressione qualquer tecla para voltar...";
            getch();
            system("CLS");
         }
   }

int deleteconta(){ // Delete de conta

   int deleteconta;
   
   cout << "Esta a apagar a sua conta e qualquer pontuacao que tenha guardada" << endl;
   cout << "[1] - Apagar conta" << endl << "[2] - Voltar " << endl;
   cin >>deleteconta;



     
    if(deleteconta == 1){
      cout << "\n> Conta apagada com sucesso!\n";
      

      ifstream read(email + ".txt"); 
      getline(read, mail); 
      getline(read, user); 
      getline(read, pass); 
      getline(read, score);
      getline(read, random);
      

      string username;
      string password ;
      
      password.clear();
      username.clear();
      

      
      ofstream file; //ofstream creates a file

            file.open(email + ".txt");

            email.clear();
            score.clear();
            random.clear();
            file << email << endl << username <<endl << password << endl << score << endl << random;

            file.close();


    } else {
      cout << "\n> ERRO! Conta nao apagada";
    }
    cout <<"\nPressione qualquer tecla para voltar ao menu principal...";
    getch();
    
    system ("CLS");
   // Volta para o menu de utilizador devia voltar ao menu principal.
   return 0;
   }
  
int recup(){
  

  ifstream read(email + ".txt"); 
      getline(read, mail); 
      getline(read, user); 
      getline(read, pass); 
      getline(read, score);
      getline(read, random);

      string recup;
      cout <<"Insira o seu email: ";
      cin >> mail;
      cout << "Insira o seu codigo de recuperacao:";
      cin >> recup;


     
      
      if (mail == email && recup == random){

         system ("CLS"); 

            cout<<"Insira o seu novo nome: ";
            cin >> username;

            cout<< "Insira a sua nova password: ";
            cin >> password;


            ofstream file; //ofstream creates a file

            file.open(email+ ".txt");

            file << email << endl << username <<endl << password << endl << score << endl << random;

            file.close();

           getch();
            system ("CLS");

      }else{  

         cout << "Nao recuperado"; 

         getch();
         system ("CLS");
      }


   
   system ("CLS");
   return 10;
}
