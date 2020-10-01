<?php
/*
  Tipos de Dados:
    
    Boolean:
      Um booleano expressa um valor lógico que pode ser verdadeiro(true, 1) ou falso(false, 0)

      São considerados falsos em comparações Booleanas
        - Inteiro 0
        - Ponto flutuante 0.0
        - Uma string vazia "" ou "0"
        - Um array vazio
        - Um objeto sem elementos
        - Tipo NULL    
*/

// declarando um BOOLEAN
$exibir_nome = true;

// teste de $exibir_nome é true
if ($exibir_nome) {
  echo $exibir_nome;
}

/*
    Number
      Números podem ser especificados em:
          - decimal (base 10)
          - hexadecimal (base 16)
          - octal (base 8)
*/

// declarando um Number
$a = 1234; // número decimal
$a = -123; // número negativo
$a = 0123; // número octal 
$a = 0x1A; // número hexadecimal
$a = 1.234; // ponto flutuante (float)
$a = 4e23; // notação científica

/*
    String
      Uma String é uma cadeira de caracteres alfanuméricos.
      Para declará-las, podemos utilizar aspas simples ('') ou aspas duplas ("").    
*/

// declarando uma String
$variavel = "Isso é um teste";
$variavel = 'Isso é um teste';

/*
    Array
        Array é uma lista de valores armazenados na memória que podem ser de tipos diferentes (number, string, object)
        e podem ser acessados a qualquer momento, pois cada valor é relacionado a uma chave.
        Um array também pode crescer dinâmicamente com a adição de novos itens.
*/

// declarando um Array
$carros = array('Palio', 'Corsa', 'Gol');
echo $carros[1];

/*
    Object
        Um objeto é uma entidade com um determinal comportamento definido por seus métodos(ações) e propriedades(dados).
        Para criar um objeto deve-se utilizar o operador new.
*/

// criando um objeto stdClass (objeto de criação de classe padrão PHP)
$carro = new stdClass;
$carro->modelo = 'Palio';
$carro->ano = 2002;
$carro->cor = 'Azul';

// imprime os valores
print_r($carro);
print($carro->modelo);
print($carro->ano);
print($carro->cor);

/*
      Recurso  (Resource)
        Resource é uma variável que mantém uma referência de recurso externo.
        Recursos são utilizados por funçôes.
*/

/*
      misto (mixed)
        O tipo misto (mixed) é uma identificação que representa diversos (não necessariamente todos) os tipos de dados
        que podem ser usados em um mesmo parâmetro.
        Um parâmetro do tipo mixed, indica que a função aceita diversos tipos de dados como parâmetro.

        Exemplo:
          string gettype (mixed var)
          
          // possiveis resultados
            "boolean", "integer", "double", "string", "array", "object", "resource", "NULL"
*/

/* 
      callback
        Algums funções (call_user_func()) aceitam parâmetros que significa uma função a ser executada.
        Esse tipo de dado é chamado (callback).
        Um parâmetro (callback) pode ser o nome de uma função representada por uma string ou método de um objeto 
          a ser executado representado por um array.
*/

/*
      NULL
        A utilização do valor especial NULL significa que a variável não tem valor.
        NULL é o único valor possível do tipo NULL.
*/