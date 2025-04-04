#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define YELLOW  "\x1B[33m"
#define RESET   "\x1B[0m"
void typeText(const char *text, int delay) {
    while (*text) {
    putchar(*text++);
    fflush(stdout);  
    usleep(delay * 1000);   
}
}

//Por favor, não me faça mais codar front-end em C
int main()
{
//FUNCIONALIDADES BÁSICAS DO MENU
int tecla;

typeText("==================================================\n", 50);
typeText(YELLOW"             Joguinho Dos Três Jogos\n", 50);
typeText(RESET"==================================================\n", 50);
typeText(YELLOW"\tPressione as teclas para jogar os jogos\n", 20);
typeText("\t1 - Perguntas e Respostas\n", 20);
typeText("\t2 - Cobra na Caixa!\n", 20);
typeText("\t3 - Gousma of War |vindo no próximo update:)|\n", 20);
typeText("\t4 - Sair\n\t", 20);
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
typeText("Se você deseja incializar o jogo PERGUNTAS E RESPOSTAS, pressione 1\n", 20);

char resposta1;
char resposta2;
char resposta3;
char resposta4;
char resposta5;
int jogo, jogoinicio;

scanf("%d", &jogoinicio);
switch(jogoinicio){
case 1:
#ifdef _WIN32
system("cls");//executar código em Windows
#else //Não altere esse código, se não o terminal não será limpo
system("clear");//executar código em Unix(Linux/MacOS/FreeBSD)
#endif

typeText("O jogo 'Perguntas e Respostas' é muito simples. Você, jogador e/ou jogadora seram inquiridos um total de 5 perguntas dividias em A, B, C e D\n", 20);
typeText("Para ganhar nesse jogo, é necessário responder todas as perguntas corretamente\n", 20);
typeText("Pressione 1 para continuar\n", 20);
break;
}

//Pergunta 1

fflush(stdin);
scanf("%d", &resposta1);
fflush(stdin);

tecla = getchar();
switch(resposta1){
case 1:
#ifdef _WIN32
system("cls");//executar código em Windows
#else //Não altere esse código, se não o terminal não será limpo
system("clear");//executar código em Unix(Linux/MacOS/FreeBSD)
#endif
typeText("Pergunta 1-)\n", 20);
typeText("Que cidade Portugal tomou no norte da África em 1415?\n", 20);
typeText("a) Marrocos\n", 20);
typeText("b) Gibraltar\n", 20);
typeText("c) Cartago\n", 20);
typeText("d) Ceuta\n", 20);
break;
}
scanf("%c", &resposta1);
switch(resposta1){
case 'a':
typeText("NÃO, ESTA NÃO É A RESPOSTA\n""Pressione 1 para continuar\n", 20);
break;
case 'b':
typeText("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n", 20);
break;
case 'c':
typeText("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n", 20);
break;
case 'd':
typeText("ESTÁ CORRETA A RESPOSTA!\n""Pressione 1 para continuar\n", 20);
break;
}

//Pergunta 2

fflush(stdin);
scanf("%d", &resposta2);
fflush(stdin);

tecla = getchar();
switch(resposta2){
case 1:
#ifdef _WIN32
system("cls");//executar código em Windows
#else //Não altere esse código, se não o terminal não será limpo
system("clear");//executar código em Unix(Linux/MacOS/FreeBSD)
#endif
typeText("Pergunta 2-)\n", 20);
typeText("Qual a primeira música a ser cantada em um computador?\n", 20);
typeText("a) Daisy Bell\n", 20);
typeText("b) Fly of the Valkyries\n", 20);
typeText("c) 1812 Overture\n", 20);
typeText("d) Big Iron\n", 20);
break;
}
scanf("%c", &resposta2);
switch(resposta2){
case 'a':
typeText("ESTÁ CORRETA A RESPOSTA!\n""Pressione 1 para continuar\n", 20);
break;
case 'b':
typeText("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n", 20);
break;
case 'c':
typeText("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n", 20);
break;
case 'd':
typeText("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n", 20);
break;
}

//Pergunta 3

fflush(stdin);
scanf("%d", &resposta3);
fflush(stdin);

tecla = getchar();
switch(resposta3){
case 1:
#ifdef _WIN32
system("cls");//executar código em Windows
#else //Não altere esse código, se não o terminal não será limpo
system("clear");//executar código em Unix(Linux/MacOS/FreeBSD)
#endif
typeText("Pergunta 3-)\n", 20);
typeText("Qual a pessoa capaz de quebrar um celular da NOKIA?\n", 20);
typeText("a) Bruce Lee\n", 20);
typeText("b) Jackie Chan\n", 20);
typeText("c) Chuck Norris\n", 20);
typeText("d) Jean Claude Vandame\n", 20);
break;
}
scanf("%c", &resposta3);
switch(resposta3){
case 'a':
typeText("NÃO, ESTA NÃO É A RESPOSTA\n""Pressione 1 para continuar\n", 20);
break;
case 'b':
typeText("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n", 20);
break;
case 'c':
typeText("ESTÁ CORRETA A RESPOSTA!\n""Pressione 1 para continuar\n", 20);
break;
case 'd':
typeText("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n", 20);
break;
}

//Pergunta 4

fflush(stdin);
scanf("%d", &resposta4);
fflush(stdin);

tecla = getchar();
switch(resposta4){
case 1:
#ifdef _WIN32
system("cls");//executar código em Windows
#else //Não altere esse código, se não o terminal não será limpo
system("clear");//executar código em Unix(Linux/MacOS/FreeBSD)
#endif
typeText("Pergunta 4-)\n", 20);
typeText("Bicoito ou bolacha?\n", 20);
typeText("a) Biscoito\n", 20);
typeText("b) Bolacha\n", 20);
typeText("c) Biscuit\n", 20);
typeText("d) Comida\n", 20);
break;
}
scanf("%c", &resposta4);
switch(resposta4){
case 'a':
typeText("NÃO, ESTA NÃO É A RESPOSTA\n""Pressione 1 para continuar\n", 20);
break;
case 'b':
typeText("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n", 20);
break;
case 'c':
typeText("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n", 20);
break;
case 'd':
typeText("ESTÁ CORRETA A RESPOSTA!\n""Pressione 1 para continuar\n", 20);
break;
}
//Pergunta 5

fflush(stdin);
scanf("%d", &resposta5);
fflush(stdin);

tecla = getchar();
switch(resposta5){
case 1:
#ifdef _WIN32
system("cls");//executar código em Windows
#else //Não altere esse código, se não o terminal não será limpo
system("clear");//executar código em Unix(Linux/MacOS/FreeBSD)
#endif
typeText("Pergunta 5-)\n", 20);
typeText("QUAL FOI A PRIMEIRA LINGUAGEM DE PROGRAMAÇÃO\n", 20);
typeText("a) C\n", 20);
typeText("b) FORTRAN\n", 20);
typeText("c) BASIC\n", 20);
typeText("d) Código Morse\n", 20);
break;
}
scanf("%c", &resposta5);
switch(resposta5){
case 'a':
typeText("NÃO, ESTA NÃO É A RESPOSTA\n""Pressione 1 para continuar\n", 20);
break;
case 'b':
typeText("ESTÁ CORRETA A RESPOSTA!\n""Pressione 1 para continuar\n", 20);
break;
case 'c':
typeText("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n", 20);
break;
case 'd':
typeText("NÃO, ESTA NÃO É A RESPOSTA CORRETA\n""Pressione 1 para continuar\n", 20);
break;
}

//Resultado das perguntas 

if(resposta1 == 'd'){
resposta1 = 1;
}
else{
resposta1 = 0;
}
if(resposta2 == 'a'){
resposta2 = 1;
}
else{
resposta2 = 0;
}
if(resposta3 == 'c'){
resposta3 = 1;
}
else{
resposta3 = 0;
}
if(resposta4 == 'd'){
resposta4 = 1;
}
else{
resposta4 = 0;
}
if(resposta5 == 'b'){
resposta5 = 1;
}
else{
resposta5 = 0;
}

int respostaend = resposta1+resposta2+resposta3+resposta4+resposta5;

typeText(("Você acertou %d das perguntas\n", respostaend), 20);
}

