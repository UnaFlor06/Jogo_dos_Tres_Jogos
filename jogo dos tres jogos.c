#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Provérbio do dia: Suicídio é preferível à desenvolver front-end em C
int main()
{
//FUNCIONALIDADES BÁSICAS DO MENU
int tecla;

    // Texto placeholder (final será em ASCII)
printf("Joguinho Dos Três Jogos\n"); //placeholder
printf("Pressione as teclas para jogar os jogos\n"); //placeholder
printf("1 - Perguntas e Respostas\n");
printf("2 - Cobra na Caixa!\n");
printf("3 - Gousma of War\n");
printf("4 - Sair\n");
scanf("%d", &tecla);

//Código que termina o jogo

if(tecla == 4){
#ifdef _WIN32
system("cls");//executar código em Windows
#else
system("clear");//executar código em Unix(Linux/MacOS/FreeBSD)
#endif
exit(0);
}

//SELEÇÃO DE JOGO "Perguntas e Respostas"

else if(tecla == 1){
printf("Se você deseja incializar o jogo PERGUNTAS E RESPOSTAS, pressione 1\n");

char resposta1;
char resposta2;
char resposta3;
char resposta4;
char resposta5;
int jogo, jogoinicio;

scanf("%d", &jogo);
switch(jogo){
case 1:
#ifdef _WIN32
system("cls");//executar código em Windows
#else//não altere esse código, se não o terminal não será limpo
system("clear");//executar código em Unix(Linux/MacOS/FreeBSD)
#endif
printf("PERGUNTAS E RESPOSTAS\n");
printf("Pressione 1 para continuar ou 4 para voltar\n");
break;
}
scanf("%d", &jogoinicio);
switch(jogoinicio){
case 1:
printf("O jogo 'Perguntas e Respostas' é muito simples. Você, jogador e/ou jogadora seram inquiridos um total de 5 perguntas dividias em A, B, C e D\n");
printf("Para ganhar nesse jogo, é necessário responder todas as perguntas corretamente\n");
printf("Pressione 1 para continuar ou 4 para voltar\n");
break;
}

//Pergunta 1

fflush(stdin);
scanf("%d", &resposta1);
fflush(stdin);

tecla = getchar();
switch(resposta1){
case 1:
printf("Pergunta 1-)\n");
printf("Que cidade Portugal tomou no norte da África em 1415?\n");
printf("a) Marrocos\n");
printf("b) Gibraltar\n");
printf("c) Cartago\n");
printf("d) Ceuta\n");
break;
}
scanf("%c", &resposta1);
switch(resposta1){
case 'a':
printf("NÃO, ESTA NÃO É A RESPOSTA\n""Pressione 1 para continuar\n");
break;
case 'b':
printf("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n");
break;
case 'c':
printf("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n");
break;
case 'd':
printf("ESTÁ CORRETA A RESPOSTA!\n""Pressione 1 para continuar\n");
break;
}

//Pergunta 2

fflush(stdin);
scanf("%d", &resposta2);
fflush(stdin);

tecla =getchar();
switch(resposta2){
case 1:
printf("Pergunta 2-)\n");
printf("Qual a primeira música a ser cantada em um computador?\n");
printf("a) Daisy Bell\n");
printf("b) Fly of the Valkyries\n");
printf("c) 1812 Overture\n");
printf("d) Big Iron\n");
break;
}
scanf("%c", &resposta2);
switch(resposta2){
case 'a':
printf("ESTÁ CORRETA A RESPOSTA!\n""Pressione 1 para continuar\n");
break;
case 'b':
printf("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n");
break;
case 'c':
printf("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n");
break;
case 'd':
printf("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n");
break;
}

//Pergunta 3

fflush(stdin);
scanf("%d", &resposta3);
fflush(stdin);

tecla =getchar();
switch(resposta3){
case 1:
printf("Pergunta 3-)\n");
printf("Qual a pessoa capaz de quebrar um celular da NOKIA?\n");
printf("a) Bruce Lee\n");
printf("b) Jackie Chan\n");
printf("c) Chuck Norris\n");
printf("d) Jean Claude Vandame\n");
break;
}
scanf("%c", &resposta3);
switch(resposta3){
case 'a':
printf("NÃO, ESTA NÃO É A RESPOSTA\n""Pressione 1 para continuar\n");
break;
case 'b':
printf("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n");
break;
case 'c':
printf("ESTÁ CORRETA A RESPOSTA!\n""Pressione 1 para continuar\n");
break;
case 'd':
printf("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n");
break;
}

//Pergunta 4

fflush(stdin);
scanf("%d", &resposta4);
fflush(stdin);

tecla =getchar();
switch(resposta4){
case 1:
printf("Pergunta 4-)\n");
printf("Bicoito ou bolacha?\n");
printf("a) Biscoito\n");
printf("b) Bolacha\n");
printf("c) Biscuit\n");
printf("d) Comida\n");
break;
}
scanf("%c", &resposta4);
switch(resposta4){
case 'a':
printf("NÃO, ESTA NÃO É A RESPOSTA\n""Pressione 1 para continuar\n");
break;
case 'b':
printf("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar");
break;
case 'c':
printf("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar");
break;
case 'd':
printf("ESTÁ CORRETA A RESPOSTA!\n""Pressione 1 para continuar");
break;
}
//Pergunta 5

fflush(stdin);
scanf("%d", &resposta5);
fflush(stdin);

tecla =getchar();
switch(resposta5){
case 1:
printf("Pergunta 5-)\n");
printf("QUAL FOI A PRIMEIRA LINGUAGEM DE PROGRAMAÇÃO\n");
printf("a) C\n");
printf("b) FORTRAN\n");
printf("c) BASIC\n");
printf("d) Código Morse\n");
break;
}
scanf("%c", &resposta5);
switch(resposta5){
case 'a':
printf("NÃO, ESTA NÃO É A RESPOSTA\n""Pressione 1 para continuar\n");
break;
case 'b':
printf("ESTÁ CORRETA A RESPOSTA!\n""Pressione 1 para continuar\n");
break;
case 'c':
printf("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n");
break;
case 'd':
printf("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n");
break;
}


//Fim do jogo "PERGUNTAS E RESPOSTAS"

printf("Fim do jogo PERGUNTAS E RESPOSTAS\n");
printf("Você acertou x perguntas\n"); //A intenção era fazer com que as quantidades de acertos do player seja contada.

}

//Seleção de jogo "Cobra na Caixa"

else if(tecla == 2){
printf("Se você deseja inicializar o jogo COBRA NA CAIXA, pressione 2\n");

int jogo2, jogoinicio2;

scanf("%d", &jogo2);
switch(jogo2){
case 2:
#ifdef _WIN32
system("cls");//executar código em Windows
#else //Não altere esse código, se não o terminal não será limpo
system("clear");//executar código em Unix(Linux/MacOS/FreeBSD)
#endif
printf("COBRA NA CAIXA\n");
printf("Pressione 2 para continuar ou 4 para voltar\n");
break;
}
scanf("%d", &jogoinicio2);
switch(jogoinicio2){
case 2:
printf("O jogo COBRA NA CAIXA é um jogo de escolhas...\n");
printf("Você e mais outro jogador estão presos em uma tumba egípicia antiga, e é seu objetivo fugir dessa\n");
printf("Cuidado... Pois nunca se sabe qual é o caminho certo\n");
printf("E nunca se sabe onde as cobras espreitam...\n");
printf("Pressione 2 para seguir para a seleção de personagens\n");
break;
}

int pcselect;
int pc1select, pc2select;
int Fulano = 1;
int Fulana = 2;
int Ciclano = 3;
int Ciclana = 4;
int Beltrano = 5;
int Beltrana = 6;
int Nome = 7;

scanf("%d", &pcselect);
switch(pcselect){
case 2:
#ifdef _WIN32
system("cls");//executar código em Windows
#else
system("clear");//executar código em Unix(Linux/MacOS/FreeBSD)
#endif
printf("SELECIONE SEU PERSONAGEM! Jogador 1\n");
printf("1-) Fulano\n");
printf("2-) Fulana\n");
printf("3-) Ciclano\n");
printf("4-) Ciclana\n");
printf("5-) Beltrano\n");
printf("6-) Beltrana\n");
printf("7-) Nome\n");

//Player 1 select

scanf("%d", &pc1select);
switch(pc1select){
case 1:
pc1select == 1;
if(pc1select == 1){
printf("Jogador 1 escolheu Fulano\n");
}
break;
case 2:
pc1select == 2;
if(pc1select == 2){
printf("Jogador 1 escolheu Fulana\n");
}
break;
case 3:
pc1select == 3;
if(pc1select == 3){
printf("Jogador 1 escolheu Ciclano\n");
}
break;
case 4:
pc1select == 4;
if(pc1select == 4){
printf("Jogador 1 escolheu Ciclan\n");
}
break;
case 5:
pc1select == 5;
if(pc1select == 5){
printf("Jogador 1 escolheu Beltrano\n");    
}
break;
case 6:
pc1select == 6;
if(pc1select == 6){
printf("Jogador 1 escolheu Beltrana\n");
}
break;
case 7:
pc1select == 7;
if(pc1select == 7){
printf("Jogador 1 escolheu Nome\n");
}
break;
}

//Player 2 select

printf("SELECIONE SEU PERSONAGEM! Jogador 2\n");

scanf("%d", &pc2select);
switch(pc2select){
case 1:
pc2select == 1;
if(pc2select == 1){
printf("Jogador 2 escolheu Fulano\n");
}
break;
case 2:
pc2select == 2;
if(pc2select == 2){
printf("Jogador 2 escolheu Fulana\n");
}
break;
case 3:
pc2select == 3;
if(pc2select == 3){
printf("Jogador 2 escolheu Ciclano\n");
}
break;
case 4:
pc2select == 4;
if(pc2select == 4){
printf("Jogador 2 escolheu Ciclana\n");
}
break;
case 5:
pc2select == 5;
if(pc2select == 5){
printf("Jogador 2 escolheu Beltrano\n");    
}
break;
case 6:
pc2select == 6;
if(pc2select == 6){
printf("Jogador 2 escolheu Beltrana\n");
}
break;
case 7:
pc2select == 7;
if(pc2select == 7){
printf("Jogador 2 escolheu Nome\n");
}
break;
}
#ifdef _WIN32
system("cls");//executar código em Windows
#else
system("clear");//executar código em Unix(Linux/MacOS/FreeBSD)
#endif
}

//Input pc1 e pc2

int pcchoice, pcchoice2;
int turn = 8;

srand(time(NULL));
int cobravalue = rand() % 5 + 1; 
int cobra = cobravalue;

//Caixas 

fflush(stdin);

printf("Escolha uma caixa de 1 a 5\n");
printf("___ ___ ___ ___ ___\n");
printf("|1| |2| |3| |4| |5|\n");
printf("``` ``` ``` ``` ```\n");

//Input pc1
do{
if(turn == 8){
scanf("%d", &pcchoice);
switch(pcchoice){
case 1:
pcchoice == 1;
if(pcchoice == 1){
    printf("Jogador 1 escolheu a caixa %d\n", pcchoice);
    if(pcchoice == cobra){
    printf("Você encontrou uma cobra!\n");
    printf("Você perdeu\n");
}
}
break;
case 2:
pcchoice == 2;
if(pcchoice == 2){
printf("Jogador 1 escolheu a caixa %d\n", pcchoice);
    if(pcchoice == cobra){
    printf("Você encontrou uma cobra!\n");
    printf("Você perdeu\n");
}
}
break;
case 3:
pcchoice == 3;
if(pcchoice == 3){
printf("Jogador 1 escolheu a caixa %d\n", pcchoice);
    if(pcchoice == cobra){
    printf("Você encontrou uma cobra!\n");
    printf("Você perdeu\n");
}
}
break;
case 4:
pcchoice == 4;
if(pcchoice == 4){
printf("Jogador 1 escolheu a caixa %d\n", pcchoice);
    if(pcchoice == cobra){
    printf("Você encontrou uma cobra!\n");
    printf("Você perdeu\n");
}
}
break;
case 5:
pcchoice == 5;
if(pcchoice == 5){
printf("Jogador 1 escolheu a caixa %d\n", pcchoice);
    if(pcchoice == cobra){
    printf("Você encontrou uma cobra!\n");
    printf("Você perdeu\n");
}
}
break;
}
if(pcchoice == cobra){
turn = cobra;
}
}

//Input pc2

if(turn ==8){
scanf("%d", &pcchoice2);
switch(pcchoice2){
case 1:
pcchoice2 == 1;
if(pcchoice2 == 1){
printf("Jogador 2 escolheu a caixa %d\n", pcchoice2);
    if(pcchoice2 == cobra){
    printf("Você encontrou uma cobra!\n");
    printf("Você perdeu\n");
}
}
break;
case 2:
pcchoice2 == 2;
if(pcchoice2 == 2){
printf("Jogador 2 escolheu a caixa %d\n", pcchoice2);
    if(pcchoice2 == cobra){
    printf("Você encontrou uma cobra!\n");
    printf("Você perdeu\n");
}
}
break;
case 3:
pcchoice2 == 3;
if(pcchoice2 == 3){
printf("Jogador 2 escolheu a caixa %d\n", pcchoice2);
    if(pcchoice2 == cobra){
    printf("Você encontrou uma cobra!\n");
    printf("Você perdeu\n");
}
}
break;
case 4:
pcchoice2 == 4;
if(pcchoice2 == 4){
printf("Jogador 2 escolheu a caixa %d\n", pcchoice2);
    if(pcchoice2 == cobra){
    printf("Você encontrou uma cobra!\n");
    printf("Você perdeu\n");
}
}
break;
case 5:
pcchoice2 == 5;
if(pcchoice2 == 5){
printf("Jogador 2 escolheu a caixa %d\n", pcchoice2);
    if(pcchoice2 == cobra){
    printf("Você encontrou uma cobra!\n");
    printf("Você perdeu\n");
}
}
break;
}
if(pcchoice2 == cobra){
turn = cobra;
}
}

}while(turn != cobra);

//Fim das rodadas dos jogadores



printf("Pressione 2 para rejogar\n");
printf("ou 4 para voltar ao menu\n");
fflush(stdin);
scanf("%d", &tecla);
fflush(stdin);
switch(tecla){
case 2:
#ifdef _WIN32
system("cls");//executar código em Windows
#else
system("clear");//executar código em Unix(Linux/MacOS/FreeBSD)
#endif     
}
}


    return 0;

}



	

	
