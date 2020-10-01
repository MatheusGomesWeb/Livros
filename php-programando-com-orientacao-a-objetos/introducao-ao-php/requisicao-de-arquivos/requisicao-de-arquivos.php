<?php

/*
  Requisição de Arquivos
    Em linguagens de script como PHP, frequentemente precisamos incluir dentro de nossos programas outros 
      arquivos com definições de funções, constantes, configurações ou mesmo carregar um arquivo contendo a definição de uma classe.
        Para atingir esse objetivo no PHP, podemos fazer uso de um dos seguintes comandos:

    -------------------------------------------------------------------------------------------------------------------------

      - include "arquivo";
          A instrução include(), inclui e avalia o arquivo informado. Seu código (variáveis, objetos e arrays)
            entra no escopo do programa, tornando-se disponível a partir da linha em que a inclusão ocorre.

             * Se o arquivo não existir, produzirá uma mensagem de advertência (warning).
             * poderá incluir o mesmo arquivo varias vezes.
     
    -------------------------------------------------------------------------------------------------------------------------

      - include_once "arquivo";
          funciona da mesma maneira que o comando include, a não ser que o arquivo informado já tenha sido incluido.

            * Não é permitido incluir o mesmo arquivo varias vezes.
     
    -------------------------------------------------------------------------------------------------------------------------
      
      - require "arquivo";
          funciona da mesma maneira que o comando include, a não ser que o arquivo informado já tenha sido incluído.
            neste caso, a operação não é refeita.

            * O arquivo é incluido apenas uma vez
            * Produz um ERRO FATAL caso o arquivo não exista.
  
      -------------------------------------------------------------------------------------------------------------------------
      
      - require_once "arquivo";
          Funciona da mesma maneira que o comando require, a não ser que o arquivo informado já tenha sido incluído.
   
*/