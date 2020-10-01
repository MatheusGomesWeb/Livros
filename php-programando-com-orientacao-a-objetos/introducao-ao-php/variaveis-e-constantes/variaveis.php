<?php

/*
  Váriaveis:
    Váriaveis são identificadores utilizados para representar valores mutáveis e voláteis, 
    que só existem durante a execução do programa.
    Elas são armazenadas na memória RAM e seu conteúdo é destruido após a execução do programa.
    Para crar uma variável em PHP, precisamos atribuir-lhe um nome de identificação,
    sempre precedido pelo caractere cifrão ($).

  Algumas Dicas:
    Nunca inicie a nomemclatura de variáveis com números.
    Nunca utilize espaços em branco no meio do identificador da variável.
    Nunca utilize caracteres especiais (! @ # $ % {} ()) na nomemclatura das variaveis.
    Evite criar variaveis com mais de 15 caracteres em virtude da clareza do código fonte.
    Nomes de variáveis devem ser significativas e transmitir a ideia de seu 
      conteúdo dentro do contexto no qual a variável está inserida.
    Utilize preferencialmente palavras em letras minúsculas separadas por "_"(underline) ou 
      somente as primeiras letras em maiúsculas (camelCase) quando da ocorrência de mais palavras.
  
  Exemplo:
    $codigo_cliente;
    $codigoCliente;
*/

/* 
  O PHP é Case Sensitive: Diferencia letras maiusculas e minusculas.
*/

// declarando variáveis
$nome = "Matheus";
$sobrenome = "Gomes";

// mostrando o resultado
echo $nome, $sobrenome;