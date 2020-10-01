<?php

/*
  Variáveis Estáticas
    Dentro do escopo de uma função, podemos armazenar variáveis de forma estática.
      Assim elas mantêm o valor que lhes foi atribuido na última execução.
        Declaramos uma variável estática com o operador static.
*/

function percorre($km)
{
  static $total;

  $total += $km;

  return $total;
}

echo percorre(100);
echo percorre(200);
echo percorre(50);