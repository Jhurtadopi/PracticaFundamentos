#include<stdio.h>
int main ()
{
    int a, b, c;
    printf("Ingrese un numero: ");
    scanf("%i", &a);
    printf("Ingrese un otro numero: ");
    scanf("%i", &b);
    c=a+b;
    printf("la suma de los numeros es: %i", c);
    return 0;
}