# Movimentação de Peças de Xadrez em C

Programa desenvolvido em linguagem C com o objetivo de praticar e demonstrar o uso de **estruturas de repetição**, **loops aninhados** e **recursividade** através da simulação dos movimentos de peças de xadrez no console.

Este projeto representa a evolução em três níveis de dificuldade, iniciando com loops simples, passando por loops aninhados e finalizando com técnicas mais avançadas como **recursividade** e **controle de fluxo com break e continue**.

## Peças simuladas

O programa simula o movimento das seguintes peças:

- Torre
- Bispo
- Rainha
- Cavalo

Cada peça possui uma lógica específica de movimentação implementada de acordo com as regras do xadrez, adaptadas para fins didáticos.

## Movimentos realizados

- **Torre** → 5 casas para a direita (recursividade)
- **Bispo** → 5 casas na diagonal (Cima e Direita) utilizando recursividade e loops aninhados
- **Rainha** → 8 casas para a esquerda (recursividade)
- **Cavalo** → Movimento em "L" (Cima, Cima, Direita) com loops aninhados complexos, utilizando `break` e `continue`

A cada casa percorrida, o programa imprime no console a direção do movimento.

## Funcionalidades implementadas

O programa demonstra:

- Uso de `for`, `while` e `do-while`
- Uso de **loops aninhados**
- Aplicação de **recursividade** para substituir estruturas de repetição
- Controle de fluxo com `break` e `continue`
- Organização do código em funções
- Saída organizada e legível no terminal

## Conceitos de C aplicados

Este projeto utiliza:

- Funções
- Recursividade
- Loops simples
- Loops aninhados
- Condições de parada
- Controle de fluxo
- Boas práticas de organização e legibilidade de código

## Objetivo didático

O foco do projeto é fixar os seguintes conceitos fundamentais da linguagem C:

- Estruturas de repetição
- Lógica de programação
- Pensamento estruturado
- Uso correto de funções
- Entendimento prático de recursividade

## Como compilar e executar (Code::Blocks)

- Abra o Code::Blocks
- Clique em **File → Open**
- Selecione o arquivo `.c`
- Clique em **Build and Run** (ou pressione `F9`)

O programa será compilado e executado automaticamente no console.

### Projeto desenvolvido e testado utilizando a IDE Code::Blocks.
