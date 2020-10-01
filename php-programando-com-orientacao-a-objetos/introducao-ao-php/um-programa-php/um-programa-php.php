<?php

// Estrutura do código fonte

/*
  Normalmente um programa PHP tem a extensão (.php). 
  Entretanto não é incomum encontrarmos extensôes (.class.php) ou (.inc.php) em projetos mais antigos, 
  para representar simplesmente arquivos a serem incluidos.

  O Código de um programa escrito em PHP deve iniciar com <?php

  Obs: A finalização da maioria dos comandos se dá por ponto e virgula (;)
 */

/*
 phpinfo();
  Apresenta a tabela com sa configurações atuais do PHP, como níveus de erro, extensões instaladas, entre outros.
 */

// phpinfo();

/*
  O arquivo de configuração do PHP é o php.ini, sua localização varia conforme a instalação utilizada. 
  Mas a localização do php.ini pode ser descoberta pela função phpinfo();

  No Exemplo a seguir definimos: 
  
  timezone: usado para calculo de tempo, 
  display_errors (para que todos os erros que ocorrem sejam exibidos)
  log_erros (para que os erros sejam registrados em um arquivo)
  error_log (definimos o arquivo de registro de erros)
  error_reporting (quais níveis de erro serão mostrados)

  Essas configurações são voltadas mais para um ambiente de desenvolvimento. 
  Em Produção geralmente desligamos o display_errors.

  date.timezone = America/São_paulo;
  display_errors = On
  log_errors = On
  error_log = /tmp/php_errors.log
  error_reporting = E_ALL
*/

/*

  Comentários

  // - comenta uma única linha
  \/* *\/ - comenta varias linhas
*/