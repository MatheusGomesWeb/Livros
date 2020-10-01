<?php

/*
  Operadores Aritméticos
    Operadores aritméticos são utilizados para realização de cãlculos matemáticos

      ( + ) - Adição
      ( - ) - Subtração
      ( * ) - Multiplicação
      ( / ) - Divisão
      ( % ) - Modulo (Resto)

      PRECEDENCIA DOS OPERDORES
      
        Divisão -> Multiplicação -> adição -> subtração
*/

$a = 2;
$b = 4;
echo $a + $b . ' '; // 6
echo $a * $b . ' '; // 8
echo $a / $b . ' '; // 0.5
echo $a % $b . ' '; // 2 
echo $b * $a + $b / $a;