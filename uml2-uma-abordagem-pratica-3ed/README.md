# Uml2 - Uma Abordagem Pratica, 3ª ediçao.

* [Oque é UML?](#oque-é-uml?)
    - [Breve Histórico da UML](#breve-histórico-da-uml)
    - [Histórico de Versões](#histórico-de-versões)
* [Porque modelar software?](#porque-modelar-software?)
* [Modelo de Software - Uma Definição](#modelo-de-software-uma-definição)
* [Fases de um processo de desenvolvimento de software](#fases-de-um-processo-de-desenvolvimento-de-software)
* [Requisitos do Software](#requisitos-do-software)
* [Por que tantos Diagramas?](#por-que-tantos-diagramas?)
* [Rápido Resumo dos Diagramas da UML](#rápido-resumo-dos-diagramas-da-uml)
* [Síntese Geral dos Diagramas](#síntese-geral-dos-diagramas)
* [Orientação a Objetos](#orientação-a-objetos)
* [Classificação, Abstração e Instanciação](#classificação-abstração-e-instanciação)
* [Classes de Objetos](#classes-de-objetos)
* [Atributos ou Propriedades](#atributos-ou-propriedades)
* [Operações, Métodos ou Comportamentos](#operações-métodos-ou-comportamentos)
* [Visibilidade (Encapsulamento)](#visibilidade-encapsulamento)
* [Herança](#herança)
* [Herança Múltipla](#herança)
* [Polimorfismo (SobreCarga, SobreEscrita)](#polimorfismo-sobrecarga-sobreescrita)

___

## Oque é UML?

A **UML - Unified Modeling Language** ou **Linguagem de Modelagem Unificada** - é uma linguagem visual utilizada para modelar softwares baseada no **paradigma de Orientação a Objetos**.

È uma linguagem de **modelagem de propósito geral** que pode ser aplicada a **todos os domínios de uma aplicação**. Essa linguagem é atualmente a **linguagem-padrão** de modelagem adotada internacionalmente pela indústria de engenharia de software.

Deve ficar bem claro, que a **UML não é uma linguagem de programação**, e sim uma **linguagem de Modelagem**, cujo objetivo é **auxiliar os engenheiros de software** a definirem as **características do sistema**, como **seus requisitos**, seu **comportamento**, sua **estrutura lógica**. a **dinâmica de seus processos** e até mesmo suas **necessidades físicas** em relação ao equipamento sobre o qual o sistema deverá ser **implantado**.

Tais características podem ser definidas por meio da **UML antes de o sotfware começar a ser realmente desenvolvido**. Além disso, cumpre destacar que a UML **não é um processo de desenvolvimento de software** e tampouco está ligada a um de forma exclusiva, sendo totalmente independente, assim, ela pode ser utilizada por **qualquer processo de desenvolvimento** ou mesmo da forma que o engenheiro de software considerar mais adequada.
___

## Breve Histórico da UML

A UML surgiu da união de três métodos Orientados a Objeto: 

* O **método de Booch**.
* O **OMT (Object Modeling Technique)** de Jacobson 
* E o método **OOSE (Object Oriented Software Engineering)** de Rumbaugh.

Até meados da década de 1990, **esses eram os métodos Orientado a Objeto mais populares**.

A união desses métodos contou com o amplo apoio da **Rational Software**, que a incentivou e financiou.
___

## Histórico de Versões

* **1996** foi criada a **primeira versão da UML** propriamente dita.
* Muitas empresas passaram a contribuir com a UML fornecendo sugestões para melhorear e amplicar a linguagem.
* **1997**, a **OMG (Object Management Group ou Grupo de Gerenciamento de Objeto)** adotou como uma **linguagem padrão de modelagem**.
* **Julho de 2005**, a versão **2.0** da linguagem foi oficialmente lançada.
* **Atualmente** a UML se encontra na versão **2.5**, essa versão foi lançada com o objetivo de simplificar a estrutura da linguagem.

___

## Porque modelar software?

Existe uma **diferença gritante entre construir uma pequena casa** e **construir um prédio de varios andares**. Obviamente, para se construir um edificio, é necessário, em primeiro lugar, desenvolver um **projeto** muito bem elaborado, cujos cálculos tem de estar corretos e precisos. 

**Além disso, é preciso fornecer**:

* Uma estimativa de custos
* Determinar em quanto tempo a construição estará concluida
* Avaliar a quantidade de profissionais necessária á execuçáo da obra.
* Especificar a quantidade de material a ser adquirida para a construção
* Escolher o local onde o prédio será erguido etc.

**Grandes projetos não podem ser modelados de cabeça**, **nem mesmo a maioria dos pequenos projetos pode sê-lo**, exceto, talvez, aqueles extremamente simples.

Na realidade, por mais simples que seja, **todo sistema deve ser modelado antes de se iniciar sua implementação**, entre outras coisas, porque os **sistemas de informação frequentemente costumam ter tendência a "crescer"**, isto é, aumentar em tamanho, complexidade e abrangência. Alguns profissionais costumam afirmar que **sistemas de informação são "vivos"** porque **nunca estão completamente finalizados**. Na verdade, o termo correto seria "dinâmicos", pois normalmente os sistemas de informação estão em **constante mudança**. Tais mudanças são devidas a diversos fatores, como:

* Os clientes desejam constantemente modificações ou melhorias no sistema.

* O mercado está sempre mudando, o que força a adoção de novas estratégias pelas empresas e, consequentemente, de seus sistemas.

* O governo frequentemente promulga novas leis e cria novos impostos e alíquotas ou, ainda, modifica as leis, os impostos e as alíquotas já existem, o que acarreta a manutenção no software.

Assim, um **sistema de informação precisa ter uma documentação detalhada**, **precisa e atualizada** para ser mantido com facilidade, rapidez e correção, sem produzir novos erros ao corrigis os antigos. 

**Modelar um sistema é uma forma bastante eficiente de documentá-lo**, mas a modelagem não serve apenas para isso: a documentação é apenas uma das vantagens fornecidas pela modelagem. Existem muitas outras que serão discutidas nas próximas seções.
___

## Modelo de Software - Uma Definição

Um **modelo de software captura uma visão de um sistema físico**, é uma abstração do sistema com um certo propósito, como **descrever aspectos estruturais ou comportamentais do software**. Esse propósito **determina** o que **deve ser incluido no modelo** **e o que é considerado irrelevante**. Assim, um modelo descreve completamente aqueles aspectos do sistema físico relevantes ao propósito do modelo, no nível apropriado de detalhe.
___

## Fases de um processo de desenvolvimento de software

* ### Elicitação e Levantamento de Requisitos

* ### Análise de Requisitos

* ### Projeto

* ### Codificação

* ### Testes

* ### Implantação

Dependendo do método/processo adotado, essas etapas ganham, por vezes, nomenclaturas diferentes, podendo algumas delas ser condensadas em uma etapa dunica, ou uma etapa pode ser dividida em dusa ou mais etapas.

Se tomarmos como exemplo o **Processo Unificado (Unified Process)**, um método de desenvolvimento de software, veremos que se divide em quatro fases:

* **Concepção**: Elicitação de requisitos inicial e determina a viabilidade de desenvolver o software.

* **Elaboração**: São feitos a análise dos requisitos e o projeto do software.

* **Construção**: O software é implementado e testado.

* **Transição**: O software será implantado.

**As fases de Elaboração e Construção** ocorrem, sempre que possível, em **ciclos iterativos**, dessa forma, sempre que um ciclo é completado pela fase de Construção, volta-se á fase de Elaboração para tratar do ciclo seguinte, até todo o software ser finalizado.
___

## Requisitos do Software

* **Requisitos Funcionais**: Correspondem ao que o **cliente quer que o sistema realize**, ou seja, as funcionalidades do software.

* **Requisitos não Funcionais**: Correspondem as **restrições, condições, consistências e validações** que devem ser levadas a efeito sobre os requisitos funcionais. **Por exemplo, determinar que somente pessoas maiores de idade possam abrir contas-correntes é um requisito não funcional.**

Alguns **requisitos não funcionais identificam regras de negócio**, ou seja, **políticas, normas e condições** estabelecidas pela empresa que devem ser seguidas na execução de uma funcionalidade.
___

## Por que tantos Diagramas?

O objetivo disso é **fornecer multiplas visões do sistema a ser modelado**, analisando-o e modelando-o sob diversos aspectos, procurando-se, assim, atingir a completude da modelagem, permitindo que cada diagrama complemente os outros.

**Cada diagrama da UML analisa o sistema, ou parte dele**, sob uma determinada óptica. É como se o sistema fosse modelado em camadas.
___

## Rápido Resumo dos Diagramas da UML

___

* **Diagrama de Casos de Uso**:

O **Diagrama de Casos de Uso** tem como objetivo **apresentar uma visão externa geral das funcionalidades** que o sistema deverá oferecer aos usuários, **sem se preocupar muito com a questão de como tais funcionalidades serão implementadas**.

É bastante **útil e recomendável** que um Diagrmaa de Casos de Uso seja **apresentado** aos clientes com um **protótipo**, o que permitirá que um **complemente o outro**.
___

* **Diagrama de Classes**:

O **Diagrama de Classes** é um dos **mais importantes e utilizados da UML**. Seu principal enfoque está em permitir a **visualização das classes que comporão o sistema com seus respectivos atributos e métodos**, bem como em demonstrar **como as classes do diagrama se relacionam**, complementam e transmitem informações entre si.
___

* **Diagrama de Objetos**:

O **Diagrama de Objetos** está amplamente associado ao Diagrama de Classes. Na verdade, o **Diagrama de Objetos é praticamente um complemento do Diagrama de Classes** e bastante dependente deste. O Diagrama fornece uma **visão dos valores armazenados pelos objetos de um Diagrama de Classes** em um determinado momento da execução de um processo do software.
___

* **Diagrama de Pacotes**:

O **Diagrama de Pacotes** é um **Diagrama Estrutural** que tem por objetivo **representar como os elementos do modelo estão divididos logicamente**. Tais elementos podem ser, por exemplo, subsistemas ou componentes englobados por um sistema ou as camadas que o compoem, entre outras possibilidades. **Essas divisões lógicas sáo denominadas Pacotes**. Esse Diagrama pode ser utilizado de maneira independente ou associado a outros diagramas.
___

* **Diagrama de Sequência**:

O **Diagrama de Sequência** é um **diagrama comportamental** que se preocupa com a **ordem temporal em que as mensagens são trocadas entre os objetos envolvidos em um determinado processo**. Em geral, baseia-se em um caso de uso definido pelo Diagrama de mesmo nome e **apoia-se no Diagrama de Classes** para determinar os objetos das classes envolvidas em um processo. Um Diagrama de Sequência costuma identificar o evento gerador do processo modelado, vem como o ator responsável por esse evento, e determina como o processo deve se desenrolar e ser concluido por meio da chamada de métodos disparados por mensagens enviadas entre os objetos.
___

* **Diagrama de Comunicação**:

O **Diagrama de Comunicação** era conhecido como de Colaboração até a versão 1.5 da UML, tendo seu nome modificado para Diagrama de Comunicação a partir da **versão 2.0**. Está amplamente associado ao **Diagrama de Sequência**: Na verdade, **um complementa o outro**. As informações mostradas no Diagrama de Comunicação com frequencia são praticamente as mesmas apresentadas no de Sequência, porém com um enfoque distinto, visto que esse diagrama não se preocupa com a temporalidade do processo, concentrando-se em como os elementos do diagrama estão vinculados e quais mensagens trocam entre si durante o processo.
___

* **Diagrama de Máquina de Estados**:

O **Diagrama de Máquina de Estados** demonstra o comportamento de um elemento por meio de um conjunto finito de transições de estado. Esse Diagrama pode ser utilizado para **expressar o comportamento de uma parte do sistema**, quando é chamado de máquina de estado comportamental, ou o protocolo de uso de parte de um sistema, quando identifica uma máquina de estados de protocolo. Uma máquina de estados comportamental pode ser usada para especificar o comportamento de vários elementos do modelo. O elemento modelado muitas vezes é uma instância de uma classe. No entanto, pode-se usar esse diagrama para modelar o comportamento de um caso de uso.
___

* **Diagrama de Atividade**:

O **Diagrama de Atividade** preocupa-se em **descrever os passos a serem percorridos para a conclusão de uma atividade específica**, podendo esta ser representada por um método com certo grau de complexidade, um algoritmo, ou mesmo um processo completo. O Diagrama de Atividade concentra-se na representação do fluxo de controle e de objeto de uma atividade.
___

* **Diagrama de Visão Geral de Interação**:

O **Diagrama de Visão Geral de Interação** é uma variação do Diagrama de Atividade que fornece uma **visão geral dentro de um sistema ou processo de negócio**, podendo englobar vários subprocessos. Esse Diagrama passou a existir apenas a partir da UML 2.0.
___

* **Diagrama de Componentes**:

O **Diagrama de Componentes**, como seu próprio nome indica, identifica os componentes que fazem parte de um sistema, um subsistema ou mesmo os componentes ou classes internas de um componente individual. Um componente pode representar tanto um **componente lógico (um componente de negócio ou de processo)** quanto um **componente físico**, como arquivos contendo código-fonte, arquivos de ajuda (help), bibliotecas, arquivos executáveis etc.
___

* **Diagrama de Implantação**:

O **Diagrama de Implantação** determina as n**ecessidades de hardware do sistema**, como s**ervidores, estaçoes, topologias e protocolos de comunicação**, ou seja, **todo o aparato físico sobre o qual o sistema deverá ser executado**. Esse Diagrama permite demonstrar também como se dará a distribuição dos módulos do sistema, em situações em que estes forem executados em mais de um servidor. 
___

* **Diagrama de Estrutura Composta**:

O **Diagrama de Estrutura Composta** descreve a estrutura interna de um classificador, como uma classe ou componente, detalhando as partes internas que o compoem, como estas se comunicam e colaboram entre si. Também é utilizado para descrever uma colaboração em que um conjunto de instâncias coopera entre si para realizar uma tarefa.
___

* **Diagrama de Tempo ou de Temporização**:

O **Diagrama de Tempo** descreve a mudança no estado ou condição de uma instância de uma Classe ou papel que ela assume em um período específico de tempo. È tipicamente utilizado para demonstrar a mudança no estado de um objeto em um tempo exato, em resposta a eventos externos. Pode ser utilizado, por exemplo, na modelagem de sistemas de tempo real; sistemas que utilizem recursos de multimídia/hipermídia, em que o tempo em que um objeto executa algo é muitas vezes importante; ou, ainda, para modelar processos de rede em que o sincronismo entre os eventos é essencial em algumas situações.
___

* **Diagrama de Perfil**:

O **Diagrama de Perfil** é um tanto mais abstrato que os descritos anteriormente. Esse Diagrama permite adaptar a UML a uma plataforma ou domínio ao qual a linguagem UML não foi projetada originalmente e, portanto, não possui recursos para modelar as características particulares da plataforma, tecnologia ou domínio em questão. 

Sendo assim, por meio da **criação de perfis**, é possivel estender a linguagem, criando-se novas metaclasses e estereótipos que permitam a modelagem desses novos domínios.
___

## Síntese Geral dos Diagramas

Os Diagramas da UML dividem-se em **Diagramas Estruturais** e **Comportamentais**, contendo os ultimos uma subdivisão representada pelos **Diagramas de interação**.
___

* **Diagrama Estrutural**:

    - Diagrama de Classes
    - Diagrama de Componentes
    - Diagrama de Objetos
    - Diagrama de Estrutura Composta
    - Diagrama de Implantação
    - Diagrama de Perfil
    - Diagrama de Pacotes

    ___
    

* **Diagrama Comportamental**:

    - Diagrama de Atividade
    - Diagrama de Casos de Uso
    - Diagrama de Máquina de Estados
    - Diagrama de Interação: **Possui Subdivisões:**
        - Diagrama de Sequência
        - Diagrama de Comunicação
        - Diagrama de Visão Geral de Interação
        - Diagrama de Temporização

___

## Orientação a Objetos

A UML está totalmente inserida no **paradigma de Orientação a Objetos**. Por esse motivo, para compreendê-la, precisamos, compreender os conceitos da **Orientação a Objetos**.
___

## Classificação, Abstração e Instanciação

* **Abstração**: Isolar um elemento ou propriedade de um todo, para considerar individualmente.
* **Classes**: Grupo de Objetos sendo cada um deles um exemplo de um determinado grupo, tendo as mesmas características e comportamentos de qualquer objeto do grupo em questão.
* **Instanciação**: Criar um exemplo de um tipo, grupo, uma classe.

___

## Classes de Objetos

Na UML, uma **classe é representada por um retângulo** que pode ter até três divisões. A **primeira divisão armazena o nome** pelo qual a classe é identificada (e essa é a unica divisão obrigatória), a **segunda enuncia os possiveis atributos** pertencentes á classe, e a terceira lista os possiveis **métodos**.
___

## Atributos ou Propriedades

Os **atributos ou propriedades**, representam as caracteristicas de uma classe, como **nome, CPF** ou a **idade** em um objeto da **classe Pessoa**, ou a placa ou a cor em um objeto da classe Carro.

Os atributos são apresentados na **segunda divisão da classe** e contem, normalmente, duas informações: o nome que identifica o atributo e o tipo de dado que o atributo armazena, como **integer, float ou String**. 

**Essa ultima informação não é obrigatória**, mas muitas vezes é útil e recomendável.
___

## Operações, Métodos ou Comportamentos

Um método **representa uma atividade** que um objeto de uma classe pode executar.

Um método pode **receber ou não parâmetros** (valores utilizados durante a execução do método) e, em geral, tende a retornar valores ou não.
___

## Visibilidade-Encapsulamento

A **visibilidade** é utilizada para indicar o nível de acessibilidade de um determinado atributo ou método, sendo representada á esquerda destes. Existem basicamente **quatro modos de visibilidade: público, protegido, privado e pacote.**

* **privado**: é representado opr um simbilo de **menos (-)** e significa que somente os objetos da classe detentora do atributo ou método poderão enxergá-lo.

* **protegido**: È representado por um simbolo de **sustenido (#)** e determina que, além dos objetos da classe detentora do atributo ou método, também os objetos de suas subclasses poderão ter acesso a este.

* **publico**: È representado por um simbolo de **mais (+)** e determina que o atributo ou método pode ser utilizado por qualquer objeto.

* **pacote**: È representado por um simbolo de **til (~)** e determina que o atributo ou método é visivel por qualquer objeto dentro do pacote. Somente Elementos que fazem parte de um pacote podem ter essa visibilidade. Nenhum elemento fora do pacote poderá ter acesso a um atributo ou método com essa visibilidade.

É importante destacar que **normalmente os atributos costumam ser privados ou protegidos**, enquanto seus **métodos costumam ser públicos**. 

A declaração de atributos como privados, ou eventualmente protegidos, é altamente recomendada, pois isto garante o encapsulamento dos atributos. 

Um **atributo privado**, além de ser só **visivel por objetos de sua classe**, só poderá ser acessado por meio de métodos. Assim, **objetos de outras classes** não terão conhecimento sobre quais atributos estão contidos na classe em questão e nem poderão acessá-los.

Eles **saberão da existencia dos métodos da classe** (quando forem públicos), mas não como o método manipula seus atributos.
___

## Herança

A **Herança** permite o **reaproveitamento de atributos e métodos**, otimizando o tempo de desenvolvimento, além de permitir a diminuição de linhas de código, bem como facilitar futuras manutenções.

A **Herança** na Orientação a Objetos trabalha com os conceitos de **superclasses** e **subclasses**.

Uma **SuperClasse**, também é chamada de **classe-mae**, contêm classes derivadas dela, chamadas **subclasses**, tambem conhecidas como **classes-filhas**.

As **subclasses**, ao serem derivadas de uma **superclasse**, **herdam suas características**, ou seja, seus atributos e métodos.

Uma **subclasse** pode se tornar uma **superclasse** a qualquer momento, bastando para tanto que se **derive uma subclasse** dela.
___

## Herança Múltipla

A **Herança Multipla** ocorre quando uma subclasse **herda características de duas ou mais superclasses**. 

No caso, uma subclasse pode herdar atributos e métodos de diversas superclasses.

No entanto, **não são todas as linguagens de programação orientadas a objeto** que fornecem esse tipo de recurso, sendo este encontrado, por exemplo, na **linguagem C++**.
___

## Polimorfismo-SobreCarga-SobreEscrita

O **Polimorfismo** trabalha com a **redeclaração de métodos** previamente herdados por uma classe.

Esses métodos, embora semelhantes, **diferem de alguma forma da implementação utilizada na superclasse**, sendo necessário, portanto, reimplementá-los na subclasse.

Porém, para evitar ter de modificar o código-fonte, inserindo uma chamada a um método com um nome diferente, **redeclara-se** o método com o **mesmo nome declarado** na superclasse.

Assim, **podem existir dois ou mais métodos** com a mesma nomenclatura, diferenciando-se na maneira como **foram implementados**, sendo o **sistema responsável** por verificar se a classe da instância em questão contém o método declarado pela **própria** ou se o **herda** de uma superclasse.

* **SobreEscrita**: Quando uma subclasse herda um método da Superclasse e modifica a sua funcionalidade original.

* **SobreCarga**: Quando utilizamos o mesmo método diversas vezes para calcular e retornar valores diferentes por exemplo.

Esses métodos são chamados de **métodos polimórficos**.
