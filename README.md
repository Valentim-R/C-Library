# C-Library

# English

*This readme is only for the **MAIN** branch.*

This repository is part of the Libraries project, and this is its C part.

## Included Libraries:
  ### windows.h:
    Provides the necessary functionality to interact with the Windows operating system.
  ### stdio.h:
    Provides basic input and output functions, such as printf and getch.
  ### stdlib.h:
    Provides utility functions, such as system, atoi, and atof.
  
  
## Global Variable Declarations:
  - i, dec, ii, xi: Integer variables used in various parts of the code.
  - xf, xfdec: Floating-point variables (float) used in various parts of the code.
  - a, b: Character arrays used to store input values.


## `cls` Function:
  - This function is just an abbreviation for: `system("cls");`


## `ent` Function:
  - Inserts line breaks according to the received parameter.


## `StrScan` Function:
  - Receives a character array vet and an integer tam as parameters.
  - Uses ZeroMemory to clear the vet array.
  - Starts a do-while loop to read characters from the console until the "Enter" key is pressed.
  - Inside the loop, reads a character from input using getch.
  - If the character is a whitespace, digit, or letter, and the size of the vet array has not been exceeded, the character is
  stored in vet and printed to the console.
  - If the character is the "Backspace" key and the size of the vet array is greater than zero, the last character is removed
  from the array, and the console position is updated to reflect this removal.
  - The loop continues until the "Enter" key is pressed.
  - At the end of the function, the vet array contains the user's input.


## `NumDecScan` Function:
  - This function is similar to the `StrScan` function but is specific for reading decimal numbers (float).
  - Uses an array `a` to store the entered characters.
  - Reads characters from the console, allowing only digits, the decimal point character, and the negative sign character.
  - The function converts the `a` array into a decimal number using atof and returns the converted value.


## `NumDecScanNn` Function:
  - This function is similar to the `NumDecScan` function but does not allow negative numbers.
  - Only digits and the decimal point character are allowed.


## `NumIntScan` Function:
  - This function is similar to the previous functions but is specific for reading integer numbers.
  - Only digits and the negative sign character are allowed.
  - Uses an array `a` to store the entered characters.
  - Reads characters from the console, allowing only digits and the negative sign character.
  - The function converts the `a` array into an integer number using atoi and returns the converted value.


## `NumIntScanNn` Function:
  - This function is similar to the `NumIntScan` function but does not allow negative numbers.
  - Only digits are allowed.
  
  
In general, these functions are designed to handle data input in the console. They allow reading different types of 
values (integer numbers, decimal numbers) and also include the functionality to allow only certain input characters,
such as digits, letters, and whitespaces. Additionally, there is a cls function to clear the console screen and an ent
function to print line breaks.

# Portugues


*Este leia-me é apenas para o ramo **PRINCIPAL***

Este repositório faz parte do projeto Bibliotecas, esta é a parte C do mesmo

## Bibliotecas inclusas:
  ### windows.h:
    Fornece a funcionalidade necessária para interagir com o sistema operacional Windows.
  ### stdio.h:
    Fornece as funções básicas de entrada e saída, como printf e getch.
  ### stdlib.h: 
    Fornece funções utilitárias, como system, atoi e atof.
  
  
## Declaração de variáveis globais:
  - i, dec, ii, xi: Variáveis inteiras utilizadas em várias partes do código.
  - xf, xfdec: Variáveis de ponto flutuante (float) utilizadas em várias partes do código.
  - a, b: Arrays de caracteres utilizados para armazenar valores de entrada.


## Função `cls`:
  - Essa função é apenas uma abreviação para: `system("cls");`


## Função `ent`:
  - Faz quebras de linha de acordo com o numero recebido por parametro.


## Função `StrScan`:
  - Recebe um array de caracteres vet e um inteiro tam como parâmetros.
  - Utiliza ZeroMemory para limpar o array vet.
  - Inicia um loop do-while para ler caracteres do console até que a tecla "Enter" seja pressionada.
  - Dentro do loop, lê um caractere da entrada utilizando getch.
  - Se o caractere for um espaço em branco, um dígito ou uma letra, e o tamanho do array vet não tiver sido excedido, o caractere é       armazenado em vet e impresso no console.
  - Se o caractere for o "Backspace" (tecla de apagar) e o tamanho do array vet for maior que zero, o último caractere é removido do array e a posição no console é atualizada para refletir essa remoção.
  - O loop continua até que a tecla "Enter" seja pressionada.
  - Ao final da função, o array vet contém a entrada digitada pelo usuário.


## Função `NumDecScan`:
  - Essa função é semelhante à função `StrScan`, mas é específica para a leitura de números decimais (float).
  - Utiliza um array `a` para armazenar os caracteres digitados.
  - Lê os caracteres do console, permitindo apenas dígitos, o caractere de ponto decimal e o caractere de sinal negativo.
  - A função converte o array `a` em um número decimal usando atof e retorna o valor convertido.


## Função `NumDecScanNn`:
  - Essa função é semelhante à função `NumDecScan`, mas não permite números negativos.
  - Apenas dígitos e o caractere de ponto decimal são permitidos.


## Função `NumIntScan`:
  - Essa função é semelhante às funções anteriores, mas é específica para a leitura de números inteiros.
  - Permite apenas dígitos e o caractere de sinal negativo
  - Utiliza um array `a` para armazenar os caracteres digitados.
  - Lê os caracteres do console, permitindo apenas dígitos e o caractere de sinal negativo.
  - A função converte o array `a` em um número inteiro usando atoi e retorna o valor convertido.


## Função `NumIntScanNn`:
  - Essa função é semelhante à função NumIntScan, mas não permite números negativos.
  - Apenas dígitos são permitidos.
  
  
 No geral, essas funções são projetadas para lidar com a entrada de dados no console. Elas permitem a leitura de diferentes tipos de valores (números inteiros, números decimais) e também incluem a funcionalidade de permitir apenas determinados caracteres de entrada, como dígitos, letras e espaços em branco. Além disso, há uma função cls para limpar a tela do console e uma função ent para imprimir quebras de linha
