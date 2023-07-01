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

void jogo(){
    int opcao;

    perguntas questao1;
    questao1.pergunta = "Quem foi o primeiro Rei de Portugal?";
    questao1.respostaCerta = "D. Afonso Henriques";
    questao1.respostaErrada1 = "Mickey";
    questao1.respostaErrada2 = "Pluto";
    questao1.respostaErrada3 = "Pateta";

    perguntas questao2;
    questao2.pergunta = "Quem sou eu?";
    questao2.respostaCerta = "Computador";
    questao2.respostaErrada1 = "Ninguém";
    questao2.respostaErrada2 = "Tudo";
    questao2.respostaErrada3 = "Nada";


    perguntas questao3;
    questao3.pergunta = "pergunta teste";
    questao3.respostaCerta = "certa";
    questao3.respostaErrada1 = "errada";
    questao3.respostaErrada2 = "errada";
    questao3.respostaErrada3 = "errada";

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