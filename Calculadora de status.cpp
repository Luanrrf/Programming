#include <iostream>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int c = 0, l = 0; // c = criatura e l = level


int main (){
	
	do {
	
	printf ("Bem vindo ao gerador de npcs, por favor informe o nivel da criatura. 1, 3, 5, 7 ou 10?");
	scanf ("%i",%l);
	
	if (l == 1){
			
	srand((unsigned)time(NULL));
    
    int min = 1; // O menor numero de criaturas level 1
    int max = 1; // O maior numero de criaturas level 1
    
    c = (rand () % (max-min+1) + min);
    
	}
	
	if (l == 3){
			
	srand((unsigned)time(NULL));
    
    int min3 = 1; // O menor numero
    int max3 = 1; // O maior numero
    
    c = (rand () % (max3-min3+1) + min3);
    
	}
	
	if (l == 5){
			
	srand((unsigned)time(NULL));
    
    int min5 = 1; // O menor numero
    int max5 = 30; // O maior numero
    
    c = (rand () % (max5-min5+1) + min5);
    
	}
	
	if (l == 7){
			
	srand((unsigned)time(NULL));
    
    int min7 = 1; // O menor numero
    int max7 = 30; // O maior numero
    
    c = (rand () % (max7-min7+1) + min7);
    
	}
	
	if (l == 10){
			
	srand((unsigned)time(NULL));
    
    int min10 = 1; // O menor numero
    int max10 = 30; // O maior numero
    
    c = (rand () % (max10-min10+1) + min10);
    
	}
	
	system ("pause");
	}
	while( 1 );    
	return 0;
	}
	
