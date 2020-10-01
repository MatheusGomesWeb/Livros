<?php

/*
  Operadora de Pré / Pós incremento - decremento
    São utilizados para somar ou subtrair antes e depois da chamada de uma variavel

    ++$var - Pré incremento, soma +1 e mostra o valor somado
    $var++ - Pós incremento, retorna o valor atual e na proxima chamada retorna +1 
    --$var - Pré decremento, soma -1 e mostra o valor somado
    $var-- - Pós decremento, retorna o valor atual e na proxima chamada retorna -1 
*/

// exemplo
$var = 100;
echo ++$var; // 101
echo $var++; // 101
echo $var--; // 102
echo --$var; // 100