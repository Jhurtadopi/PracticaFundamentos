#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
	char nombre[25];
	int precio, cantidad, codigo;
	bool pagaIva;
}Producto;



int main(){
	Producto producto;
	int m1=1000, m2=500, m3=300;
	int cantidadM1=0, cantidadM2=0, cantidadM3=0;
	int devuelta=0;

	char opcIva[3];
	int efectivo;
	printf("Nombre: ");
	gets(producto.nombre);
	do{
		printf("Codigo: ");
		scanf("%i", &producto.codigo);
	}while (producto.codigo<=0);
	do{
		printf("Cantidad productos: ");
		scanf("%i", &producto.cantidad);
	}while (producto.cantidad<=0);
	do{
		getchar();
		printf("Paga Iva: (SI o NO)");
		gets(opcIva);
		strupr(opcIva);
	}while (strcmp(opcIva,"SI")!=0 && strcmp(opcIva,"NO")!=0);
	if (strcmp(opcIva,"SI")==0){
		producto.pagaIva=true;
	}
	else{
		producto.pagaIva=false;
	}
	
	do{
		printf("Efectivo: ");
		scanf("%i", &efectivo);
	}while (efectivo < producto.precio);
	devuelta = efecto-producto.precio;
	if (devuelta>=m1){
		cantidadM1=devuelta/m1;
		devuelta=devuelta-(cantidadM1*m1)M
	}
	else{
		
	}
	
	
}

