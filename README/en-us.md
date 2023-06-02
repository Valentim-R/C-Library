# C-Library
*This reade me is only to **MAIN** branch*

This repository is part of the Libraries project, and this is the C part of it.

## Included libraries:
  ### windows.h:
  Provides the necessary functionality to interact with the Windows operating system.
  ### stdio.h:
  Provides basic input and output functions such as printf and getch.
  ### stdlib.h:
  Provides utility functions such as system, atoi, and atof.

## Global variable declarations:
  - i, dec, ii, xi: Integer variables used in various parts of the code.
  - xf, xfdec: Floating-point variables (float) used in various parts of the code.
  - a, b: Character arrays used to store input values.

## Function `cls`:
  This function calls the system("cls") command to clear the console screen.

## Function `ent`:
  Takes an integer `ent` as a parameter and prints multiple line breaks in the console based on the value of `ent`.

## Function `StrScan`:
  Takes a character array `vet` and an integer `tam` as parameters.
  Uses ZeroMemory to clear the `vet` array.
  Starts a do-while loop to read characters from the console until the "Enter" key is pressed.
  Within the loop, reads a character from the input using getch.
  If the character is a whitespace, a digit, or a letter, and the size of the `vet` array has not been exceeded, the character is stored in `vet` and printed to the console.
  If the character is the "Backspace" key and the size of the `vet` array is greater than zero, the last character is removed from the array, and the console position is updated to reflect this removal.
  The loop continues until the "Enter" key is pressed.
  At the end of the function, the `vet` array contains the input entered by the user.

## Function `NumDecScan`:
  This function is similar to the `StrScan` function but is specific to reading decimal numbers (float).
  Uses an array `a` to store the entered characters.
  Reads characters from the console, allowing only digits, the decimal point character, and the negative sign character.
  The function converts the `a` array into a decimal number using `atof` and returns the converted value.

## Function `NumDecScanNn`:
  This function is similar to the `NumDecScan` function but does not allow negative numbers.
  Only digits and the decimal point character are allowed.

## Function `NumIntScan`:
  This function is similar to the previous functions but is specific to reading integer numbers.
  Allows only digits and the negative sign character.
  Uses an array `a` to store the entered characters.
  Reads characters from the console, allowing only digits and the negative sign character.
  The function converts the `a` array into an integer using `atoi` and returns the converted value.

## Function `NumIntScanNn`:
  This function is similar to the `NumIntScan` function but does not allow negative numbers.
  Only digits are allowed.

Overall, these functions are designed to handle input data in the console. They allow reading different types of values (integers, decimals) and also include functionality to allow only specific input characters such as digits, letters, and whitespaces. Additionally, there is a `cls` function to clear the console screen and an `ent` function to print line breaks.
