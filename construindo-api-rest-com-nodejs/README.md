# Construindo api rest com Nodejs - Casa do código

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

> node

para imprimir uma mensagem na tela digite código Javascript normalmente.

> console.log('Hello World!');

### Testando o Nodejs com um arquivo js

Para executar um **arquivo.js** com o Node, crie um arquivo .js, navegue até a pasta onde está o arquivo, e execute:

> node arquivo.js

Será impresso na tela o resultado da execução do arquivo.

---

## Gerenciando modulos com NPM
