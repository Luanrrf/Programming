#include <iostream>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int npc = 0, n = 0, c = 0;

	int main (){
		
	do {
		
	printf("\nQual o nivel do npc que deseja? (1,3,5,7,10)\n");
	scanf ("%i",&n);
	
	srand((unsigned)time(NULL));
    
    int min = 1;
    int max = 30;
    
 	c = (rand () % (max-min+1) + min);
    
    if (c==1,n==1){
    printf("\nAtributos			\n\nnivel:1 			\nraca:humano 			\nclasse:bruxo 			\ntalento:arte da magia 			\n\nforca:8 			\ndestreza:10 			\nconstituicao:13 ");
	printf("\ncarisma:12 					\ninteligencia:18 					\nsabedoria:16 					\n\npotencia:0 					\naceleracao:0 					\nfortitude:0 					\nmajestade:0 ");
	printf("\ninvocacao:0 					\ndeterminacao:0 					\n\narmadura:1 					\nresistencia magica:0 					\narmadura extra:0 					\nresistencia magica extra:0 ");
	printf("\n\nmodificador extra de forca:0 					\nmodificador extra de destreza:0 					\nmodificador extra de constituicao:0 					\nmodificador extra de carisma:0 ");
	printf("\nmodificador extra de inteligencia:0 					\nmodificador extra de sabedoria:0 				\n\nmodificador extra de acerto:0 					\nmodificador extra de mira:0 ");
	printf("\nmodificador extra de esquiva:0 					\nmodificador extra de dano:0 					\nmodificador extra de iniciativa:1 					\nmodificador extra de deslocamento:0 ");
	printf("\n\n\ndano:1d4-1 					\nacerto:-1 					\nmira:0 					\nesquiva:10 					\niniciativa:2 					\ndeslocamento:2 ");
	printf("\narmadura total:1 					\nresistencia magica total:0 				\npv total:16				\npv atual:16				\nresistencia elemental:0");
	printf("\n\n");
	}
	
	
	
    if (c==1,n==3){
    printf("\nAtributos			\n\nnivel:3 			\nraca:humano 			\nclasse:bruxo 			\ntalento:arte da magia 			\n\nforca:8 			\ndestreza:10 			\nconstituicao:13 ");
	printf("\ncarisma:12 					\ninteligencia:24 					\nsabedoria:16 					\n\npotencia:0 					\naceleracao:0 					\nfortitude:0 					\nmajestade:0 ");
	printf("\ninvocacao:0 					\ndeterminacao:0 					\n\narmadura:2 					\nresistencia magica:0 					\narmadura extra:0 					\nresistencia magica extra:0 ");
	printf("\n\nmodificador extra de forca:0 					\nmodificador extra de destreza:0 					\nmodificador extra de constituicao:0 					\nmodificador extra de carisma:0 ");
	printf("\nmodificador extra de inteligencia:0 					\nmodificador extra de sabedoria:0 				\n\nmodificador extra de acerto:0 					\nmodificador extra de mira:0 ");
	printf("\nmodificador extra de esquiva:0 					\nmodificador extra de dano:0 					\nmodificador extra de iniciativa:2 					\nmodificador extra de deslocamento:0 ");
	printf("\n\n\ndano:1d4-1 					\nacerto:-1 					\nmira:0 					\nesquiva:10 					\niniciativa:3 					\ndeslocamento:2 ");
	printf("\narmadura total:2 					\nresistencia magica total:0 				\npv total:20				\npv atual:20				\nresistencia elemental:0");
	printf("\n\n");
	}
	
    if (c==1,n==5){
    printf("\nAtributos			\n\nnivel:5 			\nraca:humano 			\nclasse:bruxo 			\ntalento:arte da magia 			\n\nforca:8 			\ndestreza:15 			\nconstituicao:16 ");
	printf("\ncarisma:13 					\ninteligencia:25 					\nsabedoria:16 					\n\npotencia:0 					\naceleracao:0 					\nfortitude:0 					\nmajestade:0 ");
	printf("\ninvocacao:2 					\ndeterminacao:0 					\n\narmadura:3 					\nresistencia magica:1 					\narmadura extra:0 					\nresistencia magica extra:0 ");
	printf("\n\nmodificador extra de forca:0 					\nmodificador extra de destreza:0 					\nmodificador extra de constituicao:0 					\nmodificador extra de carisma:0 ");
	printf("\nmodificador extra de inteligencia:0 					\nmodificador extra de sabedoria:0 				\n\nmodificador extra de acerto:0 					\nmodificador extra de mira:0 ");
	printf("\nmodificador extra de esquiva:0 					\nmodificador extra de dano:0 					\nmodificador extra de iniciativa:2 					\nmodificador extra de deslocamento:0 ");
	printf("\n\n\ndano:1d4-1 					\nacerto:-1 					\nmira:2 					\nesquiva:12 					\niniciativa:4 					\ndeslocamento:3 ");
	printf("\narmadura total:3 					\nresistencia magica total:1 				\npv total:32				\npv atual:32				\nresistencia elemental:0");
	printf("\n\n");
	}
	
    if (c==1,n==7){
    printf("\nAtributos			\n\nnivel:7 			\nraca:humano 			\nclasse:bruxo 			\ntalento:arte da magia 			\n\nforca:8 			\ndestreza:16 			\nconstituicao:16 ");
	printf("\ncarisma:15 					\ninteligencia:30 					\nsabedoria:16 					\n\npotencia:0 					\naceleracao:0 					\nfortitude:0 					\nmajestade:0 ");
	printf("\ninvocacao:3 					\ndeterminacao:0 					\n\narmadura:3 					\nresistencia magica:2 					\narmadura extra:0 					\nresistencia magica extra:0 ");
	printf("\n\nmodificador extra de forca:0 					\nmodificador extra de destreza:0 					\nmodificador extra de constituicao:0 					\nmodificador extra de carisma:0 ");
	printf("\nmodificador extra de inteligencia:0 					\nmodificador extra de sabedoria:0 				\n\nmodificador extra de acerto:0 					\nmodificador extra de mira:0 ");
	printf("\nmodificador extra de esquiva:0 					\nmodificador extra de dano:0 					\nmodificador extra de iniciativa:2 					\nmodificador extra de deslocamento:0 ");
	printf("\n\n\ndano:1d4-1 					\nacerto:-1 					\nmira:3 					\nesquiva:13 					\niniciativa:4 					\ndeslocamento:4 ");
	printf("\narmadura total:3 					\nresistencia magica total:2 				\npv total:32				\npv atual:32				\nresistencia elemental:fogo");
	printf("\n\n");
	}
	
	if (c==1,n==10){
    printf("\nAtributos			\n\nnivel:10 			\nraca:humano 			\nclasse:bruxo 			\ntalento:arte da magia 			\n\nforca:8 			\ndestreza:17 			\nconstituicao:18 ");
	printf("\ncarisma:16 					\ninteligencia:37 					\nsabedoria:16 					\n\npotencia:0 					\naceleracao:0 					\nfortitude:0 					\nmajestade:0 ");
	printf("\ninvocacao:5 					\ndeterminacao:0 					\n\narmadura:2 					\nresistencia magica:2 					\narmadura extra:0 					\nresistencia magica extra:0 ");
	printf("\n\nmodificador extra de forca:0 					\nmodificador extra de destreza:0 					\nmodificador extra de constituicao:0 					\nmodificador extra de carisma:0 ");
	printf("\nmodificador extra de inteligencia:0 					\nmodificador extra de sabedoria:0 				\n\nmodificador extra de acerto:0 					\nmodificador extra de mira:0 ");
	printf("\nmodificador extra de esquiva:0 					\nmodificador extra de dano:0 					\nmodificador extra de iniciativa:2 					\nmodificador extra de deslocamento:0 ");
	printf("\n\n\ndano:1d4-1 					\nacerto:-1 					\nmira:3 					\nesquiva:13 					\niniciativa:4 					\ndeslocamento:4 ");
	printf("\narmadura total:2 					\nresistencia magica total:2 				\npv total:46				\npv atual:46				\nresistencia elemental:todos os elementos");
	printf("\n\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system ("pause");
}
	
	while( 1 );    
	return 0;
}
