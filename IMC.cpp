#include <iostream>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define bemvindos cout << "\nBem vindos ao meu programa de calculo de IMC feito por Luan Ribeiro!\n\n" << endl;
	
using namespace std;

 //a = altura ; i = idade ; p = peso ; imc = índice de massa corporal ; a2 = (altura)²
	float a=0, p=0, imc=0, imc2=0, p2=0, p3=0, imc3=0, p4=0, p5=0;
	
int main (){
	
	bemvindos
	
	cout << "Qual sua altura?(Coloque um ponto no lugar da virgula)" << endl;
	scanf ("%f",&a);
	printf ("\n");		
	
	cout << "Quantos quilos voce pesa?" << endl;
	scanf ("%f",&p);
	printf ("\n\n");		
		
	printf ("Voce tem %.2f de altura e %.2f kg.\n",a,p);
	printf ("\n");		

	imc = p/(a*a);
	
	printf("Portanto seu indice de massa corporal = %.2f\n",imc);
	printf ("\n");		

		if (imc<18.5){
		printf ("Voce esta classificado como Magreza.\n");
		imc2=18.5;
		p2=imc2*a*a;
		p3=p2-p;
		imc3=24,99;
		p4=imc3*a*a;
		p5=p4-p;
		printf ("\nPara chegar no peso ideal voce precisa ganhar entre %.2f e %.2f quilogramas\n\n\n\n", p3, p5);
		}
		
		if (imc>=18.5 & imc<25)
		{printf ("Voce esta classificado como Peso Ideal, meus parabens!\n\n\n\n");
		}
		
		if (imc>=25 & imc<30){
		printf("Voce esta classificado como Sobrepeso ou Obesidade Grau 1.\n");
		imc2=18.5;
		p2=imc2*a*a;
		p3=p-p2;
		imc3=24,99;
		p4=imc3*a*a;
		p5=p-p4;
		printf ("\nPara chegar no peso ideal voce precisa perder entre %.2f e %.2f quilogramas\n\n\n\n", p5, p3);
		}
		
		if (imc>=30 & imc<40){
		printf("Voce esta classificado como Obesidade grau 2.\n");
		imc2=18.5;
		p2=imc2*a*a;
		p3=p-p2;
		imc3=24,99;
		p4=imc3*a*a;
		p5=p-p4;
		printf ("\nPara chegar no peso ideal voce precisa perder entre %.2f e %.2f quilogramas\n\n\n\n", p5, p3);
		}
	
		if (imc>=40){
		printf ("Voce esta classificado como Obesidade grau 3. Por favor procure um medico para ajudar no tratamento contra obesidade, sua saude esta em jogo!\n");		
		imc2=18.5;
		p2=imc2*a*a;
		p3=p-p2;
		imc3=24,99;
		p4=imc3*a*a;
		p5=p-p4;
		printf ("\nPara chegar no peso ideal voce precisa perder entre %.2f e %.2f quilogramas\n\n\n\n", p5, p3);
		}
		
	system ("pause");
	
	return 0;
		
	}
