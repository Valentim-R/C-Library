# C-Library
This repository is part of Libraries project, this is the C part of this

Bibliotecas inclusas:
  windows.h: Fornece a funcionalidade necessária para interagir com o sistema operacional Windows.
  stdio.h: Fornece as funções básicas de entrada e saída, como printf e getch.
  stdlib.h: Fornece funções utilitárias, como system, atoi e atof.
  
  
Declaração de variáveis globais:
  i, dec, ii, xi: Variáveis inteiras utilizadas em várias partes do código.
  xf, xfdec: Variáveis de ponto flutuante (float) utilizadas em várias partes do código.
  a, b: Arrays de caracteres utilizados para armazenar valores de entrada.


Função cls:
  Essa função chama o comando system("cls") para limpar a tela do console.


Função ent:
  Recebe um inteiro ent como parâmetro e imprime várias quebras de linha no console com base no valor de ent.


Função StrScan:
  Recebe um array de caracteres vet e um inteiro tam como parâmetros.
  Utiliza ZeroMemory para limpar o array vet.
  Inicia um loop do-while para ler caracteres do console até que a tecla "Enter" seja pressionada.
  Dentro do loop, lê um caractere da entrada utilizando getch.
  Se o caractere for um espaço em branco, um dígito ou uma letra, e o tamanho do array vet não tiver sido excedido, o caractere é       armazenado em vet e impresso no console.
  Se o caractere for o "Backspace" (tecla de apagar) e o tamanho do array vet for maior que zero, o último caractere é removido do array e a posição no console é atualizada para refletir essa remoção.
  O loop continua até que a tecla "Enter" seja pressionada.
  Ao final da função, o array vet contém a entrada digitada pelo usuário.


Função NumDecScan:
  Essa função é semelhante à função chscan, mas é específica para a leitura de números decimais (float).
  Utiliza um array a para armazenar os caracteres digitados.
  Lê os caracteres do console, permitindo apenas dígitos, o caractere de ponto decimal e o caractere de sinal negativo.
  A função converte o array a em um número decimal usando atof e retorna o valor convertido.


Função NumDecScanNn:
  Essa função é semelhante à função NumDecScan, mas não permite números negativos.
  Apenas dígitos e o caractere de ponto decimal são permitidos.


Função NumIntScan:
  Essa função é semelhante às funções anteriores, mas é específica para a leitura de números inteiros.
  Permite apenas dígitos e o caractere de sinal negativo
  Utiliza um array a para armazenar os caracteres digitados.
  Lê os caracteres do console, permitindo apenas dígitos e o caractere de sinal negativo.
  A função converte o array a em um número inteiro usando atoi e retorna o valor convertido.


Função NumIntScanNn:
  Essa função é semelhante à função NumIntScan, mas não permite números negativos.
  Apenas dígitos são permitidos.
  
  
 No geral, essas funções são projetadas para lidar com a entrada de dados no console. Elas permitem a leitura de diferentes tipos de valores (números inteiros, números decimais) e também incluem a funcionalidade de permitir apenas determinados caracteres de entrada, como dígitos, letras e espaços em branco. Além disso, há uma função cls para limpar a tela do console e uma função ent para imprimir quebras de linha
