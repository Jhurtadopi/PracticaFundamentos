#include <stdio.h>
#include <ctype.h>
typedef struct
{
    int numero1;
    int numero2;
}PicoPlaca;
int main (Void)
{
    int dia, numPlaca,  carrosIngresadosPp=0,  cuposCarros=100, cuposMotos=60,carrosIngresados=0, motosIngresadas=0;
    char opcMenu, salida='N';
    float dineroParqueadero, tarifaPp=15.000, tarifaN=3.000;
    PicoPlaca lunes, martes, miercoles, jueves, viernes, hoy;
    lunes.numero1=1;
	lunes.numero2=4;
	martes.numero1=5;
	martes.numero2=7;
	miercoles.numero1=3;
	miercoles.numero2=9;
	jueves.numero1=2;
	jueves.numero2=8;
	viernes.numero1=6;
	viernes.numero2=0;
    do
    {    
        printf("BIENVENIDO A ESTE SISTEMA...\n¿en que dia de la semana se encuentra:\n1.Lunes\n2.Martes\n3.Miercoles\n4.Jueves\n5.Viernes\nSELECCIONE EL NUMERO ASOCIADO A LA OPCION DESEADA: ");
        scanf("%i", &dia);
        getchar();
        if (dia<1 || dia>5)
        {
            printf("Valor incorrecto, intentelo nuevamente...\n");
        }    
    }while (dia<1 || dia>5);
    switch (dia)
    {
            case 1:
                hoy.numero1=lunes.numero1;
                hoy.numero2=lunes.numero2;
                break;
            case 2:
                hoy.numero1=martes.numero1;
                hoy.numero2=martes.numero2;
                break;
            case 3:
                hoy.numero1=miercoles.numero1;
                hoy.numero2=miercoles.numero2;
                break;
            case 4:
                hoy.numero1=jueves.numero1;
                hoy.numero2=jueves.numero2;
                break;
		    case 5:
			    hoy.numero1=viernes.numero1;
		        hoy.numero2=viernes.numero2;
			    break;
    }
    do
    {
        printf("Menu de opciones:\nA.Carro\nB.Moto\nC.SALIR\nSELECIONE LA LETRA ASOCIADA A LA OPCION DESEADA: ");
        scanf("%c", &opcMenu);
        opcMenu= toupper(opcMenu);
        getchar();
        switch (opcMenu)
        {
            case 'A':
                printf("MENU DE CARROS...\n");
                if (cuposCarros>carrosIngresados)
                {
                    do
                    {
                        printf("Si hay cupos...\nDigite el ultimo numero de la placa del automovil: ");
                        scanf("%i", &numPlaca);
                        if (numPlaca<0 || numPlaca>9)
                        {
                            printf("valor incorrecto, intentelo de nuevo...");
                        }
                    } while (numPlaca<0 || numPlaca>9);
                    if (numPlaca==hoy.numero1 || numPlaca==hoy.numero2)
                    {
                        printf("AUTOMOVIL CON PICO Y PLACA...\nEl valor del parqueadero es 15.000\n");
                        dineroParqueadero= dineroParqueadero+tarifaPp;
                        carrosIngresadosPp++; 
                    }
                    else
                    {
                        printf("AUTOMOVIL SIN PICO Y PLACA...\nEl valor del parqueadero es 3.000\n");
                        dineroParqueadero=dineroParqueadero+tarifaN;
                        carrosIngresados++; 
                    }
                
                }
                else
                {
                    printf("No pueden ingresar mas automoviles, no hay mas espacio...\n");
                }

                break;
                
            case 'B': 
                printf("MENU DE MOTOS...\n");
                if (cuposMotos>motosIngresadas)
                {
                    printf("Si hay cupos: (%i/%i)\n", cuposMotos, motosIngresadas);
                    motosIngresadas++;
                }
                else
                {
                    printf("No pueden ingresar mas motocicletas, no hay mas espacio (%i/%i)\n", cuposMotos, motosIngresadas);
                }
                break;
            case 'C':
                printf("elegiste la opcion de salir del programa.");
                salida='S';
                break;
            default:
                printf("Valor incorrecto, intentelo de nuevo...\n");
                break;
        }
        do
        {
            getchar();
            printf("Desea cerrar el parqueadero? S/N: ");
            scanf("%c", &salida);
            salida=toupper(salida);
            if (salida!='S' && salida!='N')
            {
                printf("valor incorrecto, intentelo de nuevo...");
            }
        } while (salida!='S' && salida!='N');   
        printf("DATOS DEL DIA:\n1.Total de dinero recaudado: %f\n2.Cantidad total de automoviles: %i\n3.Cantidad total de motos: %i\n4.Cantidad de carros con pico y placa: %i ",dineroParqueadero, carrosIngresados, motosIngresadas, carrosIngresadosPp);
    }while (salida=='N');
}
