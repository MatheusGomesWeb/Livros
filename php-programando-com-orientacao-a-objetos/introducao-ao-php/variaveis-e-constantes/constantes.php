<?php
/*
  CONSTANTES:
    Uma constante é um valor que não sofre modificações durante a execução do programa.
    Ela é representada por um identificador, assim como as variáveis, com a exceção de que só pode
      conter valores escalares (boolean, int, float, string) ou arrays.
    
    As regras de nomenclatura de constantes seguem as mesmas regras das variáveis, com a exceção de que as constantes
      não são precedias pelo sinal de cifrão ($) e geralmente utilizam nomes em letras MAIÚSCULAS.

    Para declarar uma CONSTANTES, utiliza a palavra (define('NOME_CONST', value))
*/

// Exemplo de CONSTANTE
define('MAXIMO_CLIENTES', 10);

echo MAXIMO_CLIENTES;