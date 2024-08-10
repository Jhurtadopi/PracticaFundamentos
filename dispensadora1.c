#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

typedef struct {
    int codigo;
    char nombreProducto[11];
    char tieneIva;
    bool iva;
    int precio;
    int unidades;
} dispensadora;
typedef struct 
{
    int valor, cantidad;
} Dinero;

int main() 
{
    dispensadora producto1 = {0, "", 0.0, 0.0, 0};
    dispensadora producto2 = {0, "", 0.0, 0.0, 0};
    dispensadora producto3 = {0, "", 0.0, 0.0, 0};
    dispensadora productoHoy;
    Dinero moneda1 = {0, 0};
    Dinero moneda2 = {0, 0};
    Dinero moneda3 = {0, 0};
    Dinero monedaHoy;

    int i = 0;
    int ventaValor;
    int devueltas;
    float valorIva;
    char venta;
    char cicloDispensadora= 'S';


    printf("solo puedes ingresar tres tipos de producto\n");
    do
    {
        printf("Antes de empezar ingrese el valor de iva en decimal (0.0-1):  ");
        scanf("%f", &valorIva);
    } while (valorIva<0.0  || valorIva>1);
     
    do 
    {
        printf("Ingrese el Codigo del producto %i: ", i+1);
        scanf("%i", &producto1.codigo);
        if (producto1.codigo == producto2.codigo || producto1.codigo == producto3.codigo) 
        {
            printf("CODIGO INVALIDO\nIngrese un codigo distinto, este ya esta registrado\n");
        }
        } while (producto1.codigo == producto2.codigo || producto1.codigo == producto3.codigo);

    do 
    {
        printf("Ingrese la cantidad de unidades del producto %i que seran ingresadas en la dispensadora: ", i+1);
        scanf("%i", &producto1.unidades);
        if (producto1.unidades <= 0) 
        {
            printf("Valor incorrecto\nIngrese una cantidad distinta...\n");
        }
    } while (producto1.unidades <= 0);

    getchar(); 

    do 
    {
        printf("Ingrese el nombre del producto %i: ", i+1);
        fgets(producto1.nombreProducto, 11, stdin);
        if (strcmp(producto1.nombreProducto, producto2.nombreProducto) == 0 || strcmp(producto1.nombreProducto, producto3.nombreProducto) == 0) 
        {
            printf("Nombre de producto invalido, producto ya registrado...\n");
        }
    } while (strcmp(producto1.nombreProducto, producto2.nombreProducto) == 0 || strcmp(producto1.nombreProducto, producto3.nombreProducto) == 0);
    do
    {
        printf("El producto %i debe pagar iva? S/N (En mayuscula): ", i+1);
        scanf("%c", &producto1.tieneIva);
        producto1.tieneIva = toupper(producto1.tieneIva);
        if (producto1.tieneIva == 'S' )
        {
            producto1.iva=true;
            printf("PRODUCTO REGISTRADO CON IVA\n");
        }
        else if (producto1.tieneIva == 'N' )
        {
            producto1.iva=false;
            printf("PRODUCTO REGISTRADO SIN IVA\n");
        }
    } while (producto1.tieneIva != 'S' && producto1.tieneIva != 'N' );
    
    do 
    {
        printf("Ingrese el precio del producto %i en pesos colombianos: ", i+1);
        scanf("%i", &producto1.precio);
        if (producto1.precio <= 0) 
        {
            printf("El valor del producto no debe ser este...\nIngrese un precio mayor a 0\n");
        }
    } while (producto1.precio <= 0);
    if(producto1.iva == true)
    {
        producto1.precio=(producto1.precio*valorIva)+producto1.precio;
        printf("El precio de venta de este producto (con iva): %1.f\n", producto1.precio);
    }
    else if (producto1.iva == false)
    {
        printf("El precio de venta de este producto (sin iva): %1.f\n ", producto1.precio);
    }
    
    i++;

    do 
    {
        printf("Ingrese el Codigo del producto %i: ", i+1);
        scanf("%i", &producto2.codigo);
        if (producto2.codigo == producto1.codigo || producto2.codigo == producto3.codigo) 
        {
            printf("CODIGO INVALIDO\nIngrese un codigo distinto, este ya esta registrado\n");
        }
    } while (producto2.codigo == producto1.codigo || producto2.codigo == producto3.codigo);

    do 
    {
        printf("Ingrese la cantidad de unidades del producto %i que seran ingresadas en la dispensadora: ", i+1);
        scanf("%i", &producto2.unidades);
        if (producto2.unidades <= 0)
        {
            printf("Valor incorrecto\nIngrese una cantidad distinta...\n");
        }
    } while (producto2.unidades <= 0);

    getchar(); 

    do 
    {
        printf("Ingrese el nombre del producto %i: ", i+1);
        fgets(producto2.nombreProducto, 11, stdin);
        if (strcmp(producto2.nombreProducto, producto1.nombreProducto) == 0 || strcmp(producto2.nombreProducto, producto3.nombreProducto) == 0)
        {
            printf("Nombre de producto invalido, nombre ya registrado...\n");
        }
    } while ((producto2.nombreProducto, producto1.nombreProducto) == 0 || strcmp(producto2.nombreProducto, producto3.nombreProducto) == 0);

    do
    {
        printf("El producto %i debe pagar iva? S/N (En mayuscula): ", i+1);
        scanf("%c", &producto2.tieneIva);
        producto2.tieneIva = toupper(producto2.tieneIva);
        if (producto2.tieneIva == 'S' )
        {
            producto2.iva=true;
            printf("PRODUCTO REGISTRADO CON IVA\n");
        }
        else if (producto2.tieneIva == 'N' )
        {
            producto2.iva=false;
            printf("PRODUCTO REGISTRADO SIN IVA\n");
        }
    } while (producto2.tieneIva != 'S' && producto2.tieneIva != 'N' );

    do 
    {
        printf("Ingrese el precio del producto %i en pesos colombianos: ", i+1);
        scanf("%i", &producto2.precio);
        if (producto2.precio <= 0) 
        {
            printf("El valor del producto no debe ser este...\nIngrese un precio mayor a 0\n");
        }
    } while (producto2.precio <= 0);

    if(producto2.iva == true)
    {
        producto2.precio=(producto2.precio*valorIva)+producto2.precio;
        printf("El precio de venta de este producto (con iva): %i\n", producto2.precio);
    }
    else if (producto2.iva == false)
    {
        printf("El precio de venta de este producto (sin iva): %i\n", producto2.precio);
    }
    

    i++;

    do 
    {
        printf("Ingrese el Codigo del producto %i: ", i+1);
        scanf("%i", &producto3.codigo);
        if (producto3.codigo == producto1.codigo || producto3.codigo == producto2.codigo) 
        {
            printf("CODIGO INVALIDO\nIngrese un codigo distinto, este ya esta registrado\n");
        }
    } while (producto3.codigo == producto1.codigo || producto3.codigo == producto2.codigo);

    do 
    {
        printf("Ingrese la cantidad de unidades del producto %i que seran ingresadas en la dispensadora: ", i+1);
        scanf("%i", &producto3.unidades);
        if (producto3.unidades <= 0)
        {
            printf("Valor incorrecto\nIngrese una cantidad distinta...\n");
        }
    } while (producto3.unidades <= 0);

    getchar(); 

    do 
    {
        printf("Ingrese el nombre del producto %i: ", i+1);
        fgets(producto3.nombreProducto, 11, stdin);
        if (strcmp(producto3.nombreProducto, producto1.nombreProducto) == 0 || strcmp(producto3.nombreProducto, producto2.nombreProducto) == 0) 
        {
            printf("Nombre de producto invalido, nombre ya registrado...\n");
        }
    } while (strcmp(producto3.nombreProducto, producto1.nombreProducto) == 0 || strcmp(producto3.nombreProducto, producto2.nombreProducto) == 0);

    do
    {
        printf("El producto %i debe pagar iva? S/N (En mayuscula): ", i+1);
        scanf("%c", &producto3.tieneIva);
        producto3.tieneIva = toupper(producto3.tieneIva);
        if (producto3.tieneIva == 'S' )
        {
            producto3.iva=true;
            printf("PRODUCTO REGISTRADO CON IVA\n");
        }
        else if (producto3.tieneIva == 'N' )
        {
            producto3.iva=false;
            printf("PRODUCTO REGISTRADO SIN IVA\n");
        }
    } while (producto3.tieneIva != 'S' && producto3.tieneIva != 'N' );


    do 
    {
        printf("Ingrese el precio del producto %i en pesos colombianos: ", i+1);
        scanf("%i", &producto3.precio);
        if (producto3.precio <= 0) 
        {
            printf("El valor del producto no debe ser este...\nIngrese un precio mayor a 0\n");
        }
    } while (producto3.precio <= 0);

    if(producto3.iva == true)
    {
        producto3.precio=(producto3.precio*valorIva)+producto3.precio;
        printf("El precio de venta de este producto (con iva): %i\n", producto3.precio);
    }
    else if (producto3.iva == false)
    {
        printf("El precio de venta de este producto (sin iva): %i\n ", producto3.precio);
    }
    do
    {
        printf("Ingrese el valor de la moneda 1: ");
        scanf("%i", &moneda1.valor);
        if (moneda1.valor<=0)
        {
            printf("Valor de moneda incorrecto...\nIntentelo de nuevo");
        }     
    }while (moneda1.valor<=0);
    
    do
    {
        printf("Ingrese el valor de la moneda 2: ");
        scanf("%i", &moneda2.valor);
        if (moneda2.valor<=0)
        {
            printf("Valor de moneda incorrecto...\nIntentelo de nuevo");
        }     
    } while (moneda2.valor<=0);

      do
    {
        printf("Ingrese el valor de la moneda 3: ");
        scanf("%i", &moneda3.valor);
        if (moneda3.valor<=0)
        {
            printf("Valor de moneda incorrecto...\nIntentelo de nuevo");
        }     
    } while (moneda3.valor<=0);

    do
    {
        printf("MENU DE PRODUCTOS...\n");
        if (producto1.unidades>0)
        {
            printf("Codigo: %i - Nombre: %s - precio: %i - cantidades: %i\n ", producto1.codigo, producto1.nombreProducto, producto1.precio, producto1.unidades);
        }

        if(producto2.unidades>0)
        {
            printf("Codigo: %i - Nombre: %s - precio: %i - cantidades: %i\n ", producto2.codigo, producto2.nombreProducto, producto2.precio, producto2.unidades);
        }

        if (producto3.unidades>0)
        {
            printf("Codigo: %i - Nombre: %s - precio: %i - cantidades: %i\n ", producto3.codigo, producto3.nombreProducto, producto3.precio, producto3.unidades);
        }

        printf("Ingrese el codigo del producto que desea comprar: ");
        scanf("%i", &productoHoy.codigo);
        if (productoHoy.codigo == producto1.codigo)
        {
            printf("precio: %i", producto1.precio);
            getchar();
            printf("Quieres continuar con la compra (S/N): ");
            scanf("%c", &venta);
            venta = toupper(venta);
            if (venta == 'S')
            {
                do
                {
                    printf("ingrese la moneda a utilizar (%i - %i - %i): ", moneda1.valor, moneda2.valor, moneda3.valor);
                    scanf("%i", &monedaHoy.valor);
                    if (monedaHoy.valor == moneda1.valor)
                    {
                        printf("cuantas monedas de la cantidad (%i) vas a ingresar: ", monedaHoy.valor);
                        scanf("%i", &moneda1.cantidad);      
                        ventaValor = ventaValor+(moneda1.cantidad*monedaHoy.valor);
                        if (ventaValor < producto1.precio)
                        {
                            printf("Te hacen falta %i de monedas...\n", producto1.precio-ventaValor);
                        }      
                    }

                    else if (monedaHoy.valor == moneda2.valor)
                    {
                        printf("cuantas monedas de la cantidad (%i) vas a ingresar: ", monedaHoy.valor);
                        scanf("%i", &moneda2.cantidad);      
                        ventaValor = ventaValor+(moneda2.cantidad*monedaHoy.valor);
                        if (ventaValor < producto1.precio)
                        {
                           printf("Te hacen falta %i de monedas...\n", producto1.precio-ventaValor);
                        }      
                    }
                    else if (monedaHoy.valor == moneda3.valor)
                    {
                        printf("cuantas monedas de la cantidad (%i) vas a ingresar: ", monedaHoy.valor);
                        scanf("%i", &moneda3.cantidad);      
                        ventaValor = ventaValor+(moneda3.cantidad*monedaHoy.valor);
                        if (ventaValor < producto1.precio)
                        {
                           printf("Te hacen falta %i de monedas...\n", producto1.precio-ventaValor);
                        }      
                    }
                    printf("Saldo: %i", ventaValor);
                } while (ventaValor < producto1.precio);

                if (ventaValor == producto1.precio)
                {
                    printf("Ya puede retirar el producto. Gracias por usar nuestros servicios...\nDevuelta Total: 0");
                }

                else if (ventaValor > producto1.precio)
                {
                    moneda1.cantidad=0;
                    moneda2.cantidad=0;
                    moneda3.cantidad=0;
                    printf("Ya puede retirar el producto. Gracias por usar nuestros servicios...\nDevuelta total: %i\n ", ventaValor-producto1.precio);
                    devueltas=ventaValor-producto1.precio;
                    if (devueltas>=moneda1.valor)
                    {
                        moneda1.cantidad=devueltas/moneda1.valor;
                        devueltas=devueltas-(moneda1.cantidad*moneda1.valor);
                    }
                    else if (devueltas>=moneda2.valor)
                    {
                        moneda2.cantidad=devueltas/moneda2.valor;
                        devueltas=devueltas-(moneda2.cantidad*moneda2.valor);
                    }
                    else if (devueltas>=moneda3.valor)
                    {
                        moneda3.cantidad=devueltas/moneda3.valor;
                        devueltas=devueltas-(moneda3.cantidad*moneda3.valor);
                    }
                    else if (devueltas<moneda3.valor)
                    {
                        devueltas=devueltas-moneda3.valor;
                        moneda3.cantidad++;
                    }
                     
                    if (moneda1.cantidad>0)
                    {
                        printf("Monedas de %i: %i\n", moneda1.valor, moneda1.cantidad);
                    }

                    else if (moneda2.cantidad>0)
                    {
                        printf("Monedas de %i: %i\n", moneda2.valor, moneda2.cantidad);
                    }

                    else if (moneda3.cantidad>0)
                    {
                        printf("Monedas de %i: %i\n", moneda3.valor, moneda3.cantidad);
                    }
                }
            }
            else if (venta == 'N')
            {
                printf("gracias por usar nuestros servicios...\n");
            }
            
            

        }
        else if (productoHoy.codigo == producto2.codigo)
        {
            printf("precio: %i\n", producto2.precio);
            getchar();
            printf("Quieres continuar con la compra (S/N): ");
            scanf("%c", &venta);
            venta = toupper(venta);
            if (venta == 'S')
            {
                do
                {
                    printf("ingrese la moneda a utilizar (%i - %i - %i): ", moneda1.valor, moneda2.valor, moneda3.valor);
                    scanf("%i", &monedaHoy.valor);
                    if (monedaHoy.valor == moneda1.valor)
                    {
                        printf("cuantas monedas de la cantidad (%i) vas a ingresar: ", monedaHoy.valor);
                        scanf("%i", &moneda1.cantidad);      
                        ventaValor = moneda1.cantidad*monedaHoy.valor;
                        if (ventaValor < producto1.precio)
                        {
                            printf("Te hacen falta %i de monedas...\n", producto1.precio-ventaValor);
                        }      
                    }

                    else if (monedaHoy.valor == moneda2.valor)
                    {
                        printf("cuantas monedas de la cantidad (%i) vas a ingresar: ", monedaHoy.valor);
                        scanf("%i", &moneda2.cantidad);      
                        ventaValor = moneda2.cantidad*monedaHoy.valor;
                        if (ventaValor < producto2.precio)
                        {
                           printf("Te hacen falta %i de monedas...\n", producto2.precio-ventaValor);
                        }      
                    }
                    else if (monedaHoy.valor == moneda3.valor)
                    {
                        printf("cuantas monedas de la cantidad (%i) vas a ingresar: ", monedaHoy.valor);
                        scanf("%i", &moneda3.cantidad);      
                        ventaValor = moneda3.cantidad*monedaHoy.valor;
                        if (ventaValor < producto2.precio)
                        {
                           printf("Te hacen falta %i de monedas...\n", producto2.precio-ventaValor);
                        }      
                    }
                } while (ventaValor < producto2.precio);

                if (ventaValor == producto2.precio)
                {
                    printf("Ya puede retirar el producto. Gracias por usar nuestros servicios...\nDevuelta Total: 0\n");
                }
                else if (ventaValor > producto2.precio)
                {
                    printf("Ya puede retirar el producto. Gracias por usar nuestros servicios...\nDevuelta total: %i\n ", ventaValor-producto1.precio);

                    if (ventaValor > producto2.precio)
                    {
                        moneda1.cantidad=0;
                        moneda2.cantidad=0;
                        moneda3.cantidad=0;
                        printf("Ya puede retirar el producto. Gracias por usar nuestros servicios...\nDevuelta total: %i\n ", ventaValor-producto1.precio);
                        devueltas=ventaValor-producto2.precio;
                        if (devueltas>=moneda1.valor)
                        {
                            moneda1.cantidad=devueltas/moneda1.valor;
                            devueltas=devueltas-(moneda1.cantidad*moneda1.valor);
                        }
                        else if (devueltas>=moneda2.valor)
                        {
                            moneda2.cantidad=devueltas/moneda2.valor;
                            devueltas=devueltas-(moneda2.cantidad*moneda2.valor);
                        }
                        else if (devueltas>=moneda3.valor)
                        {
                            moneda3.cantidad=devueltas/moneda3.valor;
                            devueltas=devueltas-(moneda3.cantidad*moneda3.valor);
                        }
                        else if (devueltas<moneda3.valor)
                        {
                            devueltas=devueltas-moneda3.valor;
                            moneda3.cantidad++;
                        }
                        
                        if (moneda1.cantidad>0)
                        {
                            printf("Monedas de %i: %i\n", moneda1.valor, moneda1.cantidad);
                        }

                        else if (moneda2.cantidad>0)
                        {
                            printf("Monedas de %i: %i\n", moneda2.valor, moneda2.cantidad);
                        }

                        else if (moneda3.cantidad>0)
                        {
                            printf("Monedas de %i: %i\n", moneda3.valor, moneda3.cantidad);
                        }
                    }
                }   
            }
            else if (venta == 'N')
            {
               printf("Gracias por usar nuestros servicios...");
            }
            
        }

        else if (productoHoy.codigo == producto3.codigo)
        {
            printf("precio: %i\n ", producto3.precio);
            getchar();
            printf("Quieres continuar con la compra (S/N): ");
            scanf("%c", &venta);
            venta = toupper(venta);
            if (venta == 'S')
            {
                do
                {
                    printf("ingrese la moneda a utilizar (%i - %i - %i): ", moneda1.valor, moneda2.valor, moneda3.valor);
                    scanf("%i", &monedaHoy.valor);
                    if (monedaHoy.valor == moneda1.valor)
                    {
                        printf("cuantas monedas de la cantidad (%i) vas a ingresar: ", monedaHoy.valor);
                        scanf("%i", &moneda1.cantidad);      
                        ventaValor = moneda1.cantidad*monedaHoy.valor;
                        if (ventaValor < producto3.precio)
                        {
                            printf("Te hacen falta %i de monedas...\n", producto1.precio-ventaValor);//error con las variables una int otra float|<|
                        }      
                    }

                    else if (monedaHoy.valor == moneda2.valor)
                    {
                        printf("cuantas monedas de la cantidad (%i) vas a ingresar: ", monedaHoy.valor);
                        scanf("%i", &moneda2.cantidad);      
                        ventaValor = moneda2.cantidad*monedaHoy.valor;
                        if (ventaValor < producto3.precio)
                        {
                           printf("Te hacen falta %i de monedas...\n", producto1.precio-ventaValor);
                        }      
                    }
                    else if (monedaHoy.valor == moneda3.valor)
                    {
                        printf("cuantas monedas de la cantidad (%i) vas a ingresar: ", monedaHoy.valor);
                        scanf("%i", &moneda3.cantidad);      
                        ventaValor = moneda3.cantidad*monedaHoy.valor;
                        if (ventaValor < producto3.precio)
                        {
                           printf("Te hacen falta %i de monedas...\n", producto1.precio-ventaValor);
                        }      
                    }
                } while (ventaValor < producto3.precio);

                if (ventaValor == producto3.precio)
                {
                    printf("Ya puede retirar el producto. Gracias por usar nuestros servicios...\nDevuelta Total: 0");
                }
                else if (ventaValor > producto3.precio)
                {
                    printf("Ya puede retirar el producto. Gracias por usar nuestros servicios...\nDevuelta total: %i\n ", ventaValor-producto1.precio);
                    
                    if (ventaValor > producto1.precio)
                    {
                        moneda1.cantidad=0;
                        moneda2.cantidad=0;
                        moneda3.cantidad=0;
                        printf("Ya puede retirar el producto. Gracias por usar nuestros servicios...\nDevuelta total: %i\n ", ventaValor-producto1.precio);
                        devueltas=ventaValor-producto3.precio;
                        if (devueltas>=moneda1.valor)
                        {
                            moneda1.cantidad=devueltas/moneda1.valor;
                            devueltas=devueltas-(moneda1.cantidad*moneda1.valor);
                        }
                        else if (devueltas>=moneda2.valor)
                        {
                            moneda2.cantidad=devueltas/moneda2.valor;
                            devueltas=devueltas-(moneda2.cantidad*moneda2.valor);
                        }
                        else if (devueltas>=moneda3.valor)
                        {
                            moneda3.cantidad=devueltas/moneda3.valor;
                            devueltas=devueltas-(moneda3.cantidad*moneda3.valor);
                        }
                        else if (devueltas<moneda3.valor)
                        {
                            devueltas=devueltas-moneda3.valor;
                            moneda3.cantidad++;
                        }
                        
                        if (moneda1.cantidad>0)
                        {
                            printf("Monedas de %i: %i\n", moneda1.valor, moneda1.cantidad);
                        }

                        else if (moneda2.cantidad>0)
                        {
                            printf("Monedas de %i: %i\n", moneda2.valor, moneda2.cantidad);
                        }

                        else if (moneda3.cantidad>0)
                        {
                            printf("Monedas de %i: %i\n", moneda3.valor, moneda3.cantidad);
                        }
                    }

                    if (moneda1.cantidad>0)
                    {
                        printf("Monedas de %i: %i\n", moneda1.valor, moneda1.cantidad);
                    }

                    else if (moneda2.cantidad>0)
                    {
                        printf("Monedas de %i: %i\n", moneda2.valor, moneda2.cantidad);
                    }

                    else if (moneda3.cantidad>0)
                    {
                        printf("Monedas de %i: %i\n", moneda3.valor, moneda3.cantidad);
                    }
                }   
            }
            else if (venta == 'N')
            {
               printf("Gracias por usar nuestros servicios...\n");
            }
        }
        else
        {
            printf("CODIGO NO REGISTRADO...\n");
        }
    }while (cicloDispensadora == 'S');
    return 0;
}


