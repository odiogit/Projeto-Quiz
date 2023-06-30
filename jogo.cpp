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

    perguntas questao[3] = {questao1,questao2,questao3};
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    shuffle(begin(questao), end(questao), default_random_engine(seed));
    for (int i = 0; i < 3; i++){
        questao[i].mostrarPergunta(opcao);
        if (opcao == questao[i].indiceRespostaCorreta){
            cout << "Parabens, esta certo!" << endl;
        }else{
         cout << "Resposta errada!" << endl;
        }
    }
}