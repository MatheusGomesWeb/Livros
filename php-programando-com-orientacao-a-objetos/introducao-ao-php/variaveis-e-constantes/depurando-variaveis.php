<?php

/*
var_dump e print_r:

São funçõea que imprimem o conteudo da variável de forma detalhada, 
muito comum para DEBUG

var_dump: 
  Imprime a variavel com seus respectivos 
  atributos, valores e tipos de dados.

print_r: 
  Parecido com o var_dump, 
  porém imprime de uma forma mais legível e NÃO MOSTRA OS TIPOS DE TODOS.
*/

// exemplo de var_dump
$frutas = ["Banana", "Maça"];
var_dump($frutas);

// exemplo de print_r
print_r($frutas);