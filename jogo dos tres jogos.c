#include <stdio.h>
#include <stdlib.h>

int main()
{
//FUNCIONALIDADES BÁSICAS DO MENU
int tecla;

    // Texto placeholder (final será em ASCII)
printf("Joguinho Dos Três Jogos\n");
printf("Pressione 5\n");
scanf("%d", &tecla);
switch(tecla)
{
case 5 :
printf("Pressione as teclas para jogar os jogos\n");
printf("1 - Perguntas e Respostas\n");
printf("2 - Cobra na Caixa!\n");
printf("3 - Gousma of War\n");
printf("4 - Sair\n");
break;
}
//SELEÇÃO DE JOGO "Perguntas e Respostas"

int resposta1;
int resposta2;
int resposta3;
int resposta4;
int resposta5;
int jogo, jogoinicio;
scanf("%d", &jogo);
switch(jogo){
case 1:
#ifdef _WIN32
system("cls");//executar código em Windows
#else
system("clear");//executar código em Unix(Linux/MacOS)
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
printf("QUAL FOI A PRIMEIRA LINGUAGE DE PROGRAMAÇÃO\n");
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

printf("Fim do jogo PERGUNTAS E RESPOSTAS");
printf("Você acertpu x perguntas");



    return 0;
}



	
