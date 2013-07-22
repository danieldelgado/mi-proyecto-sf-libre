#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <sys/types.h>
#include <unistd.h> /* unistd */

int numero , y ;
int main(){
	numero = rand();
	printf("numero 1 %d\n",numero);
	printf("Ingrese numero  y :");
	scanf("%d",&y);
	numero = rand() % y;
	printf("numero 2 %d\n",numero);
	numero = rand() % 11;
	printf("numero 3 %d\n",numero);
	printf("\n");
	srand (time(NULL));
	numero = rand() % y;
	printf("numero 4 %d\n",numero);
	srand (time(NULL));
	numero = rand() % y;
	printf("numero 5 %d\n",numero);
	srand (time(NULL));
	numero = rand() % y;
	printf("numero 6 %d\n",numero);
	srand (time(NULL));
	numero = rand() % y;
	printf("numero 7 %d\n",numero);
	srand (time(NULL));
	numero = rand() % y;
	printf("numero 8 %d\n",numero);
	printf("---------------------------------");
	printf("\n");
	printf ("First number: %d\n", rand()%100);
    srand (time(NULL));
    printf ("Random number: %d\n", rand()%100);
    srand (1);
    printf ("Again the first number: %d\n", rand()%100);	  
	printf("---------------------------------");
	printf("\n");
	srand (getpid());
	printf ("getpid() %d\n", getpid());	
	printf ("Again getpid: %d\n", rand()%100);	  
	printf("\n");
	printf("---------------------------------");
	printf("\n");
	numero = drand48() * (20.0-10.0) + 10.0; 
	printf ("drand48()() %d\n", numero);	
	return 0;
}
