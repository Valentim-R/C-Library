#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

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

char chscan(char vet[], int tam)
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

float HrsDecScan()
{

    ZeroMemory(a, 500);
    ZeroMemory(b, 500);

    do
    {
        A = getch();
        if (dec == 0)
        {
            if (isdigit(A) != 0)
            {
                a[i] = A;
                printf("%c", A);
                i++;
            }
            else if (A == '.' || A == ',')
            {
                printf("%c", A);
                dec = 1;
            }
            else if (A == 8 && i > 0)
            {
                printf("\b \b");
                i--;
                a[i] = NULL;
            }
        }
        else if (dec == 1)
        {
            if (isdigit(A) != 0)
            {
                b[ii] = A;
                printf("%c", A);
                ii++;
            }
            else if (A == 8 && ii > 0)
            {
                printf("\b \b");
                ii--;
                b[ii] = NULL;
            }
            else if (dec == 1 && ii == 0)
            {
                printf("\b \b");
                ZeroMemory(b, 500);
                dec = 0;
            }
        }
    } while (A != 13);

    xfdec = atoi(b);
    xfdec = xfdec * 0.60;
    for (; ii > 0; ii--)
    {
        xfdec = xfdec / 10;
    }
    xf = atoi(a);
    xf = xf + xfdec;

    return xf;
}
