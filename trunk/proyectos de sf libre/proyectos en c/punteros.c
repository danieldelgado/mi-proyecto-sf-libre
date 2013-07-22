#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>

char a;		/* Variable 'a' de tipo char */
char *pchar;	/* Puntero a char 'pchar' */

char unCaracter; 
char *puntero;
int* ptr;	/* puntero a enteros */
int* ptr2;
int main(){
	
	unCaracter = 'A';
	puntero = &unCaracter;
	printf("Valor de puntero: %c \n",*puntero);
	printf("Memoria : %p \n",&unCaracter);
	printf("Valor del unCaracter: %c \n",unCaracter);
	
	a = 'A';
	pchar = &a;	/* 'pchar' <- @ de 'a' */

	printf("la direccion de memoria de 'a' es: %p \n", &a);
	printf("y su contenido es : %c \n", *pchar);
	printf("y su contenido es a: %c \n", a);
	
	puntero = malloc(1000);
	printf("puntero: %c \n",*puntero);
	free(puntero);
	printf("puntero: %c \n",*puntero);
	printf("------------------------------ \n");
	/* reserva hueco para 300 enteros */
	ptr = (int*)malloc ( 300*sizeof(int) );
    ptr[33] = 15;		/* trabaja con el área de memoria */
	// rellena_de_ceros (10,ptr); 	/* otro ejemplo */
	ptr2 = ptr + 15;		/* asignación a otro puntero */
	/* finalmente, libera la zona de memoria */
	free(ptr);
	printf("------------------------------ \n");
	
	
	int *ptr_one;

		ptr_one = (int *)malloc(sizeof(int));

		if (ptr_one == 0)
		{
			printf("ERROR: Out of memory\n");
			return 1;
		}

		*ptr_one = 25;
		printf("%d\n", *ptr_one);

		free(ptr_one);
	return 0;
}


