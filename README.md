# Projeto Quiz
 Projeto de grupo de Projeto de Programação
Helena Leonardo Diogo



Desenvolva uma aplicação que simule um Quiz. Este programa deve permitir aos 
utilizadores fazer um registo simples com o nome de utilizador, email e password e terá 
acesso a uma página onde constará os seus pontos acumulados no jogo. O Quiz deverá 
englobar vários temas, com questões de escolha múltipla. O login do jogador, bem como 
a sua pontuação devem ser guardados num ficheiro TXT (bloco de notas) e deverá ser 
lido sempre que seja feito login.
Visão Geral do Projeto
1. O Quiz deverá ter as seguintes características:
2. O utilizador tem a possibilidade de fazer signin e login;
3. A tela da conta deve mostrar as seguintes opções:
o Nome de utilizador;
o Pontuação;
o Iniciar jogo;
o Sair.
4. Quando o jogador iniciar o jogo deverão ser apresentados os temas das 
perguntas;
5. Após escolha do tema devem ser apresentadas, à vez, 10 perguntas de 
escolha múltipla com 4 opções de resposta;
6. Cada tema deve ter mais de 10 perguntas de escolha múltipla, no entanto, 
cada vez que se jogar apenas serão apresentadas 10 perguntas;
7. O feedback da resposta deve ser imediato;
8. Cada resposta certa valerá um total de 5 pontos, que serão adicionados à 
sua pontuação geral.
9. No final do Quiz, o programa retornará à tela da conta

Características adicionais do Projeto (opcional)

Cada uma destas características adicionais implementadas, valerão mais pontos 
à nota final do projeto:
1. Tempo limite de resposta (+5 pontos)
2. Eliminar conta (+5 pontos)- Nao esta bem implementado.
3. Reset de pontuação (+5 pontos) FEITO
4. Adicionar 3 níveis de dificuldade (+10 pontos)
5. Recuperação de Password (+5 pontos) - A fazer.
6. Tabela de líderes (+ 5 pontos)

 # Projeto Quiz
Projeto de grupo de Projeto de Programação
Helena Leonardo Diogo


@ -41,3 +41,23 @@ Cada uma destas características adicionais implementadas, valerão mais pontos
6. Tabela de líderes (+ 5 pontos)

 
/*
Função de validar resposta:
int validaResposta(int a){
    switch(a){
        case 1:
        case 2:
        case 3:
        case 4:
    }
}

Podem fazer melhor, pesquisem por isto:
struct Question {
    string question;
    string options[4];
    int correct_option;
};

STRUCTS
*/