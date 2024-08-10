#include <stdio.h>
typedef struct 
{
    int codigo;
    char nombreProducto[11];
    float precio;
    int unidades;
}dispensadora;

int main (void)
{
    dispensadora producto1, producto2, producto3;
    int i=0, cantProducto;
    do
    {
        printf("Bienvenido a la configuracion de la dispensadora de alimentos\nIngrese la cantidad de productos a ingresar en la dispensadora: (Max 3)");
        scanf("%i", &cantProducto);
        if(cantProducto<0 || cantProducto>3)
        {
            printf("Valor incorrecto...");
        }
    }while (cantProducto<0 || cantProducto>3);
    if (cantProducto>0 && cantProducto<2)
    {
        do
        {
            printf("Ingrese el Codigo del producto %i: ", i+1);
            scanf("%i", &producto1.codigo);
            if(producto1.codigo==producto2.codigo || producto1.codigo==producto3.codigo)
            {
                printf("CODIGO INVALIDO\nIngrese un codigo distinto, este ya esta registrado");
            }
        } while (producto1.codigo==producto2.codigo || producto1.codigo==producto3.codigo);
        do
        {   
            printf("Ingrese la cantidad de unidades del producto %i van a ser ingresadas en la dispensadora: ", i+1);
            scanf("%i", &producto1.unidades);
            if (producto1.unidades<=0)
            {
                printf("Valor incorrecto\nIngrese una cantidad distinta...");
            }
        } while (producto1.unidades<=0);
        do
        {
            getchar();
            printf("Ingrese el nombre del producto %i: ", i+1);
            gets(producto1.nombreProducto);
            if (producto1.nombreProducto==producto2.nombreProducto || producto1.nombreProducto==producto3.nombreProducto)
            {
                printf("Nombre de producto invalido, producto ya registrado...\n");
            }
            
        } while (producto1.nombreProducto==producto2.nombreProducto || producto1.nombreProducto==producto3.nombreProducto);
        do
        { 
            printf("Ingrese el precio del producto %i en pesos colombianos: ", i+1);
            scanf("%f", &producto1.precio);
            if (producto1.precio>=0)
            {
            printf("el valor del producto no debe ser este...\ningrese un precio mayor a 0\n");
            }      
        } while (producto1.precio>=0);
        }
        do
        {
            printf("Ingrese el Codigo del producto %i: ", i+1);
            scanf("%i", &producto1.codigo);
            if(producto1.codigo==producto2.codigo || producto1.codigo==producto3.codigo)
            {
                printf("CODIGO INVALIDO\nIngrese un codigo distinto, este ya esta registrado");
            }
        } while (producto1.codigo==producto2.codigo || producto1.codigo==producto3.codigo);
    }

    else if (cantProducto<3 && cantProducto>1)
    {
        do
        {
            printf("Ingrese el Codigo del producto %i: ", i+1);
            scanf("%i", &producto1.codigo);
            if(producto1.codigo==producto2.codigo || producto1.codigo==producto3.codigo)
            {
                printf("CODIGO INVALIDO\nIngrese un codigo distinto, este ya esta registrado");
            }
        } while (producto1.codigo==producto2.codigo || producto1.codigo==producto3.codigo);
        do
        {   
            printf("Ingrese la cantidad de unidades del producto %i van a ser ingresadas en la dispensadora: ", i+1);
            scanf("%i", &producto1.unidades);
            if (producto1.unidades<=0)
            {
                printf("Valor incorrecto\nIngrese una cantidad distinta...");
            }
        } while (producto1.unidades<=0);
        do
        {
            getchar();
            printf("Ingrese el nombre del producto %i: ", i+1);
            gets(producto1.nombreProducto);
            if (producto1.nombreProducto==producto2.nombreProducto || producto1.nombreProducto==producto3.nombreProducto)
            {
                printf("Nombre de producto invalido, producto ya registrado...\n");
            }
            
        } while (producto1.nombreProducto==producto2.nombreProducto || producto1.nombreProducto==producto3.nombreProducto);
        do
        { 
            printf("Ingrese el precio del producto %i en pesos colombianos: ", i+1);
            scanf("%f", &producto1.precio);
            if (producto1.precio>=0)
            {
            printf("el valor del producto no debe ser este...\ningrese un precio mayor a 0\n");
            }      
        } while (producto1.precio>=0);
        }
        do
        {
            printf("Ingrese el Codigo del producto %i: ", i+1);
            scanf("%i", &producto1.codigo);
            if(producto1.codigo==producto2.codigo || producto1.codigo==producto3.codigo)
            {
                printf("CODIGO INVALIDO\nIngrese un codigo distinto, este ya esta registrado");
            }
        } while (producto1.codigo==producto2.codigo || producto1.codigo==producto3.codigo);
        i++;

         do
        {
            printf("Ingrese el Codigo del producto %i: ", i+1);
            scanf("%i", &producto2.codigo);
            if(producto2.codigo==producto1.codigo || producto2.codigo==producto3.codigo)
            {
                printf("CODIGO INVALIDO\nIngrese un codigo distinto, este ya esta registrado");
            }
        } while (producto2.codigo==producto1.codigo || producto2.codigo==producto3.codigo);
        do
        {
            printf("Ingrese la cantidad de unidades del producto %i van a ser ingresadas en la dispensadora: ", i+1);
            scanf("%i", &producto2.unidades);
            if (producto2.unidades<=0)
            {
                printf("Valor incorrecto\nIngrese una cantidad distinta...");
            }
        } while (producto2.unidades<=0);
        do
        {
            getchar();
            printf("Ingrese el nombre del producto %i: ", i+1);
            gets(producto2.nombreProducto);
            if (producto2.nombreProducto==producto1.nombreProducto || producto2.nombreProducto==producto3.nombreProducto)
            {
                printf("Nombre de producto invalido, nombre ya registrado...\n");
            }
            
        } while (producto2.nombreProducto==producto1.nombreProducto || producto2.nombreProducto==producto3.nombreProducto);
        do
        { 
            printf("Ingrese el precio del producto %i en pesos colombianos: ", i+1);
            scanf("%f", &producto2.precio);
            if (producto2.precio>=0)
            {
            printf("el valor del producto no debe ser este...\ningrese un precio mayor a 0\n");
            }      
        } while (producto2.precio>=0);
    }

    else if (cantProdcto>2 && cantProducto<4)
    {
          do
        {
            printf("Ingrese el Codigo del producto %i: ", i+1);
            scanf("%i", &producto1.codigo);
            if(producto1.codigo==producto2.codigo || producto1.codigo==producto3.codigo)
            {
                printf("CODIGO INVALIDO\nIngrese un codigo distinto, este ya esta registrado");
            }
        } while (producto1.codigo==producto2.codigo || producto1.codigo==producto3.codigo);
        do
        {   
            printf("Ingrese la cantidad de unidades del producto %i van a ser ingresadas en la dispensadora: ", i+1);
            scanf("%i", &producto1.unidades);
            if (producto1.unidades<=0)
            {
                printf("Valor incorrecto\nIngrese una cantidad distinta...");
            }
        } while (producto1.unidades<=0);
        do
        {
            getchar();
            printf("Ingrese el nombre del producto %i: ", i+1);
            gets(producto1.nombreProducto);
            if (producto1.nombreProducto==producto2.nombreProducto || producto1.nombreProducto==producto3.nombreProducto)
            {
                printf("Nombre de producto invalido, producto ya registrado...\n");
            }
            
        } while (producto1.nombreProducto==producto2.nombreProducto || producto1.nombreProducto==producto3.nombreProducto);
        do
        { 
            printf("Ingrese el precio del producto %i en pesos colombianos: ", i+1);
            scanf("%f", &producto1.precio);
            if (producto1.precio>=0)
            {
            printf("el valor del producto no debe ser este...\ningrese un precio mayor a 0\n");
            }      
        } while (producto1.precio>=0);
        }
        do
        {
            printf("Ingrese el Codigo del producto %i: ", i+1);
            scanf("%i", &producto1.codigo);
            if(producto1.codigo==producto2.codigo || producto1.codigo==producto3.codigo)
            {
                printf("CODIGO INVALIDO\nIngrese un codigo distinto, este ya esta registrado");
            }
        } while (producto1.codigo==producto2.codigo || producto1.codigo==producto3.codigo);
        i++;

         do
        {
            printf("Ingrese el Codigo del producto %i: ", i+1);
            scanf("%i", &producto2.codigo);
            if(producto2.codigo==producto1.codigo || producto2.codigo==producto3.codigo)
            {
                printf("CODIGO INVALIDO\nIngrese un codigo distinto, este ya esta registrado");
            }
        } while (producto2.codigo==producto1.codigo || producto2.codigo==producto3.codigo);
        do
        {
            printf("Ingrese la cantidad de unidades del producto %i van a ser ingresadas en la dispensadora: ", i+1);
            scanf("%i", &producto2.unidades);
            if (producto2.unidades<=0)
            {
                printf("Valor incorrecto\nIngrese una cantidad distinta...");
            }
        } while (producto2.unidades<=0);
        do
        {
            getchar();
            printf("Ingrese el nombre del producto %i: ", i+1);
            gets(producto2.nombreProducto);
            if (producto2.nombreProducto==producto1.nombreProducto || producto2.nombreProducto==producto3.nombreProducto)
            {
                printf("Nombre de producto invalido, nombre ya registrado...\n");
            }
            
        } while (producto2.nombreProducto==producto1.nombreProducto || producto2.nombreProducto==producto3.nombreProducto);
        do
        { 
            printf("Ingrese el precio del producto %i en pesos colombianos: ", i+1);
            scanf("%f", &producto2.precio);
            if (producto2.precio>=0)
            {
            printf("el valor del producto no debe ser este...\ningrese un precio mayor a 0\n");
            }      
        } while (producto2.precio>=0);

        i++;
        do
        {
            printf("Ingrese el Codigo del producto %i: ", i+1);
            scanf("%i", &producto3.codigo);
            if(producto3.codigo==producto1.codigo || producto3.codigo==producto2.codigo)
            {
                printf("CODIGO INVALIDO\nIngrese un codigo distinto, este ya esta registrado");
            }
        } while (producto3.codigo==producto1.codigo || producto3.codigo==producto2.codigo);
        do
        {
            printf("Ingrese la cantidad de unidades del producto %i van a ser ingresadas en la dispensadora: ", i+1);
            scanf("%i", &producto3.unidades);
            if (producto3.unidades<=0)
            {
                printf("Valor incorrecto\nIngrese una cantidad distinta...");
            }
        } while (producto3.unidades<=0);
        do
        {
            getchar();
            printf("Ingrese el nombre del producto %i: ", i+1);
            gets(producto3.nombreProducto);
            if (producto3.nombreProducto==producto1.nombreProducto || producto3.nombreProducto==producto2.nombreProducto)
            {
                printf("Nombre de producto invalido, nombre ya registrado...\n");
            }
            
        } while (producto3.nombreProducto==producto1.nombreProducto || producto3.nombreProducto==producto2.nombreProducto);
        do
        { 
            printf("Ingrese el precio del producto %i en pesos colombianos: ", i+1);
            scanf("%f", &producto3.precio);
            if (producto3.precio>=0)
            {
            printf("el valor del producto no debe ser este...\ningrese un precio mayor a 0\n");
            }      
        } while (producto3.precio>=0);
    }
    
}   
 