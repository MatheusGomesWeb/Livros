<?php

/*
  Estruturas de Controle
  
    if() - O IF é uma estrutura de controle que introduz um desvio condicional, ou seja, um desvio na execução natural do programa.
      Caso a condição dada pela expressão seja satisfeita, então serão executadas as instruções do bloco de comandos.

      if(expressao) {
        // comandos se a expressão é verdadeira
      }else {
       // comandos se a expressão é falsa
      }

    while() - O WHILE é uma estrutura de controle similar ao IF. Da mesma forma, contém condição para executar um bloco de comandos.
      A diferença primordial é que o WHILE estabelece um laço de repetição, ou seja, o bloco de comandos será executado
        repetidamente enquanto a condição dada pela expressão for verdadeira.
        
      while(expressao) {
        // comandos
      }

    for() - o FOR é uma estrutura de controle que estabelece um laço baseado em um contador, é muito similar ao WHILE.
      O FOR é controlado por um bloco de três comandos que estabelecem uma contagem, ou seja, 
        o bloco de comandos será executado um certo número de vezes.  

      for($i = 0; $i < 10; $i++) {
        print $i;
      }  

    switch() - O comandos SWITCH é uma estrutura que simula uma bateria de testes sobre yna variável.
      É similar a uma série de comandos IF sobre a mesma expressão.
        frequentemente é necessário comparar a mesma variável com valores diferentes e executar uma ação específica em cada um desses casos.

      switch($a) {
        case 1:
          echo "1";
        break;
        default:
        echo "numero inválido";
      }

      foreach() - O foreach é um laço de repetição para iteraçôes com arrays ou matrizes. É um simplificado que decompôe 
        um vetor ou uma matriz em cada um de seus elementos por meio de sua cláusula AS.

        foreach($array as $valor) {
          echo $valor;
        }

      break e continue
        o BREAK é utilizado em laços de repetição (while/for) e para a execução do laço  quando decladado
        o CONTINUE é utilizado em laços de repetição e ignora a exeção até o fechamento de }.
*/