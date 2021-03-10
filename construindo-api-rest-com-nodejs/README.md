# Construindo api rest com Nodejs

- [Introdução ao Nodejs](#introducao-ao-nodejs)
  - [Principais caracteristicas](#principais-caracteristicas)
  - [Porque devo aprender Nodejs?](#porque-devo-aprender-nodejs)
- [Instalação do Ambiente](#instalacao-do-ambiente)
  - [Instalação via NVM](#instalacao-via-nvm)
  - [Principais Comandos do NVM](#principais-comandos-do-nvm)
  - [Verificando versão do Node e NPM](#verificando-versao-do-node-e-npm)
  - [Testando o Nodejs via REPL](#testando-o-nodejs-via-repl)
  - [Testando o Nodejs com um arquivo js](#testando-o-nodejs-com-um-arquivo-js)
- [Gerenciando módulos com NPM
  ](#gerenciando-modulos-com-npm)
  - [Principais comandos do NPM](#principais-comandos-do-npm)
  - [Niveis de versionamentos de modulos do Nodejs](#niveis-de-versionamentos-de-modulos-do-nodejs)
- [Construindo a API](#construindo-a-api)
  - [Instrodução ao Express](#introducao-ao-express)

## Introducao ao Nodejs

Nodejs é uma plataforma de desenvolvimento de sistemas, que utiliza a linguagem JavaScript, e permite utilizar os recursos do sistema operacional.

### Principais caracteristicas

- **Single Thread**: Cada aplicação terá instância de uma **Thread** principal por processo iniciado.
- **Event Loop**: Nodejs é orientado a eventos, ele segue a mesma filosofia de orientação a eventos do JavaScript Client side, a diferença sáo os tipos de eventos, **não existem eventos de click do mouse**, **keyup de taclado ou qualquer evento de componente HTML**. O Nodejs trabalha com eventos **I/O** (input, output). Ná prática ele é basicamente um **loop infinito** que a cada iteração, verifica em sua fila de eventos se um determinado evento foi disparado.

### Porque devo aprender Nodejs

- **JavaScript everywhere**: O Nodejs utiliza Javascript como linguagem
  **server-side**, isso permite que você utilize Javascript no **client-side** e no **server-side**, reduzindo a curva de aprendizado, e o tempo de desenvolvimento, já que é utilizado apenas a linguagem Javascript no desenvolvimento da aplicação.

- **Ready for realtime**: O nodejs possui frameworks populares para aplicações em tempo real (realtime), como por exemplo o **SockJS** e **Socket.IO**, Eles são compatíveis com o recente protocolo **WebSockets** e permitem trafegar dados por uma única conexão bidirecional, tratando todas as mensagens por meio de eventos de JavaScript.

- **Big players**: Linkedin, Netflix, Microsoft, Groupon, Wallmart são algumas grandes empresas que utilizam a plataforma Nodejs.

---

## Setup do ambiente

### Instalacao via NVM

O Nodejs possui um gerenciador de versões chamado NVM **(Node Version Manager)**, com ele a tarefa de instalar uma versão da plataforma fica muito facil e rápido, bastando apenas digitar um comando para alternar de uma versão para outra.

### Principais comandos do NVM

- **nvm ls**: (Lista todas as versões instaladas em sua máquina)
- **nvm ls -remote**: (Lista todas as versões disponíveis para download do site https://nodejs.org)
- **nvm install vX.X.X**: (Baixa e instala uma versão do NodeJS)
- **nvm uninstall vX.X.X**: (Desinstala uma versão do Nodejs)
- **nvm use vX.X.X**: (Escolhe uma versão existente do Nodejs para ser utilizada)
- **nvm alias default vX.X.X**: (escolhe uma versão existente para ser carregada por padrão no início do sistema operacional)

### Verificando versao do Node e NPM

`node -v && npm -v`

### Testando o Nodejs via REPL

O Nodejs possui o modo **REPL (Read-Eval-Print-Loop)** onde é possível executar scripts via **linha de comando (terminal)**.

Para executá-lo abra o terminal e execute o comando:

`node`

para imprimir uma mensagem na tela digite código Javascript normalmente.

`console.log('Hello World!');`

### Testando o Nodejs com um arquivo js

Para executar um **arquivo.js** com o Node, crie um arquivo .js, navegue até a pasta onde está o arquivo, e execute:

`node arquivo.js`

Será impresso na tela o resultado da execução do arquivo.

> Hello World !

---

## Gerenciando modulos com NPM

O **NPM (Node Package Manager)** é um gerenciador de pacotes do Node, que já vem integrado no instalador principal, tornando ele o gerenciador padrâo da plataforma.

### Principais comandos do NPM

- **npm init**: Exibe um mini questionário para auxiliar na criação e descriação do package.json do seu projeto.
- **npm install <nome-do-modulo>**: Instala um módulo no seu projeto.
- **npm install -g <nome-do-modulo>**: Instala um módulo global.
- **npm install <nome-do-modulo> -g**: Instala o módulo e adiciona-o no package.json, dentro do atributo depêndencies.
- **npm install <nome-do-modulo> --save-dev**: Instala o módulo e adiciona-o no package.json, dentro do atributo devDependencies.
- **npm list**: Lista todos os módulos que foram instalados no projeto
- **npm list -g**: Lista todos os módulos globais que foram instalados.
- **npm remove <nome-do-modulo>**: Desinstala um módulo do projeto.
- **npm remove -g <nome-do-modulo>**: Desinstala um módulo globa.
- **npm remove <nome-do-modulo> --save**: Desinstala um módulo do projeto, removendo também do atributo "dependencies" do package.json.
- **npm remove <nome-do-modulo> --save-dev**: Desinstala um módulo do projeto, removendo também do atributo "devDependencies" do package.json.
- **npm update <nome-do-modulo>**: Atualiza a versão de um módulo do projeto.
- **npm update -g <nome-do-modulo>**: Atualiza a versão de um módulo global.
- **npm -v**: Exibe a versão atual do NPM.
- **npm adduser <nome-do-projeto>**: Cria um usuário no site https://npmjs.org.
- **npm whoami**: Exibe detalhes do seu perfíl público NPM do usuário (é necessário criar um usuário com o comando anterior)
- **npm publish**: Publica um módulo no https://npmjs.org (é necessário ter uma conta ativa primeiro)
- **npm help**: Exibe em detalhes todos os comandos

### Niveis de versionamentos de modulos do Nodejs

Os módulos no Nodejs, trabalham com 3 níveis de versionamento, Por exemplo versão: 1.2.3, está dividida nos níveis:

- Major - Versão fixa (1.0.0)
- Minor - Versão aproximada (~1.X.X)
- Patch - (1.0.X), Versão com melhorias e correção de bugs ( ~ )

  - ~1.2.3 "versão aproximada". Vai manter a versão menor, ou seja só permite mudancas no ultimo parametro do versionamento. Ou seja: 1.2 e - >=3 no ultimo parâmetro.
  - ^1.2.3 "compatível com" Vai aceitar mudança de versões menores, mas não permite versões novas (primeiro parâmetro). Ou seja: 1 e >=2.>=3 nos ultimos parâmetros.
  - 1.2.3 Versão exata.

  - 1.2.3 Maior que...
  - =1.2.3 Maior ou igual...
  - <1.2.3 Menor que...
  - <=1.2.3 Menor ou igual...
  - 1.2.x 1.2.0, 1.2.1, etc., mas não 1.3.0. (quase semelhante a ~1.2.3)
  - http://url.com/tarball Passando um url é possivel instalar um tarball, por exemplo do Github para casos em que o pacote/software não se encontre publicado na NPM. Por exemplo no Github seria algo asim: https://github.com/contaGithub/nomeProjeto/tarball/master

  - wildcard, aceita qualquer versão.

  - SEMVER é um modelo de versionamento, para facilitar prever se as mudanças entre versões de um software são grandes, pequenas ou somente correções. O modelo SEMVER consiste em três partes, numéricas que são/representam respetivamente alterações ao software de carácter: maior, menor, correção.

---

## Construindo a API

Para iniciar a construção da API utilizaremos o Framework Express.

A nossa aplicação será um simples gerenciador de tarefas, que será dividido em 2 projetos:

O primeiro será uma API servidora dos dados, e o segundo será um cliente web consumidora do primeiro.

O nosso projeto terá o nome NTask ( Node Task ) e terá as seguintes fun-
cionalidades:

- Listagem de tarefas do usuário;
- Consulta, cadastro, exclusão e alteração de uma tarefa do usuário;
- Consulta, cadastro e exclusão de um usuário;
- Autenticação de usuário;
- Página de documentação da API.

### Introducao ao Express

O Express é um framework web minimalista, que permite a criação de APIS e aplicações web de pequeno e grande porte. Seu foco é trabalhar manipulando views, routes e controllers, ficando a sua escolha trabalhar com models e utilizar qualquer framework de persistência com o banco de dados sem nenhum tipo de conflito e incompatibilidade.

- **Características do Express**:
  - Routing Robusto
  - Facilmente integrável com os principais Templates Engines
  - Código minimalista
  - Trabalha com o conceito de Middlewares
  - Possui uma grande lista de Middlewares 3rd-party
  - Content Negotiation
  - Adota padrôes e boas práticas de serviços REST
