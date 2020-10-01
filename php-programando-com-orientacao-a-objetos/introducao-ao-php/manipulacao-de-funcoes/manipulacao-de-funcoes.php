<?php

/*
  Manipulação de Funções
    Uma função é um pedaço de código com um objetivo especifico, encapsulado sob uma estrutura unica
      que recebe um conjunto de parâmetros e retorna um dado.
    Uma função é declarada uma única vez, mas pode ser utilizada diverdas vezes. 
      É uma das estruturas mais básicas para prover reusabilidade.

    Criação
      Para declarar uma função em PHP, utiliza-se o operador function seguido do nome que desejamos definir,
        sem espaços em branco e iniciando obrigatóriamente com um aletra.
          Na mesma linha digitamos a lista de argumentos (parâmetros) que a função irá receber, separados por virgula.  
            Em seguida, encapsulado por chaves {}, vem o código da função.
              No final, utiliza-se a cláusula return para retornar o resultado da função (Integer, string, array, object etc...).

    Passagem de Parâmetros
      Existem dois tipos de passagem de parâmetros: por valor e por referência. Por padrão os valores são passados "por valor" para as funções.
        Assim o parâmetro que a função recebe é tratado como variável local dentro do contexto da função,
          não alterando o seu valor externo. Os objetos são uma excesão, pois são tratados por referência na passagem de parâmetros.

          * by reference (&variavel)
          * by value ($variavel)
          * default value ($variavel = 40);

    Pegando numero de argumentos de uma função
      * func_get_args()
          obtem o nome dos argumwntos

      * func_num_args()
          obtem a quantidade de argumentos       
*/

/*
  Funções Anônimas
    Funções anônimas, ou lambda functions, são funções que podem ser definidas em qualquer instante,
      e diferentemente das funções tradicionais, não tem um nome definido.
        Funções anônimas podem ficar atreladas á uma variável. Neste caso a variável é utilizada para fazer
          a chamada imediata da função, bem como passá-la como parâmetro de algumas função.
*/
function calculaImc($peso, $altura)
{
  $args = func_get_args();
  $numArgs = func_num_args();
  //return $peso / ($altura * $altura);
  return var_dump(($numArgs));
}

echo calculaImc(84, 1.90);

// função anônima

$ola = function ($nome) {
  return $nome;
};

echo $ola("Matheus");