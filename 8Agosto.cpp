#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void ejercicio1();
void ejercicio2();
void ejercicio3();

int main()
{
	bool salir=false;
	do
	{	
		char ejercicio=NULL;	
		printf("1) Ejercicio 1 \n2) Ejercicio 2 \n3) Ejercicio 3 \n4) Salir");
		ejercicio=getch();
		system("CLS");
		switch(ejercicio)
		{
			case '1':
			ejercicio1();
			break;
		
			case '2':
			ejercicio2();
			break;
		
			case '3':
			ejercicio3();
			break;
			
			case '4':
			salir=true;
			break;
			
			default:
			printf("No hay ejercicio %c",ejercicio);
			getch();
			system("CLS");
			break;
		}
    }while(salir==false);
}  


void ejercicio1()
{
	float nota1[10]={NULL}, nota2[10]={NULL}, nota3[10]={NULL}, numeroest=0, definitiva[10]={NULL};
	int i=0, CODIGO[10]={NULL};

	printf("Cuantos usuarios piensa ingresar? ");
	scanf("%f",&numeroest);

	for(i=0;i<numeroest;i++)
	{
		printf("Digite dato còdigo[%d]= ",i);
		scanf("%d",&CODIGO[i]);	
	}
	
	for(i=0;i<numeroest;i++)
	{
		printf("\nDigite dato nota 1[%d]= ",i);
		scanf("%f",&nota1[i]);	
	}

	for(i=0;i<numeroest;i++)
	{
		printf("\nDigite dato nota 2[%d]=",i);
		scanf("%f",&nota2[i]);	
	}
	
	for(i=0;i<numeroest;i++)
	{
		printf("\nDigite dato nota 3[%d]=",i);
		scanf("%f",&nota3[i]);	
		definitiva[i]=0.35*nota1[i]+0.35*nota2[i]+0.3*nota3[i];
	}
	for(i=0;i<numeroest;i++)
	{
		printf("\nLa nota definitiva de %d es %f",CODIGO[i],definitiva[i]);	
	}
	getch();
	system("CLS");
}

void ejercicio2()
{
	int menor=0, enteros[100]={NULL}, cantidad=0,i=0,j=0;

	printf("Cantidad de datos? ");
	scanf("%d",&cantidad);
	for(i=0;i<cantidad;i++)
	{
		printf("Dato %d= ",i+1);
		scanf("%d",&enteros[i]);
	}
	for(j=0;j<cantidad;j++)
	{	
		for(i=1;i<cantidad;i++)
		{
			if(enteros[i]<enteros[i-1] )
			{
				menor=enteros[i];
				enteros[i]=enteros[i-1];
				enteros[i-1]=menor;
			}		
		}
	}
	for(i=0;i<cantidad;i++)
	{
		printf("%d\n",enteros[i]);
	}
	getch();
	system("CLS");	
}

void ejercicio3()
{
	int baloto[6]={NULL}, i=0;
	printf("Baloto ganador=");
	for(i=0;i<6;i++)
	{
		baloto[i]=1+(rand() % 45);
		printf(" %d ",baloto[i]);
	}
	getch();
	system("CLS");
}


/*
--------------------------------------------------------------------------------------------------------------------------------
int sumar(int a[]);

int main()
{
int x[]={0,20,30,40,50};
printf("%d",sumar(x));
}

int sumar(int a[]) //en C los arreglos se trabajan como referencia 
{
a[0]=100;
return a[0]+a[1];
}
*/
/*
--------------------------------------------------------------------------------------------------------------------------------
void sumar(int a, int &b); //si no se quiere llevar toda la funcion arriba se puede hacer esto, que es declarrar la funcion

int main()
{
int x=5;
int y=12;
sumar(x,y);
printf("x vale %d y vale %d",x,y);
}

void sumar(int a, int &b) //si no se pone el '&' se trabaja con una copia de la variable (parametro de referencia), sin embargo, con el & se trabaja directamente con la variable (parametro de valor)
{
a+=10;
b+=10;
}*/

