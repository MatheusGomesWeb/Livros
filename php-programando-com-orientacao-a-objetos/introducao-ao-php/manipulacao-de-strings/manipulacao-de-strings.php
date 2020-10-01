<?php

/*
  Manipulação de Strings
    Uma strings é uma cadeia de caracteres alfanuméricos. Para declarar uma string podemos utilizar aspas simples '' ou aspas duplas "";
      
    A diferença é que todo conteúdo dentro de aspas duplas é avaliado pelo PHP.
      Assim, se a string contém uma variável, essa variável será traduzida pelo seu valor.  

      * aspas duplas: mostra o conteudo da variável
      * asplas simpels: mostra a declaração da variável.

    Concatenação
      Para concatenar strings, pode-se utilizar o operador "." ou colocar múltiplas variáveis dentro de strings dupals "". visto que seu conteúdo é interpretado.
        O php realiza automaticamente a conversão entre tipos (string, number etc...)

    Caracteres de escape
      Dentro de aspas duplas "" podemos utilizar caracteres de escape (\). 
        controles especiais interpretados diferentemente pelo PHP. Veja a seguir os mais utilizados.

          \n - Nova linha (proporciona uma quebra de linha);
          \r - Retorno de carro. ( quebra a linha)
          \t - Tabulação
          \\ - Barra invertida "\\" (o memo que '\')
          \" - Aspas duplas
          \$ - Simbolo de $;

     Funções para manipulação de strings
        As funções a seguir formam um grupo cuja característica comum é a manipulação de cadeias de caracteres (strings), 
          como conversões, transformações etc...

          * strtoupper - Retorna a string com todos os caracteres alfabéticos convertidos para letras maiusculas.
          * strtolower - Retorna a string com todos os caracteres alfabéticos convertidos para letras minúsculas.
          * substr - Retorna uma parte de uam string. O primeiro parâmetro representa a string original, 
                        o segundo representa o inicio do corte, e o terceiro, o tamanho do corte.
                          Se o comprimento (length) for negativo, conta n caracteres antes do final.
          * strpad - Preenche uma string com uma outra string, dentro de um tamanho específico, podendo
                        preencher com caracteres á esquerda, direita ou centralizado.
          * str_repeat - Repete uma string certa quantidade de vezes.
          * strlen - Retorna o comprimento de uma string.
          * str_replace - Subsitui uma string (primeiro parâmetro) por uma (segundo parâmetro) dentro de uma dado
                            contexto (terceiro parâmetro). 

*/

$variavel = 'matheus';
$var2 = "mat\rheus";

echo "nome é $var2";
//echo '$var2';