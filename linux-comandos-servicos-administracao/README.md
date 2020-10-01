# Linux: Comandos, Serviços e Administração.

**Sumário**

* [Oque é Linux?](#oque-é-linux?)

  + [Estrutura de Diretórios do Sistema](#estrutura-de-diretórios-do-sistema)
    - [Diretórios](#diretórios)
      - [Diretórios Opcionais](#diretórios-opcionais)
      - [Os Diretórios /proc e /sys](#os-diretórios-proc-e-sys)

* [Conhecendo o Shell](#conhecendo-o-shell)

  + [Oque é Shell?](#oque-é-shell-?)
    - [Tela do Shell](#tela-do-shell)
    - [Tela do Shell fora do ambiente gráfico - TTY (TeleTYpe)](#tela-do-shell)

  + [Comandos Principais](#comandos-principais)
    - [Comandos do Usuário](#comandos-de-usuário)
    - [Comandos de Sistema](#comandos-de-sistema)
    - [Comandos de Processos](#processos)
    - [Comandos de Diretórios](#comandos-de-diretórios)

  + [Manipulando Arquivos](#manipulando-arquivos)
    - [vim](#manipulando-arquivos)
    - [nano](#manipulando-arquivos)
    - [Compactação e descompactação de arquivos](#compactação-e-descompactação-de-arquivos)
      - [tar](#compactação-e-descompactação-de-arquivos)
      - [GZIP/GUNZIP](#compactação-e-descompactação-de-arquivos)
      - [ZIP/UNZIP](#compactação-e-descompactação-de-arquivos)

* [Administração de Usuários](#administração-de-usuários)
  + [Tipos de Usuários](#tipos-de-usuários)
  + [Criação de Usuários](#criação-de-usuários)
  + [Criação de Grupos](#criação-de-grupos)
  + [Adicionar Usuário ao Grupos](#adicionar-usuário-ao-grupo)
  + [Alteração de Grupos](#alterar-grupo)
  + [Permissões](#permissões)

  
---

# Oque é Linux?

Linux é o kernel, o componente central responsável por conectar os programas ao Hardware, apenas com o Kernel não teriamos grandes opções. Precisamos de programas, configurações, interface gráfica e drivers para tirar um bom proveito real do sistema operacional.

Distribuições Linux, são um aglomerados de programas e configurações especificas aguardando para serem usados pelo usuário, as distribuições linux mais famosas são: **Debian, Ubuntu, Red Hat, Fedora** etc...

## Estrutura de Diretórios do Sistema

Cada diretório do sistema possui arquivos que são mantidos seguindo regras definidas pela **FHS (Filesystem Hierarchy Standard)**. 

No **Ubuntu** a estrutura de diretórios segue o padrão **LSB (Linux Standard Base)**, que por sua vez segue a especificação do **FHS**. 

Esses padrões são importantes pois ajudam a manter a compatibilidade entre as variações de distribuições Linux.

O **FHS** determina que obrigatóriamente uma distribuição Linux deve conter **14 diretórios**.

___

### Diretórios

  + **/bin**: Armazena **arquivos executáveis binários**, que são os comandos base para a execução do sistema, por exemplo o **ls** e o **cd**. Esse diretório é público, ou seja, qualquer usuário pode usar os executáveis que estão lá.

	---

  + **/boot**: Contém arquivos de **inicialização do sistema**, dentre os quais está o gerenciador de boot do sistema. Ele é um aplicativo que **carrega o sistema operacional** durante a inicialização.

	---

  + **/dev**: Mantém o caminho dos **dispositivos instalados no sistema**. Todo o hardware reconhecido pelo sistema é representado por um arquivo nesse diretório, por exemplo, disco rígido e placa de vídeo.

	---

  + **/etc**: **Arquivos de configuração do sistema**, scripts de inicialização, configurações padrão para usuários e arquivos de configuração de programas que são instalados.

	---

  + **/lib**: **Bibliotecas e módulos do kernel** que são essenciais para o funcionamento do sistema. As bibliotecas são funções compartilhadas que podem ser usadas por vários programas.

	---

  + **/media**: **Diretório responsável por manter os pontos de montagem**, ou seja, quando inserimos um **pen drive** é neste diretório que ele ficará disponível temporariamente enquanto usamos.

	---

  + **/mnt**: Utilizado para **montagem temporária de sistemas de arquivos**, isto é, um **hd** ou **pen drive**. Este diretório pode ser **usado da mesma forma que o /media**.

	---

  + **/opt**: Onde normalmente **instalamos programas que não fazem parte oficialmente da distribuição**. Por exemplo, o **google chrome**.

	---

  + **sbin**: **Comandos utilizados para inicialização, reparação e restauração do sistema**. É um diretório de comandos essenciais, mas com a diferença de que apenas o usuário **ROOT** pode usar.

	---

  + **/srv**: Mantém dados de **serviços disponíveis pelo sistema** e pode ser acessado de forma geral (por todos os usuários), por exemplo, **web server**.

	---

  + **/tmp**: Ficam armazenados **arquivos temporários**, informações que devem ser **mantidas até o fim de uma operação**, como um download em andamento ou arquivos de cache de vídeos do Youtube.

	---

  + **/usr**: São **mantidos programas** que não são essenciais para o funcionamento do sistema. Programas **instalados pelo usuário**, como **editores, programas gráficos, gerenciadores de janelas** são exemplos disso.

	---

  + **/var**: Contém **arquivos de dados variáveis**, ou seja, **arquivos que podem aumentar de tamanho**, como **arquivos de log, arquivos de bancos de dados** e **mensagens de e-mail**.

		___

### Diretórios Opcionais

-	Os diretórios **/home** e **/root** são opcionais — eles podem existir no sistema mas não obrigatoriamente com estes nomes, apesar de serem assim com frequência!

	___

  + **/home**: Armazena os **diretórios e arquivos dos usuários cadastrados no sistema**, por exemplo **/home/daniel**. Ele poderia ser chamado por outro nome como **/minha_pasta , por exemplo**, e isso **não afetaria em nada a estrutura do sistema**.

	---

  + **/root**: Pasta pessoal do **super usuário** **ROOT**.

	___

### Os diretórios proc e sys

  + **/proc**: Contém **arquivos temporários de processos em execução no sistema**. Em outras palavras, é um **diretório virtual usado pelo kernel**. 

	Nele são mantidos **configurações atuais do sistema e dados estatísticos**.

	---

  + **/sys**: Armazena **quase o mesmo conteúdo** do **/proc**, porém de forma mais **organizada para podermos admnistrar**.

---

# Conhecendo o SHELL

## Oque é Shell ?

O Shell é a interface de acesso ao sistema operacional, onde é possível interagir com o sistema por meio de comandos digitados do teclado. Ele pode ser acessado pelo modo gráfico e diretamente em modo texto.

### Tela do Shell 

* **[ CTRL + ALT + T ]** - Abrir tela do Shell (Prompt de comando).

> usuario@usuario:~$

* **usuario**: é o nome do usuario utilizando o sistema.
* **@usuario:** é o nome do host (nome do computador).
* **~**: é a abreviação para a pasta do usuário.
* **$**: indica que o usuario não possui poderes de administrador.

### Tela do Shell fora do ambiente gráfico - TTY (TeleTYpe)

Alem do ambiente gráfico do Linux, existe ainda 6 ambientes de linha de comando (Prompt), ou ainda terminais virtuais.
o TTY corresponde ao tipo dos primeiros terminais usados em computadores.

Para ter acesso a esses ambientes, usamos as combinações das teclas **CTRL + ALT + F** sendo que **F** correspondente das teclas **F1 a F6**.
**F7 RETORNA AO AMBIENTE GRÁFICO**.

---

### Comandos Principais

* Sempre que quisermos digitar algum comando que já tenha sido executado antes, podemos fazer uso da tecla **DIRECIONAL PARA CIMA** ou **DIRECIONAL PARA BAIXO**.
* Isso possibilita navegarmos por uma lista de comandos que já foram executados.

* Existe a opção de vermos essa lista completa, graças ao **HISTORY**, que cria um

histórico memorizando tudo o que já digitamos no shell

> **Exemplo:** usuario@usuario:~$ history

* Outra recomendação para um uso mais produtivo do shell é utilizar a tecla **TAB**, que possui a função de autocompletar.

### Comandos de Usuário

* **whoami:** Exibe o nome do usuário atual que está utilizando o sistema.
* **sudo su**: Torna-se um admistrador do sistema.

	> **Exemplo de uso**: usuario@usuario:~$ sudo su 

* Para voltar a ser um **usuário normal** digite **exit**

---

### Comandos de Sistema

  + **apt-get**: **Advanced Packaging Tool** Gerenciador de pacotes do linux.
    - **update**: Atualiza a lista de pacotes.
    - **upgrade**: Atualiza todo o sistema.
    - **install**: Instala pacotes.
    - **remove**: Remove pacotes.		
* **date**: Informa a data e hora atual do sistema.
* **history**: Lista todos os comandos que ja foram digitados no Terminal.
* **clear** ou **CTRL + L**: Limpa a tela do terminal.
* **help** ou **--help**: Pede ajuda ao **Shell** para que informe mais detalhes sobre como usar um determinado comando.

	> **Exemplo de uso**: help cd
	> **Exemplo de uso**: cd --help

* **man ls**: Mostra a lista de todos os comandos disponíveis no Linux e como utilizá-los.
  + **h**: mostra a ajuda do comando man, veja para mais detalhes; 
  + **q**: sair do man; 
  + **/**: procura por um texto na documentação apresentada; 
  + **f**: avança uma tela; 
  + **b**: volta uma tela.
* **whatis**: Verifica a descrição simples de um comando **(qual a funcionalidade dele)**.
  + **Exemplo de uso**: whatis ls 

### Processos

Pense em um processo como a representação de um programa em execução utilizando os recursos do computador para realizar alguma tarefa.
Cada processo é identificado por um **PID**.

* **ps**: Lista os processos em execução.
  + **a**: Lista todos os processos existentes
  + **x**: Lista os processos que não possui relação com o terminal.
  + **m**: Exibe a quantidade de memória consumida por cada processo.
  + **aux**: Mostra os processos e informações detalhadas.

	> Exibe a quantidade de processos em execução: **ps aux | wc -l**

  + **ps -a | grep apache**: Filtra todos os processos do apache em execução.
  + **top**: Verifica os processos em tempo REAL.
    - **-u**: Lista os processos de um usuario específico.
    - **q**: Sair
    - **h**: Ajuda
  + **htop**: Uma versão mais amigável de top.
* **kill**: Finaliza um processo pelo seu PID.
* **killall**: Finaliza todos os processos.
* **STOP**: Pausa um processo.
* **CONT**: Ativa a execução de um processo interrompido.
* **TERM**: Termina o processo após ele finalizar uma tarefa.

### Comandos de Diretórios

* **pwd:** Retorna o diretório atual, chamado de "CURRENT".
* **ls**: Lista todos os arquivos e diretórios da pasta atual (CURRENT).
  + **-a**: Lista os arquivos e pastas ocultos.
  + **-la**: Lista os arquivos e pastas ocultos, tamanho, data de criação/modificação e permissão do arquivo/pasta.
* **cd**: Permite a navegação entre diretórios.

	> **Exemplo de uso**: usuario@usuario:~$ cd / ou ~  [navega até o diretório raiz(ROOT)]. 

  + **Opções do comando cd**
    - **cd -** : Mosta no terminal o caminho da pasta e navega até o diretório anterior que estava.
    - **cd ..** : Volta para o diretório anterior.
* **mkdir**: Cria um novo diretório.		
* **mv**: Move um arquivo ou diretório.

	> **Exemplo de uso**: mv arquivo.txt pastaDestino.
	> **Exemplo de uso**: mv arquivo.txt arquivoNew.txt

* **cp**: Faz uma copia de um arquivo ou diretório.

	> **Exemplo de uso**: cp arquivo.txt caminhoPastaDestino.

* **rm**: Remove arquivos e Diretórios.
  + **-r**: Remove diretórios **NÃO VAZIOS** recursivamente.
* **rmdir**: Remove diretórios vazios.

* **Criar Link simólico**: ln -s "pasta" atalho

---

### Comandos de Arquivos

* **ls**: Lista todos os arquivos e diretórios da pasta atual (CURRENT).
  + **-a**: Lista os arquivos e pastas ocultos.
  + **-la**: Lista os arquivos e pastas ocultos, tamanho, data de criação/modificação e permissão do arquivo/pasta.
* **touch**: Cria um novo arquivo.
* **du**: Mostra o tamanho do arquivo.
  + **-h:**: Mostra o tamanho em KB.
* **mv**: Move ou renomeia um arquivo ou diretório.

	> **Exemplo de uso**: mv arquivo.txt pastaDestino.
	> **Exemplo de uso**: mv arquivo.txt arquivoNew.txt

* **cp**: Faz uma copia de um arquivo ou diretório.
* **rm**: Remove arquivos e Diretórios.

	> **Exemplo de uso**: cp arquivo.txt caminhoPastaDestino.

* **echo**: Utilizado para exibir mensagens na tela ou em um arquivo.

	> **Exemplo de uso**: echo "mensagem no promt de comando";
	> **Exemplo de uso**: echo "Escrevendo em um arquivo" > arquivo.txt

* **cat**: Lê ou escreve conteudo de um arquivo.
  + **-n**: Exibe o conteudo do arquivo com as linha enumeradas.
  + **^**: Exibe os <TAB> do arquivo.
  + **$**: Representa o final da linha.
* **cat > arquivo**: escreve dentro do "arquivo", CTRL + D, escreve e salva o arquivo.	
* **cat arquivo1 arquivo2 > arquivoConteudoDos2**: Cria um novo arquivo com o conteudo de outros arquivos concatenados.
* **head**: Mostra as primeiras linhas de um arquivo (por padrão são as 10 primeiras).
  + **-n 3**: parametro que mostra as 3 primeiras linhas.
* **tail**: Mostra as ultimas linhas de um arquivo (por padrão são as 10 primeiras), o valor pode ser mudado de acordo com a necessidade.
  + **-n 3**: parametro que motra as 3 ultimas linhas, o valor pode ser mudado de acordo com a necessidade.
* **file**: Mostra informações sobre o tipo de arquivo.	
* **find**: Procura arquivos no sistema, pelo nome e outras caracteristicas, como: data de modificação, tamanho, usuário criador do arquivo etc...
  + **Alguns critérios de busca definidos pela expressão do método find**
  + **-name**: Procura arquivos pelo nome.
  + **-user**: Procura arquivos pelo nome do usuario dono do arquivo.
  + **-atime**: Procura arquivos que foram acessados há mais de x dias, onde x é o número de dias. 

	> **Exemplo de uso**: find /etc/ini -name w* - pesquisa todos os arquivos pelo nome dentro da pasta ini que inicia com a letra w e terminem com qualquer coisa.
	> **Exemplo de uso**: find /etc/ini -atime +1 - pesquisa todos os arquivos dentro da pasta ini que foram modificados há mais de um dia.

* **executar arquivos .bin/.run**: chmod +x nome-arquivo.run
* **nomeprograma &**: Executa o programa em background (não trava o terminal)

---

### Manipulando arquivos

* **vim ou vi**: é um editor básico de aspecto simples disponivel em grande parte das distribuições Linux, sendo o **vim (vi improved)** uma versão com mais recursos e melhorado.
  + **Opções do vi**
  + **:q**: Sair.
  + **i:**: Modo de inserção (escrever no arquivo).
  + **ESC**: Volta para o modo visual (para digitar as opções).
  + **:w**: Escreve no arquivo após a INSERÇÃO (**i:**).

	> **Exemplo de uso**: vi teste.txt
	> cat teste.txt - exibe o conteudo gravado no arquivo.

No **vim** podemos navegar pelo arquivo usando as **teclas direcionais** ou as teclas: **h , j , k e l**.

* **h**: move para a esquerda; 
* **j**: move para baixo (próxima linha); 
* **k**: move para cima (linha anterior); 
* **l**: move para a direita.

**Mais comandos que facilitam a movimentação:**

* **G**: move para a última linha do arquivo; 
* **gg**: move para a primeira linha do arquivo; 
* **0**: move o cursor para o início da linha; 
* **$**: move o cursor para o final da linha.

**Alguns comandos básicos para ajudar na inserção de texto:**

* **i**: para inserir texto antes do cursor; 
* **a**: para inserir texto depois do cursor; 
* **A**: para inserir texto no final de uma linha onde se encontra o cursor; 
* **o**: para adicionar uma linha abaixo da linha atual; 
* **O**: para adicionar uma linha acima da linha atual.

**Temos também comandos para alteração e localização no modo visual :**

* **x**: deleta o caractere onde está o cursor; 
* **dd**: deleta a linha atual; 
* **u**: desfaz a última modificação no arquivo; 
* **yy**: copia uma linha, p cola o que foi copiado; 
* **/palavra**: busca pela palavra ou caractere em todo o arquivo.

___

**nano**: é mais uma alternativa para edição de textos no terminal, e está disponível em quase todas as distribuições linux, assim como o vim.

O **nano** acaba sendo uma boa escolha para **iniciantes** por ser mais fácil de usar e possuir uma interface bastante intuitiva.

> **Exemplo de uso**: nano teste.txt

Observando o menu inferior do editor **nano** notamos várias funções. 

**Vale lembrar que ^ é o mesmo que Ctrl, sendo assim ^G significa Ctrl + G**.

**Alguns comandos básicos do nano**

* **^G**: apresenta a tela de ajuda sobre mais comandos do editor; 
* **^X**: sai do editor; se o arquivo não estiver salvo será solicitado para salvar antes

de sair; 

* **^O**: salva um arquivo (**em caso de modificação, insira o mesmo nome do arquivo para sobrescrever o que foi alterado**); 
* **^W**: busca por uma palavra dentro do arquivo.
* **^R**: abrir um arquivo para edição.

---

### Compactação e descompactação de arquivos

O Linux por padrão possui vários utilitários de compressão de arquivos.
Compactar arquivos e diretórios é uma boa prática para realização de backups.

* **tar**: Realiza o agrupamento (compactação) de vários arquivos em apenas um, semelhante ao WINRAR no WINDOWS.
  + **Tipo de arquivos utilizados pelo tar**: tar.gz, .tgz e .tar.bz2.
    - **.tar**: Realiza uma cópia sem compactação dos arquivos passados como parametro, ou seja, ele junta todos os arquivos em um único arquivo sem compactar.
			- **Opções do tar**: 
				- **-c**: Cria um novo arquivo .tar e adiciona os arquivos a serem compactados.
				- **-f**: Indica que o destino é um arquivo em disco.
				- **-v**: Exibe o nome de cada arquivo compactado.
				- **-x**: Extrai os arquivos agrupados no arquivo .tar.
    - **tar.gz**: Versão com o tamanho mais reduzido que o .tar.
    - **tar.bz2** Versão com o tamanho mais reduzido e do mesmo tamanho que o .tar.gz, porém é mais lento que o tar.gz.

    - **Compactar e Descompactar arquivos tar**:

			> tar zcvf arquivoFinal.tar.gz arq1.txt arq2.txt arq3.txt - Compactar.
			> tar zxvf arquivo.tar.gz - Descompactar.

	Sempre que vamos compactar, a opção c é utilizada, e ao

realizar a descompactação usamos a opção x. Já para o formato .tar.gz, usamos a opção z, e a opção j para o formato .tar.bz2.
___

* **GZIP/GUNZIP**

	Este é o programa de compressão mais utilizado no Linux. O **gzip** gera um arquivo no formato **.gz** . Sua forma de uso para compactar é bastante simples.

    - **-c**: Informa que queremos criar um arquivo gzip.
    - **-r**: Informa que queremos compactar no arquivo.

	> **Exemplo de uso**: gzip -c -r *.txt > backup.gz

  + **DESCOMPACTAR ARQUIVOS GZIP**

		Para descompactar utilizamos o comando **GUNZIP**

    - **-c**: exibe o conteudo a ser descompactado.
    - **-v**: informações sobre o nível de compactação dos arquivos.

Ao executar a descompactação com **gunzip** , o nosso arquivo **backup.gz** deixará de existir pois por padrão o **gunzip** extrai o arquivo comprimido no formato **.gz** e exclui o arquivo compacto.
___

* **ZIP/UNZIP**

	O comando **zip** , como o nome já sugere, cria um arquivo compacto no formato **.zip**, enquanto o **unzip** faz o trabalho inverso, descompactando.
	> **Exemplo de uso**: zip backup.zip *.txt
	> **Exemplo de uso**: unzip backup.zip

---

## Administração de Usuários

O Linux é um sistema multiusuário, ou seja, que pode ser usado por vários usuários simultaneamente, sem que um interfira nas atividades do outro, nem consiga alterar seus arquivos.

### Tipos de Usuários

  + **Super usuário** (**sudo**) ou **Administrador**.

		> Usuário **ROOT**, responsável por controlar todo o sistema e não possui restrições.
		Sempre que executamos algum programa ou tarefa que necessite de poderes administrativos, precisamos do root , que é chamado por meio do comando sudo.
		**Exemplo**: sudo su -> vira super usuário (ROOT)
		sudo apt install update

  + **Usuário de Sistema**

		> São **usuários** que não necessitam logar no sistema – eles existem para controlar serviços e normalmente não possuem senhas. Um bom exemplo é o usuário **www-data**, que pode ser usado para administrar servidores web como **Apache** e **Nginx**.

  + **Usuário comum**

		> São as contas criadas para o **utilizadores do sistema**. Essencialmente, eles podem executar **tarefas básicas** como criar e editar documentos, navegar na internet, assistir vídeos etc. A conta daniel é um exemplo de usuário comum, diferente da conta root que é utilizada para administrar o sistema.

### Criação de Usuários

	> sudo adduser matheus

### Criação de Grupos

	> sudo addgroup desenvolvedores

### Adicionar Usuario ao Grupo

	> sudo addgroup matheus desenvolvedores

### Alterar Grupo

	> sudo chgrp desenvolvedores suporte

### Permissões

  + As permissões são opções que permitem um usuário ter controle de acesso, leitura, gravação e execução de arquivos.
  + Existem três tipos de permissões: **r (leitura), w (escrita) e x (execução)**.
    - **r (leitura)** - Podem ser abertos, e ter seu conteudo visualizado.
    - **w (escrita)** - Podem ser alterados e deletados.
    - **x (execução)** - Dá a possibilidade de executar um arquivo como um programa.

		> **ls -l** -> Lista os arquivos e mostra suas permissoes.
