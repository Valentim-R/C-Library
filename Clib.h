#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int i, dec, ii, xi;
float xf, xfdec;
char a[500];
char A;
char b[500];

void cls()
{
    system("cls");
}

void ent(int ent)
{
    for (i = 0; i <= ent; i++)
    {
        printf("\n");
    }
}

char StrScan(char vet[], int tam)
{
    ZeroMemory(vet, tam);
    i = 0;
    do
    {
        A = getch();
        if (A == 8 && i > 0)
        {
            printf("\b \b");
            i--;
            vet[i] = NULL;
        }
        else if ((isalpha(A) != 0 || isdigit(A) || A == ' ') && i < tam && A != 13)
        {
            vet[i] = A;
            printf("%c", vet[i]);
            i++;
        }
    } while (A != 13);
}

float NumDecScan()
{
    ZeroMemory(a, 500);
    i = 0;
    do
    {
        A = getch();
        if (isdigit(A) != 0 || A == '-' || A == '.')
        {
            a[i] = A;
            printf("%c", a[i]);
            i++;
        }
        else if (A == 8 && i > 0)
        {
            printf("\b \b");
            i--;
            a[i] = NULL;
        }
    } while (A != 13);
    xf = atof(a);
    return xf;
}

float NumDecScanNn()
{
    ZeroMemory(a, 500);
    i = 0;
    do
    {
        A = getch();
        if (isdigit(A) != 0 || A == '.')
        {
            a[i] = A;
            printf("%c", a[i]);
            i++;
        }
        else if (A == 8 && i > 0)
        {
            printf("\b \b");
            i--;
            a[i] = NULL;
        }
    } while (A != 13);
    xf = atof(a);
    return xf;
}

int NumIntScan()
{
    ZeroMemory(a, 500);
    i = 0;
    do
    {
        A = getch();
        if (isdigit(A) != 0 || A == '-')
        {
            a[i] = A;
            printf("%c", a[i]);
            i++;
        }
        else if (A == 8 && i > 0)
        {
            printf("\b \b");
            i--;
            a[i] = NULL;
        }
    } while (A != 13);
    xi = atoi(a);
    return xi;
}

int NumIntScanNn()
{
    ZeroMemory(a, 500);
    i = 0;
    do
    {
        A = getch();
        if (isdigit(A) != 0)
        {
            a[i] = A;
            printf("%c", a[i]);
            i++;
        }
        else if (A == 8 && i > 0)
        {
            printf("\b \b");
            i--;
            a[i] = NULL;
        }
    } while (A != 13);
    xi = atoi(a);
    return xi;
}
