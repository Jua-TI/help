# Algoritmos 1 - C

Este diretoro contem listas e correcoes de exercicios de C.

## Estrutura

- `Atividades/`
  - `1 - Variaveis/`
    - `Lista atividade.md`: enunciados.
    - `Correção/`: respostas em arquivos `Q1.c`, `Q2.c`, etc.
    - `Suas Respostas/`: pasta para respostas do aluno.
    - `Variáves.pdf`: material da lista.
  - `2 - Comandos condicionais/`
    - `Comandos Condicioais.pdf`: material da lista.
    - `condições`: arquivo da lista (sem extensao).

## Como compilar (exemplo com GCC)

```bash
gcc "Atividades/1 - Variaveis/Correcao/Q1.c" -o Q1
./Q1
```

## Observacoes

- Para `Q14.c` (usa `sqrt`), em alguns ambientes pode ser necessario linkar a biblioteca matematica:

```bash
gcc "Atividades/1 - Variaveis/Correcao/Q14.c" -o Q14 -lm
```
