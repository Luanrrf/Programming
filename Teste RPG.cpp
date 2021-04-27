#include <iostream>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
int i=0, count=0;

int main (){

	for (count=0; count<3; 0){
	srand((unsigned)time(NULL));

    int min = 1; // O menor numero
    int max;
    
    printf("\nQuantas faces deseja que o dado virtual possua?\n");
    scanf("%d%*c", &max); // O maior numero
    count++;
    printf("\nA face sorteada foi: %d\n", (rand () % (max-min+1) + min) ); // gera numeros entre min e max
}
system ("pause");
return 0;
}

	
