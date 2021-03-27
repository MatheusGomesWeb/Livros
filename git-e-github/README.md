# Controlando Versões com Git e Github

**Sumário**

* [Oque é Git](#git)

   - [Instalação no Ubuntu](#instalação-ubuntu)
   - [Ferramentas e Configurações do Git](#ferramentas-e-configurações)

* [Comandos](#comandos)

   - [Trabalhando com Repositório](#trabalhando-com-repositório)
   - [Trabalhando com Branchs](#trabalhando-com-branchs)
   - [Trabalhando com Branchs REMOTAS](#trabalhando-com-branchs-remotas)
   - [Solução para Problemas](#solucao-para-problemas)
   - [Controlando Versões com TAGS](#controlando-versões-com-tags)
   - [Lidando com Conflitos](#lidando-com-conflitos)
   - [Maneiras de Trabalhar com Git](#maneiras-de-trabalhar-com-git)
   - [Colaborando com Projetos](#pull-requests)
   - [Github](#github) 

## GIT

 O **GIT** é um sistema de controle de versão criado em 2005 por **Linus Torvalds** o mesmo criador do **Linux**, que, pela sua estrutura interna, é uma máquina do tempo extremamante rápida e um robo de integração bem competente.

  + O **GIT** permite que o programador crie diversas versões do seu código, tornando a manutenção, conflitos e trabalho em equipe mais fácil.
  + Os **Códigos Versionados** são armazenados em um local chamado **REPOSITÓRIO** que pode ser **LOCAL** ou **REMOTO**.

 - **Git Bash**: Prompt de Comando utilizado pelo GIT.

___

### INSTALAÇÃO UBUNTU

 > sudo apt-get install git

___

### FERRAMENTAS E CONFIGURAÇÕES

 - **Configurar Utilizador Git**:

    > git config --global user.name "Fulano de tal"

    > git config --global user.email "fulano@fulano.com"

    > git config --list: Mostra as configurações globais do git.

* **--list --show-origin**: Mostra as configurações globais do git.

___

### COMANDOS

 - **git init**: Inicia um repositório na pasta do projeto local, e cria um subdiretório oculto do git (**.git**), que conterá todo o histórico de alteraçãoes dos arquivos, entre outras coisas, **caso queira parar de versionar o projeto, basta deleta-la**, este diretório é chamado de **Diretório de trabalho** ou **Working directory**.
 - **git init 'nome pasta'**: Cria uma pasta e inicia um projeto GIT dentro dela.
 - **git status**: Informa os arquivos que estão aguardando para serem **Rastreados** pelo **Git** nome fica **VERMELHO**.
 - **git add**: Adiciona arquivo ou arquivos para serem 
 **Rastreados** pelo **Git** nome fica **VERDE** indicando que estão na area de **STAGE**.

    - **git add .** - Adiciona varios arquivos de uma vez para serem rastreados.
    - **git checkout -- < arquivo >**: Deixa de rastrear o arquivo.

 - **git commit -m**: Adiciona os arquivos modificados e rastreados para o repositorio git (**GRAVA OS ARQUIVOS DO STAGE PARA O REPOSITÓRIO**).

    > git commit -m "Comentario das alterações"

 - **git commit -am "mensagem"**: Adiciona os arquivos modificados para o **STAGE** e **COMMITA** com um comando só.  
   - **-am "mensagem"**: mesmo efeito.
 - **git remote add <nomebranch-padrao = origin> < link do repo remoto >**: Aponta o repositório local para um repositório remoto.   

* **git push**: Envia os arquivos commitados para o repositório remoto.
* **git push origin master**: Envia os arquivos commitados para o repositório remoto utilizando a **branch** **MASTER**.
* **git pull**: Atualiza as modificações feitas em um **repositório remoto** para o **repositório local**.
* **git clone < link do repo remoto >**: Cria uma cópia de um repositório remoto para o seu computador.
* **git log**: Vê o histórico de commits do projeto.

   - **-n 2**: Mostra apenas os dois ultimos **COMMITS**.
   - **--oneline**: Mostra os logs resumidamente em uma linha.
   - **--stat**: Mostra o numero de linhas alteradas.

* **git log -n 2 --oneline --stat**: Combina todos os comandos em uma linha.
* **git diff 'nome arquivo'**: Compara as modificações do arquivo alterado com o arquivo commitado.

   - **--staged**: mostra a diferença entre o arquivo da area de **STAGE** com o arquivo **COMMITADO**.
   - **git diff 'idcommit'~2**: Mostra as modificações em comparação aos 2 anteriores.

* **git rm 'arquivo'**: Deleta um arquivo ou pasta.
* **git mv 'nome' 'novonome'**: Renomeia arquivo ou pasta.
* **git reset**: Remove arquivos da area de **STAGE** e mantem as modificações.

   - **git reset -- index.html**: Remove o arquivo index.html do **STAGE**. **HEAD 'arquivo'**: Tira arquivo do **STAGE**.
   - **git reset --hard**: Remove todos os arquivos de uma vez da area de **STAGE** e desfaz as alterações.

* **git revert 'idcommit'**: Desfaz o commit.

   - **--no-edit**: Não altera a mensagem do commit.
___

## Trabalhando com repositório

O **Git** possui um mecanismo que **permite ignorarmos arquivos**. Basta criarmos um arquivo chamado **.gitignore** no diretório principal do nosso projeto, com os nomes dos arquivos e pastas que queremos ignorar.
   - **.gitignore**

   > todo.txt
   > tmp/
   > *.txt
   > *.png

* **git init --bare 'nomepasta'**: Inicia um repositório REMOTO.
* **git remote add 'endereco repositorio.git'**: Adiciona (**conecta**) a um repositório remoto. 
* **git remote**: Lista os nomes dos repositorios remotos.

   - **-v**: Mostra os endereços do repositorio remoto.
   - **rename 'nomeatual' 'novonome'**: Renomeia o name do repositorio remoto.
   - **set-url 'nome' 'novourl'**: Renomeia a url so repositorio remoto.

* **git push 'servidor' 'master'**: Envia os arquivos commitados para o repositorio remoto.

## Trabalhando com Branchs

   - **git branch**: Lista todas as branchs do repositório.

      - **-v**: Lista a branch e o ultimo commit realizado no repositorio nessa branch.

   - **git branch 'nome'**: Cria uma nova branch.
   - **git branch -d 'nomebranch'**: Deleta a branch.

      - **-D**: -D maiusculo deleta a branch caso tenha sido commitada.

   - **git branch --no-merged**: Mostra as branchs ainda não mescladas. 
   - **git merge 'nomebranch' -m "Comentario de commit"**: Mescla a branch a branch atual.
   - **git rebase 'nomebranch'**: Mescla a branch a branch atual e refaz o commit (reboobina).
   - **git branch --merged**: Mostra as branchs mescladas.   
   - **git checkout 'nomebranch'**: Troca para outra branch.
   - **git checkout -b 'nomebranch'**: Cria e ja troca para a branch criada.
   - **git log --parents**: Mostra os commits com suas respectivas branchs.

      - **--decorate**: Mostra o commit para qual a branch master está apontando.   

      > git log --oneline --decorate --parents - Agrupa os comandos e mostra em uma linha.

## Trabalhando com BRANCHS REMOTAS

   - **git branch -r**: Lista as branchs remotas do repositorio.
   - **git branch -a**: Lista as branchs remotas e locais.
   - **git branch -v**: Mostra para qual branch remota está sendo apontada.
   > git branch -r -v - Agruda os comandos, e mostra tambem para qual commit está sendo apontado.
   - **git branch origin 'nomebranch'**: Compartilha a branch no repositorio remoto do github (Envia para o repositorio remoto).
   - **git checkout -b origin/'nomebranch'**: Troca para a branch do repositorio remoto.
   - **git fetch origin**: Traz os commits de uma branch remota que ainda não estavam presentes localmente.

## Solucao para Problemas

// Quando acidentalmente subimos um arquivo gigantesco, este comando pesquisa em todos os commits e remove o arquivo específico

> git filter-branch --tree-filter 'rm -f DVD-rip' HEAD

## Controlando versões com TAGS

   - **git tag 'nometag'**: Cria uma nova tag.
   - **git tag 'nometag' 'idcommit'**: Cria uma nova tag para um commit especifico.
   - **git tag**: Lista as tags existentes no repositorio.
   - **git tag -d 'nometag'**: Deleta uma tag.
   - **git tag -a 'nometag' -m 'comentario ou descricao'**: Cria uma nova tag e adiciona um comentario a ela.
   - **git show -s v1.1**: Mostra os detalhes de uma tag.
   - **git push origin 'nometag'**: Enviar a tag para o repositorio remoto para ser compartilhada com os membros da equipe.
   - **git push origin --tags**: Envia todas as tags de uma vez para o repositorio remoto.

## Lidando com conflitos

   - **git mergetool**: Ferramenta para lidar com conflitos de merge e rebase.

## Maneiras de trabalhar com GIT

   - Apenas um repositório remoto, central, para onde os repositórios locais apontam.
   - Cada desenvolvedor tem seu fork, um repositório remoto que é uma cópia do projeto, utilizando um repositório central para integração.
   - Uma hierarquia de repositórios para integração.

## Maneirias de trabalhar com BRANCHS

   - Utilizar apenas a branch **MASTER**
   - Ter uma branch para cada nova funcionalidade, deixando a **MASTER** para código pronto para ser entregue.
   - Ter algumas branches por etapa de desenvolvimento, como uma branch de longo prazo para código ainda em construção e uma de curto prazo para correções de bugs urgentes.

### PULL REQUESTS

Primeiramente, devemos acessar a pagina do projeto que queremos colaborar no Github, e clicar no botão **FORK**.

Repare que agora o nosso usuário do GitHub possui um repositório chamado "**vraptor4**" , ou seja, esse repositório é a nossa versão do projeto.

O próximo passo é clonar o repositório a partir do nosso usuário do GitHub, e não do usuário **caelum** , pois assim conseguiremos realizar o push dos commits locais para o nosso repositório no GitHub:

> $ git clone https://github.com/fulanodasilva/vraptor4.git

Para criar um **Pull Request** devemos acessar a página do nosso repositório no GitHub, clicar no **link Pull Requests**, e em seguida clicar no botão **New pull request**:

### GITHUB

Github é rede social para programadores que disponibiliza repositórios **Git** acessiveis remotamente. Com ele o programador pode compartilhar o seu projeto na internet para que outros programadores possam fazer contribuições no projeto e trabalhar em equipe facilmente. È muito utilizado em projetos **Open Source**.
