#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

void cls()
{
    system("cls");
}

void ent(int ent)
{
    for (int i = 0; i < ent; i++)
    {
        printf("\n");
    }
}

void StrScan(char vet[], int tam)
{
    int i = 0;
    char A;
    ZeroMemory(vet, tam);

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

float NumDecScan(int tam)
{
    if (tam == 0)
    {
        tam = 100;
    }

    char a[tam];
    char A;
    int i = 0;
    float x = 0;
    ZeroMemory(a, tam);

    do
    {
        A = getch();

        if ((isdigit(A) != 0 || A == '-' || A == '.') && tam > i)
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
    x = atof(a);
    return x;
}

float NumDecScanNn(int tam)
{
    if (tam == 0)
    {
        tam = 100;
    }

    char a[tam];
    char A;
    int i = 0;
    float x = 0;
    ZeroMemory(a, tam);

    do
    {
        A = getch();
        if ((isdigit(A) != 0 || A == '.') && tam > i)
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
    x = atof(a);
    return x;
}

int NumIntScan(int tam)
{
    if (tam == 0)
    {
        tam = 100;
    }

    int i = 0;
    char a[tam];
    char A;
    int x = 0;
    ZeroMemory(a, tam);

    do
    {
        A = getch();
        if ((isdigit(A) != 0 || A == '-') && tam > i)
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
    x = atoi(a);
    return x;
}

int NumIntScanNn(int tam)
{
    if (tam == 0)
    {
        tam = 100;
    }

    int i = 0;
    char a[tam];
    char A;
    int x = 0;
    ZeroMemory(a, tam);

    do
    {
        A = getch();
        if ((isdigit(A) != 0) && tam > i)
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
    x = atoi(a);
    return x;
}
