# Lista - Funções Úteis em C (Algoritmos 1 - EXTRA)

## Formato padrão para todas as questões

- **Entrada:** valores lidos do teclado.
- **Saída:** valores exibidos na tela.
- **Objetivo:** Aprender a utilizar funções de bibliotecas específicas úteis.

## 1) math.h - Raiz quadrada

Leia um número real positivo e calcule sua raiz quadrada usando sqrt() da biblioteca math.h. Exiba o resultado com 2 casas decimais.

- **Entrada:** um número real positivo.
- **Saída:** a raiz quadrada do número.
- **Biblioteca:** math.h (sqrt)

## 2) math.h - Potência

Leia dois números reais (base e expoente) e calcule a potência usando pow() da biblioteca math.h. Exiba o resultado.

- **Entrada:** dois números reais (base e expoente).
- **Saída:** o resultado da potência.
- **Biblioteca:** math.h (pow)

## 3) math.h - Valor absoluto com fabs()

Leia um número real e calcule seu valor absoluto usando fabs() da biblioteca math.h. Exiba o resultado.

- **Entrada:** um número real.
- **Saída:** o valor absoluto do número.
- **Biblioteca:** math.h (fabs)

## 4) stdlib.h - Valor absoluto com abs()

Leia um número inteiro e calcule seu valor absoluto usando abs() da biblioteca stdlib.h. Exiba o resultado.

- **Entrada:** um número inteiro.
- **Saída:** o valor absoluto do número.
- **Biblioteca:** stdlib.h (abs)

## 5) math.h - Arredondamento

Leia um número real e exiba: arredondado (round()), piso (floor()) e teto (ceil()).

- **Entrada:** um número real.
- **Saída:** o número arredondado, piso e teto.
- **Biblioteca:** math.h (round, floor, ceil)

## 6) math.h - Funções trigonométricas

Leia um ângulo em graus e converta para radianos. Calcule e exiba seno, cosseno e tangente usando sin(), cos(), tan().

- **Entrada:** um ângulo em graus.
- **Saída:** seno, cosseno e tangente do ângulo.
- **Biblioteca:** math.h (sin, cos, tan, e a constante M_PI)

## 7) string.h - Comprimento de string

Leia uma string e exiba seu comprimento usando strlen() da biblioteca string.h.

- **Entrada:** uma string.
- **Saída:** o comprimento da string.
- **Biblioteca:** string.h (strlen)

## 8) string.h - Cópia de string

Leia uma string e copie-a para outra usando strcpy() da biblioteca string.h. Exiba ambas.

- **Entrada:** uma string.
- **Saída:** a string original e a cópia.
- **Biblioteca:** string.h (strcpy)

## 9) string.h - Concatenação de strings

Leia duas strings e concatene-as usando strcat() da biblioteca string.h. Exiba o resultado.

- **Entrada:** duas strings.
- **Saída:** a concatenação das duas strings.
- **Biblioteca:** string.h (strcat)

## 10) string.h - Comparação de strings

Leia duas strings e compare-as usando strcmp() da biblioteca string.h. Exiba se são iguais, qual é maior ou menor.

- **Entrada:** duas strings.
- **Saída:** resultado da comparação.
- **Biblioteca:** string.h (strcmp)

## 11) string.h - Localizar caractere em string

Leia uma string e um caractere. Procure o caractere na string usando strchr(). Exiba a posição ou "não encontrado".

- **Entrada:** uma string e um caractere.
- **Saída:** a posição do caractere ou mensagem de não encontrado.
- **Biblioteca:** string.h (strchr)

## 12) ctype.h - Verificação de caracteres

Leia um caractere e verifique se é letra (isalpha()), dígito (isdigit()), maiúscula (isupper()) ou minúscula (islower()).

- **Entrada:** um caractere.
- **Saída:** resultado das verificações.
- **Biblioteca:** ctype.h (isalpha, isdigit, isupper, islower)

## 13) ctype.h - Conversão de maiúscula/minúscula

Leia uma string e converta-a para maiúscula usando toupper() e depois para minúscula usando tolower().

- **Entrada:** uma string.
- **Saída:** a string em maiúscula e em minúscula.
- **Biblioteca:** ctype.h (toupper, tolower)

## 14) stdlib.h - Geração de números aleatórios

Gere 5 números aleatórios entre 1 e 100 usando rand() e srand() da biblioteca stdlib.h. Exiba os números.

- **Entrada:** não há.
- **Saída:** 5 números aleatórios entre 1 e 100.
- **Biblioteca:** stdlib.h (rand, srand)

## 15) time.h - Usando time() para seed aleatória

Gere 5 números aleatórios usando srand(time(NULL)) para melhor randomização da biblioteca time.h. Exiba os números.

- **Entrada:** não há.
- **Saída:** 5 números aleatórios entre 1 e 100.
- **Biblioteca:** time.h (time), stdlib.h (rand, srand)

## 16) math.h - Distância euclidiana

Leia as coordenadas de dois pontos (x1, y1, x2, y2) e calcule a distância euclidiana usando sqrt() e pow().

- **Entrada:** quatro números reais (x1, y1, x2, y2).
- **Saída:** a distância entre os dois pontos.
- **Biblioteca:** math.h (sqrt, pow)

## 17) math.h - Logaritmo

Leia um número real positivo e calcule: logaritmo natural (log()), logaritmo base 10 (log10()).

- **Entrada:** um número real positivo.
- **Saída:** logaritmo natural e logaritmo base 10 do número.
- **Biblioteca:** math.h (log, log10)

## 18) math.h - Exponencial

Leia um número real e calcule sua exponencial (e^x) usando exp() da biblioteca math.h.

- **Entrada:** um número real.
- **Saída:** a exponencial do número.
- **Biblioteca:** math.h (exp)

## 19) string.h e math.h - Validação e cálculo

Leia uma string contendo um número. Converta-a em número usando atof() ou strtof(), valide e calcule sua raiz quadrada.

- **Entrada:** uma string representando um número real.
- **Saída:** o número convertido e sua raiz quadrada.
- **Biblioteca:** stdlib.h (atof), math.h (sqrt)

## 20) Programa completo - Simulador de dado com funções úteis

Implemente um simulador de lançamento de dado. Leia quantas vezes lançar o dado (1-6). Use rand(), time(), math.h para cálculos de probabilidade (frequência de cada face). Exiba os resultados.

- **Entrada:** número de lançamentos.
- **Saída:** frequência de cada face do dado e percentuais.
- **Biblioteca:** stdlib.h (rand, srand), time.h (time), math.h (para cálculos de percentual)
