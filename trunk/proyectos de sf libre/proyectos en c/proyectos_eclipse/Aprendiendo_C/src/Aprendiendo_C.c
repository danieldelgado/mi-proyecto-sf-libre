/*
 ============================================================================
 Name        : Aprendiendo_C.c
 Author      : Daniel
 Version     :
 Copyright   : Not
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>       /* time */
#include <sys/types.h>
#include <unistd.h> /* unistd */
#include "include/numericos.h"

int numero, y;

int main(void) {
	puts("Hola mundo"); /* prints Hola mundo */

	printf("\n");
	printf("hola mundo");
	printf("\n");
	printf("\n");
	printf("\n");

	numero = rand();
	printf("numero 1 %d\n", numero);
	printf("Ingrese numero  y :");
	scanf("%d", &y);
	numero = rand() % y;
	printf("numero 2 %d\n", numero);
	numero = rand() % 11;
	printf("numero 3 %d\n", numero);
	printf("\n");
	srand(time(NULL ));
	numero = rand() % y;
	printf("numero 4 %d\n", numero);
	srand(time(NULL ));
	numero = rand() % y;
	printf("numero 5 %d\n", numero);
	srand(time(NULL ));
	numero = rand() % y;
	printf("numero 6 %d\n", numero);
	srand(time(NULL ));
	numero = rand() % y;
	printf("numero 7 %d\n", numero);
	srand(time(NULL ));
	numero = rand() % y;
	printf("numero 8 %d\n", numero);
	printf("---------------------------------");
	printf("\n");
	printf("First number: %d\n", rand() % 100);
	srand(time(NULL ));
	printf("Random number: %d\n", rand() % 100);
	srand(1);
	printf("Again the first number: %d\n", rand() % 100);
	printf("---------------------------------");
	printf("\n");
	srand(getpid());
	printf("getpid() %d\n", getpid());
	printf("Again getpid: %d\n", rand() % 100);
	printf("\n");
	printf("---------------------------------");
	printf("\n");
	numero = drand48() * (20.0 - 10.0) + 10.0;
	printf("drand48()() %d\n", numero);
	printf("---------------------------------\n");
	printf("multiplica: %d\n", multiplica(2,3,4));
	printf("---------------------------------\n");
	printf("---------------------------------\n");
	printf("suma: %d\n", suma());
	printf("---------------------------------\n");
	printf("---------------------------------\n");
	printf("punteros: %d\n", uso_de_punteros());
	printf("---------------------------------\n");
	return EXIT_SUCCESS;
}
