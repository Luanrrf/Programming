#include <iostream>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
int i=0;

int main (){
	
	do {
	
	srand((unsigned)time(NULL));
    
    int min = 1; // O menor numero
    int max;

            printf("\nQuantas faces deseja que o dado virtual possua?");
        scanf("%d%*c", &max); // O maior numero
    
    
        printf("A face sorteada foi: %d\n", (rand () % (max-min+1) + min) ); // gera numeros entre min e max
    

    }
	while( 1 );    
	return 0;
	}
	
