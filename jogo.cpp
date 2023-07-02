#include <iostream>
#include <string>
#include <ctime>
#include <algorithm>
#include <random>
#include <chrono>
#include <cstdlib>
#include <type_traits>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>   
#include <conio.h>
#include <fstream>

using namespace std;

int pontostotais = 0;
int pontos;
struct perguntas{

    string pergunta;
    string respostaCerta;
    string respostaErrada1;
    string respostaErrada2;
    string respostaErrada3;
    int indiceRespostaCorreta;

    void mostrarPergunta(int& opcao){
        string respostasAleatorias[4] = {respostaCerta, respostaErrada1, respostaErrada2, respostaErrada3};

        unsigned seed = chrono::system_clock::now().time_since_epoch().count();
        shuffle(begin(respostasAleatorias), end(respostasAleatorias), default_random_engine(seed));

        cout << pergunta << endl;
        for(int i = 0; i < 4; i++) {
            cout << i+1 << ". " << respostasAleatorias[i] << endl;
            if (respostasAleatorias[i] == respostaCerta){
                indiceRespostaCorreta = i + 1;
            }
        }
        cout << "Selecione a sua resposta: ";
        cin >> opcao;
    }
};

void jogoVideojogos(){

    int opcao;

    perguntas questao1;
    questao1.pergunta = "Em que ano lançou a Nintendo o jogo Pokémon?";
    questao1.respostaCerta = "1996";
    questao1.respostaErrada1 = "1998";
    questao1.respostaErrada2 = "1896";
    questao1.respostaErrada3 = "2020";

    perguntas questao2;
    questao2.pergunta = "Qual o nome das personagens principais do jogo The Last of Us?";
    questao2.respostaCerta = "Joel e Ellie";
    questao2.respostaErrada1 = "Joel e Tess";
    questao2.respostaErrada2 = "Clicker e Ellie";
    questao2.respostaErrada3 = "Tommy e Sarah";


    perguntas questao3;
    questao3.pergunta = "A que popular franchise de videojogos pertence a personagem Lara Croft?";
    questao3.respostaCerta = "Tomb Raider";
    questao3.respostaErrada1 = "Uncharted";
    questao3.respostaErrada2 = "Bayonetta";
    questao3.respostaErrada3 = "Minecraft";

    perguntas questao4;
    questao4.pergunta = "Qual a relação das personagens Dante e Virgil, em Devil May Cry?";
    questao4.respostaCerta = "Irmãos gémeos";
    questao4.respostaErrada1 = "Inimigos";
    questao4.respostaErrada2 = "Amantes";
    questao4.respostaErrada3 = "Primos";
    
    perguntas questao5;
    questao5.pergunta = "Qual a profissão da famosa personagem Mario, da franchise Super Mario?";
    questao5.respostaCerta = "Canalizador";
    questao5.respostaErrada1 = "Pizzaiolo";
    questao5.respostaErrada2 = "Limpador de Chaminés";
    questao5.respostaErrada3 = "Barbeiro";

    perguntas questao6;
    questao6.pergunta = "Qual o significado da abreviatura do jogo LoL?";
    questao6.respostaCerta = "League of Legends";
    questao6.respostaErrada1 = "Laugh out Loud";
    questao6.respostaErrada2 = "Legion of Lizards";
    questao6.respostaErrada3 = "Love of Landlords";

    perguntas questao7;
    questao7.pergunta = "Qual é o último Boss do jogo Minecraft?";
    questao7.respostaCerta = "Ender Dragon";
    questao7.respostaErrada1 = "Steve";
    questao7.respostaErrada2 = "Pikachu";
    questao7.respostaErrada3 = "Smaug";

    perguntas questao8;
    questao8.pergunta = "Qual a função da personagem Tom Nook, na franchise Animal Crossing?";
    questao8.respostaCerta = "Agente Imobiliário";
    questao8.respostaErrada1 = "Comunista";
    questao8.respostaErrada2 = "Lider de Culto";
    questao8.respostaErrada3 = "Cobrador Bancário da Máfia local";

    perguntas questao9;
    questao9.pergunta = "Que personagem amarela é conhecida por fugir de fantasmas e depois comê-los?";
    questao9.respostaCerta = "Pacman";
    questao9.respostaErrada1 = "Pikachu";
    questao9.respostaErrada2 = "Sonic the Hedgehog";
    questao9.respostaErrada3 = "Homer Simpson";

    perguntas questao10;
    questao10.pergunta = "Qual a personagem principal da franchise The Legend of Zelda?";
    questao10.respostaCerta = "Link";
    questao10.respostaErrada1 = "Zelda";
    questao10.respostaErrada2 = "Princess Peach";
    questao10.respostaErrada3 = "Luigi";

    perguntas questao11;
    questao11.pergunta = "Em que genero de jogo se foca a franchise Call of Duty?";
    questao11.respostaCerta = "First-person Shooter";
    questao11.respostaErrada1 = "Platafarma";
    questao11.respostaErrada2 = "Drama Histórico";
    questao11.respostaErrada3 = "Dating Sim";

    perguntas questao12;
    questao12.pergunta = "Na franchise Assassins Creed, a personagem Desmond Miles utiliza uma máquina que:";
    questao12.respostaCerta = "lhe permite reviver memórias dos seus antepassados";
    questao12.respostaErrada1 = "o transporta para o passado";
    questao12.respostaErrada2 = "lhe injeta um soro, dando-lhe super poderes";
    questao12.respostaErrada3 = "lhe diz as respostas para o Euromilhoes";

    perguntas questao13;
    questao13.pergunta = "O mais recente jogo da franchise God of War, abandona a mitologia grega para se forcar na mitologia…";
    questao13.respostaCerta = "Nórdica";
    questao13.respostaErrada1 = "Portuguesa";
    questao13.respostaErrada2 = "Alien";
    questao13.respostaErrada3 = "Imaginária";

    perguntas questao14;
    questao14.pergunta = "No jogo Bayonetta, onde tem a personagem principal os seus quatro revolveres?";
    questao14.respostaCerta = "Um em cada mao, e no salto de cada bota";
    questao14.respostaErrada1 = "Dois em cada mao";
    questao14.respostaErrada2 = "Um em cada mao, um na boca e outro nas costas";
    questao14.respostaErrada3 = "Os quatro à volta da cintura";

    perguntas questao15;
    questao15.pergunta = "Que empresa de videojogos é popular por jogos como “Red Dead Redemption” e “Grand Theft Auto”?";
    questao15.respostaCerta = "Rockstar Games";
    questao15.respostaErrada1 = "Riot Games";
    questao15.respostaErrada2 = "No Games Games";
    questao15.respostaErrada3 = "Criminal Tendencies Games";

    perguntas questao16;
    questao16.pergunta = "No jogo Stardew Valley, o que esconde o presidente Lewis?";
    questao16.respostaCerta = "Uma estátua de ouro de si mesmo";
    questao16.respostaErrada1 = "O corpo do nosso avô";
    questao16.respostaErrada2 = "O dinheiro dos impostos dos residentes";
    questao16.respostaErrada3 = "Fotos suspeitas da Marnie";

    perguntas questao17;
    questao17.pergunta = "No jogo Goat Simulator, qual o principal objetivo da personagem principal?";
    questao17.respostaCerta = "Lamber e destruir tudo";
    questao17.respostaErrada1 = "Saltar de um canhao";
    questao17.respostaErrada2 = "Aniquilar a humanidade";
    questao17.respostaErrada3 = "Fugir da quinta";

    perguntas questao18;
    questao18.pergunta = "Porque se tornou o jogo Among Us tão popular? ";
    questao18.respostaCerta = "Devido ao facto de as pessoas serem forçadas a ficar em casa a dar em maluco";
    questao18.respostaErrada1 = "O seu artstyle e gráficos inovadores e de última geração, focados no super realismo";
    questao18.respostaErrada2 = "Por ser um ótimo jogo para desenvolver confiança entre equipas e teambuilding";
    questao18.respostaErrada3 = "Pois foi aclamado pela NASA pela sua história e realismo";

    perguntas questao19;
    questao19.pergunta = "Que tipo de pessoas jogam frequentemente Overwatch?";
    questao19.respostaCerta = "Amantes de jogos multiplayer e de tiro, sem amor próprio";
    questao19.respostaErrada1 = "Antigos jogadores de League of Legends em recuperação";
    questao19.respostaErrada2 = "Crianças com problemas de raiva e acesso ao cartão de crédito dos pais";
    questao19.respostaErrada3 = "Colecionadores de skins interessados num bom negócio";

    perguntas questao20;
    questao20.pergunta = "Qual o nome do último jogo da franchise Resident Evil?";
    questao20.respostaCerta = "Village";
    questao20.respostaErrada1 = "Vampire Mommy";
    questao20.respostaErrada2 = "Don't go in the Doll House";
    questao20.respostaErrada3 = "They took my girlfriend and demon child";

    perguntas questao[20] = {questao1,questao2,questao3,questao4,questao5,questao6,questao7,questao8,questao9,questao10,questao11,questao12,questao13,questao14,questao15,questao16,questao17,questao18,questao19,questao20}; //Vetor do tipo perguntas que recebe as diferentes questões criadas
    unsigned seed = chrono::system_clock::now().time_since_epoch().count(); 
    shuffle(begin(questao), end(questao), default_random_engine(seed)); // o vetor que contém as questões é baralhado de modo a que as perguntas sejam feitas em ordem diferente de cada vez que se corre o jogo
    for (int i = 0; i < 10; i++){ //loop que vai percorrer o vetor questao
        questao[i].mostrarPergunta(opcao); //função mostrarpergunta executa a questão no indice i
      
        if (opcao == questao[i].indiceRespostaCorreta){ //condição para verificar resposta certa
            cout << endl << "Parabéns, escolheu corretamente!" << endl;
            cout << "A sua pontuação:" << endl;
            pontos += 5;
            cout << endl;
        

            ifstream read(email + ".txt"); 
            getline(read, mail); 
            getline(read, user); 
            getline(read, pass); 
            getline(read, score);

            int score; 

            pontostotais += pontos;
 	       
            cout << "" << pontos;
            
            pontostotais = pontos;
           
            score = pontostotais;


             ofstream file; 
            file.open(email+ ".txt");

            file << email << endl << username <<endl << password << endl << score;

            file.close();

            if (i < 9){ //condição para verificar se é a ultima jogada ou não
                cout << endl << endl << "Continue para a próxima pergunta!" << endl;
                getch();
                system("CLS");
            }else{
                cout << endl << "Terminou o jogo!" << endl;
                getch();
                system("CLS");
            }
        }else{
            cout << endl << "Resposta errada!" << endl;
            if(i < 9){
                cout << endl << "Continue para a próxima pergunta!" << endl;
                getch();
                system("CLS");
            }else{
                cout << endl << "Terminou o jogo!" << endl;
                getch();
                system("CLS");
            }
        }
    }
}

