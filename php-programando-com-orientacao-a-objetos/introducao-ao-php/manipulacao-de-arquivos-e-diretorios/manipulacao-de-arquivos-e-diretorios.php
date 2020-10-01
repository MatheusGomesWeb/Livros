<?php

/*
  Manipulação de Arquivos e Diretórios
    
    * fopen
        Abre um arquivo e retorna um identificador. Aceita arquivos no formato "http://....
    * feof
        testa se determinado identificador de arquivo (criado pela função fopen()) está no fim de arquivo (End of File)
    * fclose
          Fecha o arquivo aberto apontado pela fopen(). Retorna TRUE em caso de sucesso ou FALSE em caso de falha.
    * fgets
        Lê uma linha de um arquivo aberto pela fopen() no formato de string, Recebe opcionalmente um tamanho máximo a ser lido.
          Se ocorrer um erro, retorna FALSE.  
    * fwrite
          Grava uma string no arquivo apontado pelo identificador (handle) de arquivo.
            Se o argumento comprimento (length) é informado, a gravação será limitada á esse tamanho.
              Retorna o número de bytes gravados ou FALSE em caso de erro.
    * file_put_contents
        Grava uma string (data) em um arquivo (filename). Retorna a quantidade de bytes gravados.
    * file_get_contents
          Lê o conteudo de um arquivo e retorna o conteúdo em forma de string
    * file
       Lê um arquivo e retorna um array com seu conteúdo, de modo que cada posição do array
        represente uma linha do arquivo. O nome do arquivo pode conter o protocolo como no caso
          http://www.server........ Assim, o arquivo remoto será lido.
    * copy  
          Copia um arquivo para outro local/nome. Retorna TRUE caso tenha sucesso e FALSE em caso de falhas.
    * rename
          Altera a nomenclatura de um arquivo ou diretório.
    * unlink
          Apaga um arquivo passado como parâmetro. Retorna TRUE em caso de sucesso e FALSE em caso de falhas.
    * file_exists
          verifica a existência de um arquivo ou de um diretório
    * is_file
          verifica se a localização dada corresponde ou não a um arquivo.
    * mkdir 
          Cria um diretório informando, entre outras opções, a sua permissão de acesso.
    * rmdir
          Apaga um direorio
    * scandir
          Lê o conteúdo de um diretório (arquivos e diretórios), retornando-o como um array.

*/