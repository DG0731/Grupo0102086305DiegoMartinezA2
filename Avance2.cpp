#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>


using namespace std;
struct tienda
{
	int idcomprador, numoc, ano;
	string proveedor, nombre, clasificacion, caracteristicas, descripcion, genero;
	float subtotal, iva, total;

};

int main()
{
	tienda juego[3];
	int opcion, busqueda;

	do
	{
		printf("\t ***MENU OPCIONES*** \n");
		printf(" 1.-Alta \n 2.-Lista \n 3.-Eliminar \n 4.-Limpiar \n 5.-Salir \n");
		scanf("%d", &opcion);

		switch (opcion)
		{
		case 1:
			for (int i = 0; i < 3; i++)
			{
				juego[i].idcomprador = 20863050 + i;
				printf("ID COMPRADOR: %d \n", juego[i].idcomprador);
				int salida=1;
				do
				{
					printf("ingrese el num oc \n");
					scanf("%d", &juego[i].numoc);
				}
				while (juego[i].numoc == juego[i - 1].numoc || juego[i].numoc == juego[i - 2].numoc);
				printf("Que nombre tiene el articulo? \n");
				cin.ignore();
				getline(cin, juego[i].nombre);
				printf("Fecha de salida \n");
				scanf("%d" , &juego[i].ano);
				printf("Clasificacion del articulo \n");
				cin.ignore();
				getline(cin, juego[i].clasificacion);
				printf("Caracteristicas del articulo \n");
				cin.ignore();
				getline(cin, juego[i].caracteristicas);
				printf("Detalles del articulo \n");
				cin.ignore();
				getline(cin, juego[i].descripcion);
				printf("Genero del articulo \n");
				cin.ignore();
				getline(cin, juego[i].genero);
				printf("ingrese el proveedor \n");
				cin.ignore();
				getline(cin, juego[i].proveedor);
				printf("ingrese el subtotal \n");
				scanf("%f", &juego[i].subtotal);
				juego[i].iva = juego[i].subtotal * .16;
				juego[i].total = juego[i].subtotal + juego[i].iva;
			}
			break;

		case 2:
			int opc2;
			printf("1.- num OC \n 2.-Listas Vigentes");
			scanf("%d", &opc2);
			if (opc2 == 1)
			{
				printf("ingrese el ID del articulo");
				scanf("%d", &busqueda);
				for (int i = 0; i < 3; i++)
				{
					if (busqueda == juego[i].numoc)
					{
						printf("ID COMPRADOR: %d \n", juego[i].idcomprador);
						printf("num OC: %d \n", juego[i].numoc);
						printf("nombre: %s \n", juego[i].nombre.c_str());
						printf("fecha: %d \n", juego[i].ano);
						printf("clasificacion: %s \n", juego[i].clasificacion.c_str());
						printf("caracteristicas: %s \n", juego[i].caracteristicas.c_str());
						printf("detalles: %s \n", juego[i].descripcion.c_str());
						printf("genero: %s \n", juego[i].genero.c_str());
						printf("proveedor %s \n", juego[i].proveedor.c_str());
						printf("subtotal: %f \n", juego[i].subtotal);
						printf("iva: %f \n", juego[i].iva);
						printf("total: %f \n", juego[i].total);
					}
				}
			}
			else
			{
				for (int i = 0; i < 3; i++)
				{
					if (juego[i].numoc !=0)
					{
						printf("ID CONTRATO: %d \n", juego[i].idcomprador);
						printf("num OC: %d \n", juego[i].numoc);
						printf("nombre: %s \n", juego[i].nombre.c_str());
						printf("fecha: %d \n", juego[i].ano);
						printf("clasificacion: %s \n", juego[i].clasificacion.c_str());
						printf("caracteristicas: %s \n", juego[i].caracteristicas.c_str());
						printf("detalles: %s \n", juego[i].descripcion.c_str());
						printf("genero: %s \n", juego[i].genero.c_str());
						printf("proveedor %s \n", juego[i].proveedor.c_str());
						printf("subtotal: %f \n", juego[i].subtotal);
						printf("iva: %f \n", juego[i].iva);
						printf("total: %f \n", juego[i].total);
					}
				}
			}
			break;

		case 3:
			printf("ingrese el num oc");
			scanf("%d", &busqueda);
			for (int i = 0; i < 3; i++)
			{
				if (busqueda == juego[i].numoc)
				{
					juego[i].numoc = 0;
				}
			}
			break;

		case 4:
			system("cls");
			break;
		case 5:
			printf("saliendo... \n");
			break;
		default:
			printf("intente denuevo... \n");
			break;
		}
	} while (opcion != 5);
	system("pause");
}