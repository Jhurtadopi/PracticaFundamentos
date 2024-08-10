//argumentos y parametros
#include<stdio.h>
#include<string.h>

int sumarDosNumeros (int sumando1, int sumando2)
{
   return sumando1+sumando2;
}
float sumarDosNumerosFloat (float suamndo1, float sumando2)
{
    return suamndo1+sumando2;
}
int mayorAcero (num1)
{
    if (num1>0)
    {
        printf("el numero es mayor a cero");
    }
    else if (num1<0)
    {
        printf("el numero es menor a cero");
    }
}
int main ()
{
    int numero1;
    printf("ingrese un numero: ");
    scanf("%i", &numero1);
    printf("resultado: %i", mayorAcero(numero1));
}


int main ()
{
    float sumando1, sumando2;
    printf("Ingrese un numero: ");
    scanf("%f", &sumando1);
    printf("Ingrese un numero: ");
    scanf("%f", &sumando2);
    printf("Resultado: %f", sumarDosNumerosFloat(sumando1,sumando2));    
}
int main ()
{
    float sumando1, sumando2;
    printf("Ingrese un numero: ");
    scanf("%f", &sumando1);
    printf("Ingrese un numero: ");
    scanf("%f", &sumando2);
    printf("Resultado: %f", sumarDosNumeros(sumando1,sumando2));    
}




