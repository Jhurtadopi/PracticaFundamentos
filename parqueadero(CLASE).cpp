#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct{
	int numero1, numero2;
}PicoyPlaca;

int main(void){
	PicoyPlaca lunes;
	PicoyPlaca martes;
	PicoyPlaca miercoles;
	PicoyPlaca jueves;
	PicoyPlaca viernes;
	PicoyPlaca hoy;
	
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
	int opc, placa, cuposCarros=100, cuposMotos=60, vehiculo, carrosIngresados=0, motosIngresadas=0;
	char opcMenu;
	
	do{
		printf ("Ingrese el numero que indica el dia de la semana\n1.Lunes\n2.Martes\n3.Miercoles\n4.Jueves\n5.Viernes\n: ");
		scanf ("%i", &opc);
		if (opc<1 || opc>5){
			printf ("La opcion es incorrecta, vuelva a intentarlo\n");
		}
	}while (opc<1 || opc>5);
	
	switch (opc){
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
	do{
		getchar();
		printf("Menu de opciones.\nA.Carro\nB.Moto\nC.Salir\nOpcion: ");
		scanf("%c",&opcMenu);
		opcMenu=toupper(opcMenu);
		switch (opcMenu){
			case 'A':
				if (cuposCarros>carrosIngresados){
					printf("Si hay cupos");
				}
				else
				{
					printf("Si hay cupos");
				}
				break;
			case 'B':
				if (cuposMotos>motosIngresadas){
					printf("Si hay cupos");
				}
				else
				{
					printf("Si hay cupos");
				}
				break;
			case 'C':
				break;
			default:
				printf("Se equivoco, ingrese una opcion valida\n");
		}
	}while(opcMenu!='C');
}
