# C-Library

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
  This function is just an abbreviation for: `system("cls");`


## `ent` Function:
  Inserts line breaks according to the received parameter.


## `StrScan` Function:
  Receives a character array vet and an integer tam as parameters.
  Uses ZeroMemory to clear the vet array.
  Starts a do-while loop to read characters from the console until the "Enter" key is pressed.
  Inside the loop, reads a character from input using getch.
  If the character is a whitespace, digit, or letter, and the size of the vet array has not been exceeded, the character is
  stored in vet and printed to the console.
  If the character is the "Backspace" key and the size of the vet array is greater than zero, the last character is removed
  from the array, and the console position is updated to reflect this removal.
  The loop continues until the "Enter" key is pressed.
  At the end of the function, the vet array contains the user's input.


## `NumDecScan` Function:
  This function is similar to the `StrScan` function but is specific for reading decimal numbers (float).
  Uses an array `a` to store the entered characters.
  Reads characters from the console, allowing only digits, the decimal point character, and the negative sign character.
  The function converts the `a` array into a decimal number using atof and returns the converted value.


## `NumDecScanNn` Function:
  This function is similar to the `NumDecScan` function but does not allow negative numbers.
  Only digits and the decimal point character are allowed.


## `NumIntScan` Function:
  This function is similar to the previous functions but is specific for reading integer numbers.
  Only digits and the negative sign character are allowed.
  Uses an array `a` to store the entered characters.
  Reads characters from the console, allowing only digits and the negative sign character.
  The function converts the `a` array into an integer number using atoi and returns the converted value.


## `NumIntScanNn` Function:
  This function is similar to the `NumIntScan` function but does not allow negative numbers.
  Only digits are allowed.
  
  
In general, these functions are designed to handle data input in the console. They allow reading different types of 
values (integer numbers, decimal numbers) and also include the functionality to allow only certain input characters,
such as digits, letters, and whitespaces. Additionally, there is a cls function to clear the console screen and an ent
function to print line breaks.
