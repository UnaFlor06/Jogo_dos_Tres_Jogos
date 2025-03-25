#include <stdio.h>
#include <stdlib.h>

int main()
{
//FUNCIONALIDADES BÁSICAS DO MENU
    //Obeservações sobre o menu:
        //A princípio, o menu utilizava "switch case" para suas funcionalidades.
        //Ainda é possível ver alguns resquícios no código.
        //Por isso o usuário precisa apertar a tecla de seleção mais de uma vez.
        //A intenção é mudar isso posteriormente, mas, pelo momento, deixa assim porque o menu está funcionando.
int tecla;

    // Texto placeholder (final será em ASCII)
printf("Joguinho Dos Três Jogos\n");
printf("Pressione as teclas para jogar os jogos\n");
printf("1 - Perguntas e Respostas\n");
printf("2 - Cobra na Caixa!\n");
printf("3 - Gousma of War\n");
printf("4 - Sair\n");
scanf("%d", &tecla);


//SELEÇÃO DE JOGO "Perguntas e Respostas"

if(tecla == 1){
    printf("Se você deseja incializar o jogo PERGUNTAS E RESPOSTAS, pressione 1");

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
printf("Você acertou x perguntas\n");

}
//Seleção de jogo "Cobra na Caixa"

else if(tecla == 2){
printf("Se você deseja inicializar o jogo COBRA NA CAIXA, pressione 2");

int jogo2, jogoinicio2;

scanf("%d", &jogo2);
switch(jogo2){
case 2:
#ifdef _WIN32
system("cls");//executar código em Windows
#else
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
int Fulano, Fulana, Ciclano, Ciclana, Beltrano, Beltrana, Nome;

scanf("%d", &pcselect);
switch(pcselect){
case 2:
#ifdef _WIN32
system("cls");//executar código em Windows
#else
system("clear");//executar código em Unix(Linux/MacOS/FreeBSD)
#endif
printf("SELECIONE SEU PERSONAGEM\n");
printf("1-) Fulano\n");
printf("2-) Ciclano\n");
printf("3-) Beltrano\n");
printf("4-) Ciclana\n");
printf("5-) Beltrana\n");
printf("6-) Fulana\n");
printf("7-) Nome\n");

scanf("%d", &pc1select);
switch(pc1select){
case 1:
pc1select == Fulano;
if(pc1select == Fulano){
printf("Jogador 1 escolheu Fulano");
}
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
}
scanf("%d", &pc2select);
switch(pc2select){
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
}
}
}




    return 0;
}



	

	