void jogoMusica(){
    int opcao;

    perguntas questao1;
    questao1.pergunta = "Qual a principal música portuguesa?";
    questao1.respostaCerta = "Fado";
    questao1.respostaErrada1 = "Pimba";
    questao1.respostaErrada2 = "Cânticos de missa nos altifalantes da festa popular local";
    questao1.respostaErrada3 = "Funk brasileiro";

    perguntas questao2;
    questao2.pergunta = "Quem é a voz da popular banda ""Queen""?";
    questao2.respostaCerta = "Freddy Mercury";
    questao2.respostaErrada1 = "Isabel II";
    questao2.respostaErrada2 = "Ricardo Mourão";
    questao2.respostaErrada3 = "Quim Barreiros";


    perguntas questao3;
    questao3.pergunta = "Os beatles são um famoso grupo de...";
    questao3.respostaCerta = "Músicos ingleses";
    questao3.respostaErrada1 = "Escaravelhos";
    questao3.respostaErrada2 = "Hippies";
    questao3.respostaErrada3 = "Jogadores de Cricket profissional";

    perguntas questao4;
    questao4.pergunta = "Completa o título da música: ""All I want for Christmas is..."" ";
    questao4.respostaCerta = "...you";
    questao4.respostaErrada1 = "...a dog";
    questao4.respostaErrada2 = "...death";
    questao4.respostaErrada3 = "...global domination";
    
    perguntas questao5;
    questao5.pergunta = "Completa o título da música: ""Smells like teen..."" ";
    questao5.respostaCerta = "...spirit";
    questao5.respostaErrada1 = "...angst";
    questao5.respostaErrada2 = "...agers";
    questao5.respostaErrada3 = "...ager mutant ninja turtles";

    perguntas questao6;
    questao6.pergunta = "A que artista pertence a música ""Billie Jean""?";
    questao6.respostaCerta = "Michael Jackson";
    questao6.respostaErrada1 = "Billie Eilish";
    questao6.respostaErrada2 = "Bárbara Tinoco";
    questao6.respostaErrada3 = "Miguel Jacques";

    perguntas questao7;
    questao7.pergunta = "Toy lançou em 2021 o melhor single de verão. Qual é?";
    questao7.respostaCerta = "Verão e Amor (Cerveja no Congelador)";
    questao7.respostaErrada1 = "Tá Turbinada";
    questao7.respostaErrada2 = "Garagem da Vizinha";
    questao7.respostaErrada3 = "Sonhos de Menino";

    perguntas questao8;
    questao8.pergunta = "Como se chama o popular instrumento português?";
    questao8.respostaCerta = "Cavaquinho";
    questao8.respostaErrada1 = "Ukelele";
    questao8.respostaErrada2 = "Reco-reco";
    questao8.respostaErrada3 = "Vuvuzela";

    perguntas questao9;
    questao9.pergunta = "O kpop é música pop com origem em que país?";
    questao9.respostaCerta = "Coreia do Sul";
    questao9.respostaErrada1 = "Coreia do Norte";
    questao9.respostaErrada2 = "Kortugal";
    questao9.respostaErrada3 = "Zimbabué";

    perguntas questao10;
    questao10.pergunta = "Que artista mandou o popular álbum ""Starboy""?";
    questao10.respostaCerta = "The Weeknd";
    questao10.respostaErrada1 = "The Manuel";
    questao10.respostaErrada2 = "The Monday";
    questao10.respostaErrada3 = "Patrick Star";

    perguntas questao11;
    questao11.pergunta = "A rapper e cantora Amala Dlamini é conhecida pelo nome de artista...";
    questao11.respostaCerta = "Doja Cat";
    questao11.respostaErrada1 = "Doja Cow";
    questao11.respostaErrada2 = "Doja Dog";
    questao11.respostaErrada3 = "Amália Rodrigues";

    perguntas questao12;
    questao12.pergunta = "A mixtape ""Guess who's back?"" pertence a que popular rapper americano?";
    questao12.respostaCerta = "50 cent";
    questao12.respostaErrada1 = "2 cent";
    questao12.respostaErrada2 = "50 dolla";
    questao12.respostaErrada3 = "1 euro e meio";

    perguntas questao13;
    questao13.pergunta = "Que artista foi aclamado/a como a ""voz de Portugal"" e obteve reconhecimento mundial?";
    questao13.respostaCerta = "Amália Rodrigues";
    questao13.respostaErrada1 = "Quim Barreiros";
    questao13.respostaErrada2 = "D'ZRT";
    questao13.respostaErrada3 = "Ricardo Mourão";

    perguntas questao14;
    questao14.pergunta = "Que instrumento é o artista Chico da Tina conhecido por usar?";
    questao14.respostaCerta = "Concertina";
    questao14.respostaErrada1 = "Cortina";
    questao14.respostaErrada2 = "Palestina";
    questao14.respostaErrada3 = "Critina";

    perguntas questao15;
    questao15.pergunta = "Qual é a banda de rock português mais bem sucedida?";
    questao15.respostaCerta = "Xutos & Pontapés";
    questao15.respostaErrada1 = "Socos & Murros";
    questao15.respostaErrada2 = "Xutos & Remates";
    questao15.respostaErrada3 = "Socos & Pontapés";

    perguntas questao16;
    questao16.pergunta = "Que artista de hiphip português é conhecido por títulos como ""Tou Bem"" e ""Água de Côco""?";
    questao16.respostaCerta = "ProfJam";
    questao16.respostaErrada1 = "ProfMario";
    questao16.respostaErrada2 = "ProfZinho";
    questao16.respostaErrada3 = "MrProf";

    perguntas questao17;
    questao17.pergunta = "Que artista atuou na Praça da Casa da Música, no passado S.João 2023?";
    questao17.respostaCerta = "David Bruno";
    questao17.respostaErrada1 = "Bruno David";
    questao17.respostaErrada2 = "Sra Maria da Mercearia";
    questao17.respostaErrada3 = "António";

    perguntas questao18;
    questao18.pergunta = "O cantor português José Malhoa, tem 5 filhos de quantas mulheres? ";
    questao18.respostaCerta = "5";
    questao18.respostaErrada1 = "1";
    questao18.respostaErrada2 = "7";
    questao18.respostaErrada3 = "0";

    perguntas questao19;
    questao19.pergunta = "Que artista português plagiou 11 músicas e resolveu o problema com doações?";
    questao19.respostaCerta = "Tony Carreira";
    questao19.respostaErrada1 = "Tony Carreira Criminal";
    questao19.respostaErrada2 = "Tony Roubos de Menino";
    questao19.respostaErrada3 = "Tony Descarrila";

    perguntas questao20;
    questao20.pergunta = "Sobre o que é a música ""Chico Fininho"" de Rui Veloso?";
    questao20.respostaCerta = "Um consumidor frequente de drogas recreativas";
    questao20.respostaErrada1 = "Um rapaz com sonhos de ser modelo";
    questao20.respostaErrada2 = "Um miúdo inteligente chamado Francisco";
    questao20.respostaErrada3 = "Um homem com problemas de saúde";

    perguntas questao[20] = {questao1,questao2,questao3,questao4,questao5,questao6,questao7,questao8,questao9,questao10,questao11,questao12,questao13,questao14,questao15,questao16,questao17,questao18,questao19,questao20}; //Vetor do tipo perguntas que recebe as diferentes questões criadas
    unsigned seed = chrono::system_clock::now().time_since_epoch().count(); 
    shuffle(begin(questao), end(questao), default_random_engine(seed)); // o vetor que contém as questões é baralhado de modo a que as perguntas sejam feitas em ordem diferente de cada vez que se corre o jogo
    for (int i = 0; i < 10; i++){ //loop que vai percorrer o vetor questao
        questao[i].mostrarPergunta(opcao); //função mostrarpergunta executa a questão no indice i
      
        if (opcao == questao[i].indiceRespostaCorreta){ //condição para verificar resposta certa
            cout << endl << "Parabéns, escolheu corretamente!" << endl;
            cout << "A sua pontuação: " << endl;
            pontos += 5;
            cout << endl;

            ifstream read(email + ".txt"); 
            getline(read, mail); 
            getline(read, user); 
            getline(read, pass); 
            getline(read, score);

            int score; 

            pontostotais += pontos;
 	       
            cout << "" << pontos;
            
            pontostotais = pontos;
           
            score = pontostotais;


             ofstream file; 
            file.open(email+ ".txt");

            file << email << endl << username <<endl << password << endl << score;

            file.close();

            if (i < 9){ //condição para verificar se é a ultima jogada ou não
                cout << endl << endl << "Continue para a próxima pergunta!" << endl;
                getch();
                system("CLS");
            }else{
                cout << endl << "Terminou o jogo!" << endl;
                getch();
                system("CLS");
            }
        }else{
            cout << endl << "Resposta errada!" << endl;
            if(i < 9){
                cout << endl << "Continue para a próxima pergunta!" << endl;
                getch();
                system("CLS");
            }else{
                cout << endl << "Terminou o jogo!" << endl;
                getch();
                system("CLS");
            }
        }
    }
}

