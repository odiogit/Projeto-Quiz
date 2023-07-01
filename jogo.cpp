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

using namespace std;

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
        cout << "Escolha uma opção (1-4): ";
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
    questao3.pergunta = "Qual a relação das personagens Dante e Virgil, em Devil May Cry?";
    questao3.respostaCerta = "Irmãos gémeos";
    questao3.respostaErrada1 = "Inimigos";
    questao3.respostaErrada2 = "Amantes";
    questao3.respostaErrada3 = "Primos";
    
    perguntas questao5;
    questao3.pergunta = "Qual a profissão da famosa personagem Mario, da franchise Super Mario?";
    questao3.respostaCerta = "Canalizador";
    questao3.respostaErrada1 = "Pizzaiolo";
    questao3.respostaErrada2 = "Limpador de Chaminés";
    questao3.respostaErrada3 = "Barbeiro";

    perguntas questao6;
    questao3.pergunta = "Qual o significado da abreviatura do jogo LoL?";
    questao3.respostaCerta = "League of Legends";
    questao3.respostaErrada1 = "Laugh out Loud";
    questao3.respostaErrada2 = "Legion of Lizards";
    questao3.respostaErrada3 = "Love of Landlords";

    perguntas questao7;
    questao3.pergunta = "Qual é o último Boss do jogo Minecraft?";
    questao3.respostaCerta = "Ender Dragon";
    questao3.respostaErrada1 = "Steve";
    questao3.respostaErrada2 = "Pikachu";
    questao3.respostaErrada3 = "Smaug";

    perguntas questao8;
    questao3.pergunta = "Qual a função da personagem Tom Nook, na franchise Animal Crossing?";
    questao3.respostaCerta = "Agente Imobiliário";
    questao3.respostaErrada1 = "Comunista";
    questao3.respostaErrada2 = "Lider de Culto";
    questao3.respostaErrada3 = "Cobrador Bancário da Máfia local";

    perguntas questao9;
    questao3.pergunta = "Que personagem amarela é conhecida por fugir de fantasmas e depois comê-los?";
    questao3.respostaCerta = "Pacman";
    questao3.respostaErrada1 = "Pikachu";
    questao3.respostaErrada2 = "Sonic the Hedgehog";
    questao3.respostaErrada3 = "Homer Simpson";

    perguntas questao10;
    questao3.pergunta = "Qual a personagem principal da franchise The Legend of Zelda?";
    questao3.respostaCerta = "Link";
    questao3.respostaErrada1 = "Zelda";
    questao3.respostaErrada2 = "Princess Peach";
    questao3.respostaErrada3 = "Luigi";

    perguntas questao11;
    questao3.pergunta = "Em que genero de jogo se foca a franchise Call of Duty?";
    questao3.respostaCerta = "First-person Shooter";
    questao3.respostaErrada1 = "Platafarma";
    questao3.respostaErrada2 = "Drama Histórico";
    questao3.respostaErrada3 = "Dating Sim";

    perguntas questao12;
    questao3.pergunta = "Na franchise Assassins Creed, a personagem Desmond Miles utiliza uma máquina que:";
    questao3.respostaCerta = "lhe permite reviver memórias dos seus antepassados";
    questao3.respostaErrada1 = "o transporta para o passado";
    questao3.respostaErrada2 = "lhe injeta um soro, dando-lhe super poderes";
    questao3.respostaErrada3 = "lhe diz as respostas para o Euromilhoes";

    perguntas questao13;
    questao3.pergunta = "O mais recente jogo da franchise God of War, abandona a mitologia grega para se forcar na mitologia…";
    questao3.respostaCerta = "Nórdica";
    questao3.respostaErrada1 = "Portuguesa";
    questao3.respostaErrada2 = "Alien";
    questao3.respostaErrada3 = "Imaginária";

    perguntas questao14;
    questao3.pergunta = "No jogo Bayonetta, onde tem a personagem principal os seus quatro revolveres?";
    questao3.respostaCerta = "Um em cada mao, e no salto de cada bota";
    questao3.respostaErrada1 = "Dois em cada mao";
    questao3.respostaErrada2 = "Um em cada mao, um na boca e outro nas costas";
    questao3.respostaErrada3 = "Os quatro à volta da cintura";

    perguntas questao15;
    questao3.pergunta = "Que empresa de videojogos é popular por jogos como “Red Dead Redemption” e “Grand Theft Auto”?";
    questao3.respostaCerta = "Rockstar Games";
    questao3.respostaErrada1 = "Riot Games";
    questao3.respostaErrada2 = "No Games Games";
    questao3.respostaErrada3 = "Criminal Tendencies Games";

    perguntas questao16;
    questao3.pergunta = "No jogo Stardew Valley, o que esconde o presidente Lewis?";
    questao3.respostaCerta = "Uma estátua de ouro de si mesmo";
    questao3.respostaErrada1 = "O corpo do nosso avô";
    questao3.respostaErrada2 = "O dinheiro dos impostos dos residentes";
    questao3.respostaErrada3 = "Fotos suspeitas da Marnie";

    perguntas questao17;
    questao3.pergunta = "No jogo Goat Simulator, qual o principal objetivo da personagem principal?";
    questao3.respostaCerta = "Lamber e destruir tudo";
    questao3.respostaErrada1 = "Saltar de um canhao";
    questao3.respostaErrada2 = "Aniquilar a humanidade";
    questao3.respostaErrada3 = "Fugir da quinta";

    perguntas questao18;
    questao3.pergunta = "Porque se tornou o jogo Among Us tão popular? ";
    questao3.respostaCerta = "Devido ao facto de as pessoas serem forçadas a ficar em casa a dar em maluco";
    questao3.respostaErrada1 = "O seu artstyle e gráficos inovadores e de última geração, focados no super realismo";
    questao3.respostaErrada2 = "Por ser um ótimo jogo para desenvolver confiança entre equipas e teambuilding";
    questao3.respostaErrada3 = "Pois foi aclamado pela NASA pela sua história e realismo";

    perguntas questao19;
    questao3.pergunta = "Que tipo de pessoas jogam frequentemente Overwatch?";
    questao3.respostaCerta = "Amantes de jogos multiplayer e de tiro, sem amor próprio";
    questao3.respostaErrada1 = "Antigos jogadores de League of Legends em recuperação";
    questao3.respostaErrada2 = "Crianças com problemas de raiva e acesso ao cartão de crédito dos pais";
    questao3.respostaErrada3 = "Colecionadores de skins interessados num bom negócio";

    perguntas questao20;
    questao3.pergunta = "Qual o nome do último jogo da franchise Resident Evil?";
    questao3.respostaCerta = "Village";
    questao3.respostaErrada1 = "Vampire Mommy";
    questao3.respostaErrada2 = "Don't go in the Doll House";
    questao3.respostaErrada3 = "They took my girlfriend and demon child";

    perguntas questao[3] = {questao1,questao2,questao3}; //Vetor do tipo perguntas que recebe as diferentes questões criadas
    unsigned seed = chrono::system_clock::now().time_since_epoch().count(); 
    shuffle(begin(questao), end(questao), default_random_engine(seed)); // o vetor que contém as questões é baralhado de modo a que as perguntas sejam feitas em ordem diferente de cada vez que se corre o jogo
    for (int i = 0; i < 3; i++){ //loop que vai percorrer o vetor questao
        questao[i].mostrarPergunta(opcao); //função mostrarpergunta executa a questão no indice i
        if (opcao == questao[i].indiceRespostaCorreta){ //condição para verificar resposta certa
            cout << endl << "Parabens, esta certo!" << endl;
            if (i < 2){ //condição para verificar se é a ultima jogada ou não
                cout << endl << "Continue para a próxima pergunta!" << endl;
                getch();
                system("CLS");
            }else{
                cout << endl << "Terminou o jogo!" << endl;
                getch();
                system("CLS");
            }
        }else{
            cout << endl << "Resposta errada!" << endl;
            if(i < 2){
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