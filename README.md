# Português
## Descrição do Código

Este código em C é um exemplo de um programa que contém funções para ler diferentes tipos de dados da entrada do usuário. Ele utiliza algumas bibliotecas padrão do C, como `stdio.h`, `stdlib.h`, `ctype.h` e `conio.h`, além da biblioteca `windows.h`, que é específica para o sistema operacional Windows.

As principais funções do código são responsáveis por ler e armazenar strings, números inteiros e números decimais da entrada do usuário. Aqui está uma descrição detalhada de cada uma dessas funções:

- `void cls()`: Essa função não recebe parâmetros. Ela utiliza o comando `system("cls")` para limpar a tela do console. Isso garante que a saída seja exibida em uma tela limpa.

- `void ent(int ent)`: Essa função recebe um parâmetro `ent` do tipo `int`, que representa a quantidade de linhas em branco que devem ser inseridas na saída.

- `char StrScan(char vet[], int tam)`: Essa função recebe dois parâmetros: `vet`, que é um vetor de caracteres onde a string lida será armazenada, e `tam`, que representa o tamanho máximo da string. A função lê uma string da entrada do usuário e a armazena no vetor `vet`. Ela utiliza a função `getch()` para ler cada caractere digitado pelo usuário. O loop continua até que o usuário pressione a tecla Enter (`\n`). Durante a leitura, a função também permite que o usuário apague caracteres digitados errados pressionando a tecla Backspace (`\b`).

- `float NumDecScan()`: Essa função não recebe parâmetros. Ela lê um número decimal da entrada do usuário e o retorna como um valor de ponto flutuante (`float`). Assim como a função `StrScan()`, ela utiliza a função `getch()` para ler cada caractere digitado pelo usuário. A função também permite que o usuário apague caracteres digitados errados pressionando a tecla Backspace (`\b`). O número decimal lido é convertido para um valor de ponto flutuante usando a função `atof()` da biblioteca `stdlib.h`.

- `float NumDecScanNn()`: Essa função não recebe parâmetros. Ela é semelhante à função `NumDecScan()`, mas não permite números negativos. Ou seja, ela só permite a entrada de números decimais positivos.

- `int NumIntScan()`: Essa função não recebe parâmetros. Ela lê um número inteiro da entrada do usuário e o retorna como um valor inteiro (`int`). Ela utiliza a função `getch()` para ler cada caractere digitado pelo usuário. A função também permite que o usuário apague caracteres digitados errados pressionando a tecla Backspace (`\b`). O número inteiro lido é convertido para um valor inteiro usando a função `atoi()` da biblioteca `stdlib.h`.

- `int NumIntScanNn()`: Essa função não recebe parâmetros. Ela é semelhante à função `NumIntScan()`, mas não permite números negativos. Ou seja, ela só permite a entrada de números inteiros positivos.

## Como usar

1. Compile o código em um compilador C compatível.
2. Execute o programa resultante.
3. Siga as instruções exibidas na tela para inserir os dados desejados.


# English

## Code Description

This C code is an example of a program that contains functions to read different types of data from user input. It utilizes several standard C libraries such as `stdio.h`, `stdlib.h`, `ctype.h`, and `conio.h`, along with the `windows.h` library, which is specific to the Windows operating system.

The main functions in the code are responsible for reading and storing strings, integers, and floating-point numbers from user input. Here is a detailed description of each of these functions:

- `void cls()`: This function takes no parameters. It uses the `system("cls")` command to clear the console screen. This ensures that the output is displayed on a clean screen.

- `void ent(int ent)`: This function takes an `ent` parameter of type `int`, which represents the number of blank lines to be inserted in the output.

- `char StrScan(char vet[], int tam)`: This function takes two parameters: `vet`, which is a character array where the read string will be stored, and `tam`, which represents the maximum size of the string. The function reads a string from user input and stores it in the `vet` array. It uses the `getch()` function to read each character entered by the user. The loop continues until the user presses the Enter key (`\n`). During the input, the function also allows the user to delete wrongly typed characters by pressing the Backspace key (`\b`).

- `float NumDecScan()`: This function takes no parameters. It reads a decimal number from user input and returns it as a floating-point value (`float`). Similar to the `StrScan()` function, it uses the `getch()` function to read each character entered by the user. The function also allows the user to delete wrongly typed characters by pressing the Backspace key (`\b`). The read decimal number is converted to a floating-point value using the `atof()` function from the `stdlib.h` library.

- `float NumDecScanNn()`: This function takes no parameters. It is similar to the `NumDecScan()` function but does not allow negative numbers. In other words, it only allows the input of positive decimal numbers.

- `int NumIntScan()`: This function takes no parameters. It reads an integer number from user input and returns it as an integer value (`int`). It uses the `getch()` function to read each character entered by the user. The function also allows the user to delete wrongly typed characters by pressing the Backspace key (`\b`). The read integer number is converted to an integer value using the `atoi()` function from the `stdlib.h` library.

- `int NumIntScanNn()`: This function takes no parameters. It is similar to the `NumIntScan()` function but does not allow negative numbers. In other words, it only allows the input of positive integer numbers.

## How to Use

1. Compile the code using a compatible C compiler.
2. Run the resulting program.
3. Follow the instructions displayed on the screen to enter the desired data.