void jogoGeografia(){
    int opcao;

    perguntas questao1;
    questao1.pergunta = "Qual a capital de Espanha?";
    questao1.respostaCerta = "Madrid";
    questao1.respostaErrada1 = "Belém";
    questao1.respostaErrada2 = "México";
    questao1.respostaErrada3 = "Arca d'Água";

    perguntas questao2;
    questao2.pergunta = "Onde fica localizado o Brasil?";
    questao2.respostaCerta = "América do Sul";
    questao2.respostaErrada1 = "África";
    questao2.respostaErrada2 = "Rua dos Canaviais";
    questao2.respostaErrada3 = "México";


    perguntas questao3;
    questao3.pergunta = "O Rio Nilo fica em que continente?";
    questao3.respostaCerta = "Africano";
    questao3.respostaErrada1 = "Asiático";
    questao3.respostaErrada2 = "Rússia";
    questao3.respostaErrada3 = "Europa";

    perguntas questao4;
    questao4.pergunta = "Quantos países fazem parte do Reino Unido?";
    questao4.respostaCerta = "4";
    questao4.respostaErrada1 = "2";
    questao4.respostaErrada2 = "5";
    questao4.respostaErrada3 = "Nenhum";
    
    perguntas questao5;
    questao5.pergunta = "Qual é o maior país da América do Sul";
    questao5.respostaCerta = "Brasil";
    questao5.respostaErrada1 = "Perú";
    questao5.respostaErrada2 = "Chad";
    questao5.respostaErrada3 = "Estónia";

    perguntas questao6;
    questao6.pergunta = "A que país pertence a Gronelândia?";
    questao6.respostaCerta = "Dinamarca";
    questao6.respostaErrada1 = "Estados Unidos da América";
    questao6.respostaErrada2 = "Canadá";
    questao6.respostaErrada3 = "Portugal";

    perguntas questao7;
    questao7.pergunta = "Qual é o maior oceano do mundo?";
    questao7.respostaCerta = "Pacífico";
    questao7.respostaErrada1 = "Atlântico";
    questao7.respostaErrada2 = "Copacabana";
    questao7.respostaErrada3 = "Oceanário de Lisboa";

    perguntas questao8;
    questao8.pergunta = "Quantas ilhas constituem o arquipélago dos Açores?";
    questao8.respostaCerta = "9";
    questao8.respostaErrada1 = "8";
    questao8.respostaErrada2 = "2";
    questao8.respostaErrada3 = "33";

    perguntas questao9;
    questao9.pergunta = "Quantas ilhas constituem o arquipélado da Madeira?";
    questao9.respostaCerta = "4";
    questao9.respostaErrada1 = "3";
    questao9.respostaErrada2 = "2";
    questao9.respostaErrada3 = "A madeira é um arquipélago?";

    perguntas questao10;
    questao10.pergunta = "Qual é o maior rio de Portugal?";
    questao10.respostaCerta = "Rio Tejo";
    questao10.respostaErrada1 = "Rio Douro";
    questao10.respostaErrada2 = "As lágrimas portuguesas quando o Porto perde em casa";
    questao10.respostaErrada3 = "Rio Tinto";

    perguntas questao11;
    questao11.pergunta = "Entre que países se situa o monte Evereste?";
    questao11.respostaCerta = "China e Nepal";
    questao11.respostaErrada1 = "Nepal e Bangladesh";
    questao11.respostaErrada2 = "Algures nos Pirinéus";
    questao11.respostaErrada3 = "Ilha do Pico e Serra da Estrela";

    perguntas questao12;
    questao12.pergunta = "Qual a capital do Brasil?";
    questao12.respostaCerta = "Brasília";
    questao12.respostaErrada1 = "Rio de Janeiro";
    questao12.respostaErrada2 = "Brigadeiros";
    questao12.respostaErrada3 = "Rio Amazonas";

    perguntas questao13;
    questao13.pergunta = "Aproximadamente quantas ilhas formam o país do Japão?";
    questao13.respostaCerta = "6000";
    questao13.respostaErrada1 = "4";
    questao13.respostaErrada2 = "Zero";
    questao13.respostaErrada3 = "Pelo menos 1 e menos de 100";

    perguntas questao14;
    questao14.pergunta = "Qual o maior país do mundo?";
    questao14.respostaCerta = "Rússia";
    questao14.respostaErrada1 = "Portugal";
    questao14.respostaErrada2 = "África";
    questao14.respostaErrada3 = "União Europeia";

    perguntas questao15;
    questao15.pergunta = "Qual é o maior país africano?";
    questao15.respostaCerta = "Argélia";
    questao15.respostaErrada1 = "Wakanda";
    questao15.respostaErrada2 = "Chad";
    questao15.respostaErrada3 = "Djibouti";

    perguntas questao16;
    questao16.pergunta = "Qual o mais comum símbolo nacional dos EUA?";
    questao16.respostaCerta = "Águia";
    questao16.respostaErrada1 = "Cheeseburguer";
    questao16.respostaErrada2 = "Glock 19";
    questao16.respostaErrada3 = "Doenças Cardíacas";

    perguntas questao17;
    questao17.pergunta = "Em que continente se situa o país da Austrália?";
    questao17.respostaCerta = "Oceania";
    questao17.respostaErrada1 = "Austrália";
    questao17.respostaErrada2 = "Península Ibérica";
    questao17.respostaErrada3 = "Madeira";

    perguntas questao18;
    questao18.pergunta = "O que é o Equador?";
    questao18.respostaCerta = "A linha imaginária que separa o planeta em Norte e Sul";
    questao18.respostaErrada1 = "Um país no Brasil";
    questao18.respostaErrada2 = "Um tratador de póneis";
    questao18.respostaErrada3 = "Um primo afastado do cavalo";

    perguntas questao19;
    questao19.pergunta = "O Hawaii, embora um estado americano, pertence a que sub-região?";
    questao19.respostaCerta = "Polinésia, na Oceânia";
    questao19.respostaErrada1 = "Polinésia, no mar português";
    questao19.respostaErrada2 = "Açores";
    questao19.respostaErrada3 = "Índia";

    perguntas questao20;
    questao20.pergunta = "O que são os Países Baixos?";
    questao20.respostaCerta = "A Holanda";
    questao20.respostaErrada1 = "Os países do Antártico";
    questao20.respostaErrada2 = "Ilhas australianas";
    questao20.respostaErrada3 = "Países com população abaixo da média de altura";

    perguntas questao[20] = {questao1,questao2,questao3,questao4,questao5,questao6,questao7,questao8,questao9,questao10,questao11,questao12,questao13,questao14,questao15,questao16,questao17,questao18,questao19,questao20}; //Vetor do tipo perguntas que recebe as diferentes questões criadas
    unsigned seed = chrono::system_clock::now().time_since_epoch().count(); 
    shuffle(begin(questao), end(questao), default_random_engine(seed)); // o vetor que contém as questões é baralhado de modo a que as perguntas sejam feitas em ordem diferente de cada vez que se corre o jogo
    for (int i = 0; i < 10; i++){ //loop que vai percorrer o vetor questao
        questao[i].mostrarPergunta(opcao); //função mostrarpergunta executa a questão no indice i
      
        if (opcao == questao[i].indiceRespostaCorreta){ //condição para verificar resposta certa
            cout << endl << "Parabéns, escolheu corretamente!" << endl;
            cout << "A sua pontuação: " << endl;
            pontos += 5;
            cout << endl;
        

            ifstream read(email + ".txt"); 
            getline(read, mail); 
            getline(read, user); 
            getline(read, pass); 
            getline(read, score);

            int score; 

            pontostotais += pontos;
 	       
            cout << "" << pontos;
            
            pontostotais = pontos;
           
            score = pontostotais;


             ofstream file; 
            file.open(email+ ".txt");

            file << email << endl << username <<endl << password << endl << score;

            file.close();

            if (i < 9){ //condição para verificar se é a ultima jogada ou não
                cout << endl << endl << "Continue para a próxima pergunta!" << endl;
                getch();
                system("CLS");
            }else{
                cout << endl << "Terminou o jogo!" << endl;
                getch();
                system("CLS");
            }
        }else{
            cout << endl << "Resposta errada!" << endl;
            if(i < 9){
                cout << endl << "Continue para a próxima pergunta!" << endl;
                getch();
                system("CLS");
            }else{
                cout << endl << "Terminou o jogo!" << endl;
                getch();
                system("CLS");
            }
        }
    }
}
