# Jogo_dos_Tres_Jogos
Repositório de "Jogo Dos Três Jogos", um pequeno jogo feito como trabalho de programação.

O "Jogo Dos Três Jogos" se trata de um trabalho de programação feito durante o primeiro semestre de engenhara de computação no CESUPA, este dirigido pelo professor Pedro Girotto.

Este readme contém um breve resumo do código escrito, agradecimentos e algumas lamentações sobre o projeto como um todo.

Agradecimentos: 
-CESUPA: Por me dar a oportunidade de ingressar neste mundo igualmente fascinante e agonizante da computação.
-Professor Pedro Girroto: Por nos designar este projeto que foi uma excelente experiência de aprendizado.
-Artur Miguel: Mesmo que fora do trabalho, tive boas discussões sobre códigos para executar nossos projetos.
-"Gepeto" (Chat GPT): Ser excelente em tirar dúvidas.
-Microsoft Visual Studio Code: Por ser um excelente editor de código.
-Linux Mint 22: Por ser um excelente ambiente para desenvolvimento no geral.

---------------------------------------------------------------------------------------------------------

O "Jogo Dos Três Jogos" é um programa C que executa (deveria) um dos três jogos selecionados (por dificuldades técnicas, apenas dois desses funcionam). Os jogos inclusos são "PERGUNTAS E RESPOSTAS", "COBRA NA CAIXA" e (quando implementado) "GOUSMA OF WAR".

Cada um destes jogos funciona independente do outro através de um laço de condição, em que o input no menu principal determina qual jogo será escolhido.

Ao final de cada jogo, o programa é finalizado e pode ser executado novamente (a intenção inicial era deixa-los em um estado de loop, mas faltou-me conhecimento técnico).

Durante o projeto, dou destaque a ferramentas como o Chat GPT, por ter sido uma forma rápida e eficiente de tirar dúvidas e verificar sintaxes, sobretudo, auxiliou com a natureza multiplataforma do projeto (já que o código precisa rodar em sistemas Windows e Unix). O livro "Linguagem C - Completa E Descomplicada" foi também um imenso auxílio para o aprendizado do comportamento da linguagem, além de oferecer boa consulta.

Sobretudo, doi destaque à meus monitores, meus veterenos, meu professor e meus colegas de sala por terem oferecido ajuda, sugestões e soluções para meus problemas. Sem esse compartilhamento de ideias, não vejo este trabalho existindo.

---------------------------------------------------------------------------------------------------------
1- Antes do menu

Foram utilizados <stdio.h> para input e output, <stdlib.h> para funções envolvendo memória no geral, <time.h> para gerar valores randômicos no segundo jogo, <stdbool.h> foi implementado com a intenção de dar valores binários para algumas variáeis. A função seguinte das bibliotecas serve para exibir o texto do jogo em um tom meio amarelado, além de dar-me controle de como o texto é mostrado (através de void typeText).

2- Menu

O menu é bem simples, além de mostrar um texto rudimentar com o nome do jogo, ele exibe as opções do usuário. Nele, a variável "tecla" é declarada e lida para entrar nos jogos ou finalizar o programa diretamente.

3- PERGUNTAS E RESPOSTAS

Neste jogo, o usuário é inquirido com 5 perguntas. As perguntas funcionam através do uso de "switch case", o propósito é ler o input e verificar se ele atinge a condição apropriada para a pergunta certa ser exibida, isso é, se (exemplo) o carácter "a" é colocado pelo usuário. Ao fim do jogo, as variáveis das respostas são dadas um valor de 0, se as respostas estiverem corretas elas tomam o valor 1, posteriormente, as respostas serão somadas, o resultado da soma é a quantidade de respostas certas.

Durante o código, é possível observar algumas diretivas, isso é as "if def", o propósito delas é mandar um comando ao terminal para esse ser limpo. O motivo de "ifdef" e "endif" é explicado pela característica multiplataforma do código, já que era necessário executa-lo em sistemas Unix e Windows. Esta diretiva é observada em todas as outras instâncias em que o terminal precisou ser limpo.

4- COBRA NA CAIXA

Neste jogo, o jogador 1 e 2 competem para achar a saída de uma tumba egípicia, o jogador que encontrar uma cobra perderá.

Antes do jogo começar, um seletor de personagem é utilizado. Para seu funcionamento, os 7 personagens possuem seus valores salvos de 1 a 7, o propósito é que, quando a variável de escolha do personagem ser lida, o valor desse input erá comparado com o valor dos personagens. Ou seja, se escrito "1", o valor abrirá o laço de seleção de mesmo valor, então será impresso o personagem escolhido.


Ao iniciar o jogo, um valor de 1 a 5 será gerado randomicamente para atribuílo a cobra, no jogo, as caixas em si não existem, elas se tratam apenas de uma arte ASCII rudimentar e de um texto impresso, na realidade, o valor que é lido e comparado é o da cobra. Ou seja, para dar a ilusão da existência das caixas, as variáveis de escolha do jogador são igualada a valores de 1 a 5 através do "switch case", ao assumir determinado valor, o laço de seleção com o mesmo valor será executado, o valor do input será comparado com um número, o valor do número dirá para o código imprimir o valor do input para a caixa "printf(você abriu a caixa %d, pcchoice), se este valor for igual ao da cobra, o jogador perde.

Para impedir que o jogador entre em uma situação de não perder, eternamente, damos um valor para a variável turn com o propósito de somente executar o jogo se turn tiver este valor, quando a cobra é encontrada, turn adquiri outro valor e o jogo encerra.

5- GOUSMA OF WAR

Este jogo vem no próximo update.