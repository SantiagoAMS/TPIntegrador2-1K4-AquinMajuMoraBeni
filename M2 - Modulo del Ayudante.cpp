#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

struct fecha
{
	int dia;
	int mes;
	int anio;
};

struct usuarios
{
	char usuario[10];
	char contrasenia[10];
	char apeNom[60];
};

struct veterinario
{
	char apeNom[60];
	int matricula;
	int dni;
	char telefono[25];
};

struct mascota
{
	char apeNom[60];
	char Domicilio[60];
	int dniDuenio;
	char Localidad[60];
	fecha fecNac;
	float Peso;
	char Telefono[25];
	
};

struct turno
{
	int matricula;
	fecha dniDuenio;
	char DetalleDeAtencion[380] ;
};

main ()
{
	system("color 0b");
    printf("\n\n\n");
	printf("\n\tSegundo modulo: Asistente");
	printf("\n\t====================================================");
	printf("\n\t 1.- Iniciar Sesion  ");
	printf("\n\t 2.- Registrar Mascota  ");
	printf("\n\t 3.- Registrar Turno ");
    printf("\n\t 4.- Listado de Atenciones por Veterinario y Fecha ");
 	printf("\n\t 5.- Cerrar la aplicacion. ");
             
	system("pause");
}
