# Português

## Descrição do Código

Este código em C é um exemplo de um programa que contém funções para ler diferentes tipos de dados a partir da entrada do usuário. Ele inclui várias bibliotecas padrão de C, como `windows.h`, `stdio.h`, `stdlib.h`, `ctype.h` e `conio.h`.

As principais funções no código são responsáveis por limpar a tela do console, inserir linhas em branco e ler strings, números inteiros e números de ponto flutuante do usuário. Aqui está uma descrição detalhada de cada função:

- `void cls()`: Esta função não recebe parâmetros e usa o comando `system("cls")` para limpar a tela do console.

- `void ent(int ent)`: Esta função recebe um parâmetro `ent` do tipo `int`, que representa o número de linhas em branco a serem inseridas na saída. Ela usa um loop para imprimir caracteres de nova linha (`\n`) e criar o número desejado de linhas em branco.

- `void StrScan(char vet[], int tam)`: Esta função recebe dois parâmetros: `vet`, que é um vetor de caracteres onde a string lida será armazenada, e `tam`, que representa o tamanho máximo da string. Ela lê uma string a partir da entrada do usuário e a armazena no vetor `vet`. A função utiliza a função `getch()` para ler cada caractere digitado pelo usuário. O loop continua até que o usuário pressione a tecla Enter (`\n`). Durante a entrada, a função também permite ao usuário excluir caracteres digitados incorretamente pressionando a tecla Backspace (`\b`).

- `float NumDecScan(int tam)`: Esta função recebe um parâmetro opcional `tam` do tipo `int`, que representa o tamanho máximo da entrada. Se `tam` não for fornecido ou for definido como 0, um tamanho padrão de 100 é usado. A função lê um número decimal a partir da entrada do usuário e o retorna como um valor de ponto flutuante (`float`). Semelhante à função `StrScan()`, ela usa a função `getch()` para ler cada caractere digitado pelo usuário. A função também permite ao usuário excluir caracteres digitados incorretamente pressionando a tecla Backspace (`\b`). O número decimal lido é convertido em um valor de ponto flutuante usando a função `atof()` da biblioteca `stdlib.h`.

- `float NumDecScanNn(int tam)`: Esta função é semelhante à `NumDecScan()`, mas não permite números negativos. Ela lê um número decimal positivo a partir da entrada do usuário e o retorna como um valor de ponto flutuante.

- `int NumIntScan(int tam)`: Esta função é semelhante à `NumDecScan()`, mas lê um número inteiro em vez de um número decimal. Ela retorna o número inteiro lido como um valor de inteiro (`int`).

- `int NumIntScanNn(int tam)`: Esta função é semelhante à `NumIntScan()`, mas não permite números negativos. Ela lê um número inteiro positivo a partir da entrada do usuário e o retorna como um valor de inteiro.

## Como Usar

1. Compile o código usando um compilador C compatível.
2. Execute o programa resultante.
3. Siga as instruções exibidas na tela para inserir os dados desejados.

# English


## Code Description

This C code is an example of a program that contains functions to read different types of data from user input. It includes various standard C libraries such as `windows.h`, `stdio.h`, `stdlib.h`, `ctype.h`, and `conio.h`.

The main functions in the code are responsible for clearing the console screen, inserting blank lines, and reading strings, integers, and floating-point numbers from the user. Here is a detailed description of each function:

- `void cls()`: This function takes no parameters and uses the `system("cls")` command to clear the console screen.

- `void ent(int ent)`: This function takes an `ent` parameter of type `int`, representing the number of blank lines to be inserted in the output. It uses a loop to print newline characters (`\n`) to create the desired number of blank lines.

- `void StrScan(char vet[], int tam)`: This function takes two parameters: `vet`, which is a character array where the read string will be stored, and `tam`, representing the maximum size of the string. It reads a string from user input and stores it in the `vet` array. It uses the `getch()` function to read each character entered by the user. The loop continues until the user presses the Enter key (`\n`). During the input, the function also allows the user to delete wrongly typed characters by pressing the Backspace key (`\b`).

- `float NumDecScan(int tam)`: This function takes an optional parameter `tam` of type `int`, representing the maximum size of the input. If `tam` is not provided or is set to 0, a default size of 100 is used. It reads a decimal number from user input and returns it as a floating-point value (`float`). Similar to the `StrScan()` function, it uses the `getch()` function to read each character entered by the user. The function also allows the user to delete wrongly typed characters by pressing the Backspace key (`\b`). The read decimal number is converted to a floating-point value using the `atof()` function from the `stdlib.h` library.

- `float NumDecScanNn(int tam)`: This function is similar to `NumDecScan()`, but it does not allow negative numbers. It reads a positive decimal number from user input and returns it as a floating-point value.

- `int NumIntScan(int tam)`: This function is similar to `NumDecScan()`, but it reads an integer number instead of a decimal number. It returns the read integer as an integer value (`int`).

- `int NumIntScanNn(int tam)`: This function is similar to `NumIntScan()`, but it does not allow negative numbers. It reads a positive integer number from user input and returns it as an integer value.

## How to Use

1. Compile the code using a compatible C compiler.
2. Run the resulting program.
3. Follow the instructions displayed on the screen to enter the desired data.