//Seleção de jogo "Cobra na Caixa"

else if(tecla == 2){
typeText("Se você deseja inicializar o jogo COBRA NA CAIXA, pressione 2\n", 20);

int jogo2, jogoinicio2;

scanf("%d", &jogoinicio2);
switch(jogoinicio2){
case 2:
#ifdef _WIN32
system("cls");//executar código em Windows
#else
system("clear");//executar código em Unix(Linux/MacOS/FreeBSD)
#endif  
typeText("O jogo COBRA NA CAIXA é um jogo de escolhas...\n", 20);
typeText("Você e mais outro jogador estão presos em uma tumba egípicia antiga, e é seu objetivo fugir dessa\n", 20);
typeText("Cuidado... Pois nunca se sabe qual é o caminho certo\n", 20);
printf("\n");
printf("\n");
typeText("Pressione 2 para seguir para a seleção de personagens\n", 20);
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
typeText("SELECIONE SEU PERSONAGEM! Jogador 1\n", 20);
typeText("1-) Fulano\n", 20);
typeText("2-) Fulana\n", 20);
typeText("3-) Ciclano\n", 20);
typeText("4-) Ciclana\n", 20);
typeText("5-) Beltrano\n", 20);
typeText("6-) Beltrana\n", 20);
typeText("7-) Nome\n", 20);

//Player 1 select

scanf("%d", &pc1select);
switch(pc1select){
case 1:
pc1select == 1;
if(pc1select == 1){
typeText("Jogador 1 escolheu Fulano\n", 20);
}
break;
case 2:
pc1select == 2;
if(pc1select == 2){
typeText("Jogador 1 escolheu Fulana\n", 20);
}
break;
case 3:
pc1select == 3;
if(pc1select == 3){
typeText("Jogador 1 escolheu Ciclano\n", 20);
}
break;
case 4:
pc1select == 4;
if(pc1select == 4){
typeText("Jogador 1 escolheu Ciclan\n", 20);
}
break;
case 5:
pc1select == 5;
if(pc1select == 5){
typeText("Jogador 1 escolheu Beltrano\n", 20);    
}
break;
case 6:
pc1select == 6;
if(pc1select == 6){
typeText("Jogador 1 escolheu Beltrana\n", 20);
}
break;
case 7:
pc1select == 7;
if(pc1select == 7){
typeText("Jogador 1 escolheu Nome\n", 20);
}
break;
}

//Player 2 select

typeText("SELECIONE SEU PERSONAGEM! Jogador 2\n", 20);

scanf("%d", &pc2select);
switch(pc2select){
case 1:
pc2select == 1;
if(pc2select == 1){
typeText("Jogador 2 escolheu Fulano\n", 20);
}
break;
case 2:
pc2select == 2;
if(pc2select == 2){
typeText("Jogador 2 escolheu Fulana\n", 20);
}
break;
case 3:
pc2select == 3;
if(pc2select == 3){
typeText("Jogador 2 escolheu Ciclano\n", 20);
}
break;
case 4:
pc2select == 4;
if(pc2select == 4){
typeText("Jogador 2 escolheu Ciclana\n", 20);
}
break;
case 5:
pc2select == 5;
if(pc2select == 5){
typeText("Jogador 2 escolheu Beltrano\n", 20);    
}
break;
case 6:
pc2select == 6;
if(pc2select == 6){
typeText("Jogador 2 escolheu Beltrana\n", 20);
}
break;
case 7:
pc2select == 7;
if(pc2select == 7){
typeText("Jogador 2 escolheu Nome\n", 20);
}
break;
}
}

printf("\n");
printf("\n");
printf("\n");
typeText("Pressione 2 para continuar com o jogo\n", 20);
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

//Input pc1 e pc2

int pcchoice = 0;
int pcchoice2 = 0;
int turn = 8;

srand(time(NULL));
int cobravalue = rand() % 5 + 1; 
int cobra = cobravalue;

//Caixas 

fflush(stdin);

typeText("Escolha uma caixa de 1 a 5\n", 20);
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
    printf("Você encontrou uma cobra!\n", 20);
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

}


    return 0;

}



	

	
