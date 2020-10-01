<?php

/*
  Variáveis Globais
    Todas as variáveis declaradas dentro do escopo de uma função são locais.
      Para acessar uma variável externa ao context de uma função sem passá-la como parâmetro, é necessário declará-la como global.
        Uma variável global é acessada a partir de qualquer ponto da aplicação. 

    Obs. A utilização de variáveis globais não é considerada uma boa prática de programação, pois uma variável
      global pode ser alterada a partir de qualquer parte da aplicação.
        Dessa forma valores inconsistentes podem ser armazenados em uma variável global, podendo
          resultar em um comportamento inesperado da aplicação.
*/

$total = 2;

function variavelGlobal()
{
  global $total;

  $km = $total + 1;

  return $km;
}

echo variavelGlobal();