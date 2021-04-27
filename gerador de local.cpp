#include <iostream>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>

using namespace std;


int r = 0, c = 0;
// legenda: r(n) = região, c(n) = complemento da região


int main (){
	
do {
	
	srand((unsigned)time(NULL));
    
    int min = 1; // O menor numero
    int max = 30; // O maior numero
    
    int r = (rand () % (max-min+1) + min);// gera numeros entre min e max
    
    if (r == 1){
    	printf("\n\n O lugar sorteado foi o cemiterio ");
	}
	
	if (r == 2){
    	printf("\n\n O lugar sorteado foi a caverna ");
	}
	
	if (r == 3) {
	   	printf("\n\n O lugar sorteado foi a masmorra ");
	}
    
	if (r == 4) {
	   	printf("\n\n O lugar sorteado foi o lar dos dragoes ");
	}
    
	if (r == 5) {
	   	printf("\n\n O lugar sorteado foi o lar do desconhecido ");
	}
    
	if (r == 6) {
	   	printf("\n\n O lugar sorteado foi a tumba ");
	}
    
	if (r == 7) {
	   	printf("\n\n O lugar sorteado foi o vulcao ");
	}
    
	if (r == 8) {
	   	printf("\n\n O lugar sorteado foi a ilha ");
	}
    
	if (r == 9) {
	   	printf("\n\n O lugar sorteado foi a prisao ");
	}
    
	if (r == 10) {
	   	printf("\n\n O lugar sorteado foi a floresta densa ");
	}
    
	if (r == 11) {
	   	printf("\n\n O lugar sorteado foi a floresta aberta ");
	}
    
	if (r == 12) {
	   	printf("\n\n O lugar sorteado foi o deserto ");
	}
    
	if (r == 13) {
	   	printf("\n\n O lugar sorteado foi a catedral ");
	}
    
	if (r == 14) {
	   	printf("\n\n O lugar sorteado foi o centro espirita ");
	}
    
	if (r == 15) {
	   	printf("\n\n O lugar sorteado foi o templo ");
	}
    
	if (r == 16) {
	   	printf("\n\n O lugar sorteado foi a piramide ");
	}
    
	if (r == 17) {
	   	printf("\n\n O lugar sorteado foi o pantano ");
	}
    
	if (r == 18) {
	   	printf("\n\n O lugar sorteado foi a ilha gelida ");
	}
    
	if (r == 19) {
	   	printf("\n\n O lugar sorteado foi o forte militar ");
	}
    
	if (r == 20) {
	   	printf("\n\n O lugar sorteado foi a cidade marinha ");
	}
    
	if (r == 21) {
	   	printf("\n\n O lugar sorteado foi o fundo do mar ");
	}
    
	if (r == 22) {
	   	printf("\n\n O lugar sorteado foi a cidade fantasma ");
	}
    
	if (r == 23) {
	   	printf("\n\n O lugar sorteado foi a cachoeira ");
	}
    
	if (r == 24) {
	   	printf("\n\n O lugar sorteado foi a montanha ");
	}
    
	if (r == 25) {
	   	printf("\n\n O lugar sorteado foi a cidade voadora ");
	}
    
	if (r == 26) {
	   	printf("\n\n O lugar sorteado foi o oceano ");
	}
    
	if (r == 27) {
	   	printf("\n\n O lugar sorteado foi a taverna ");
	}
	
	if (r == 28) {
	   	printf("\n\n O lugar sorteado foi a loja de artefatos ");
	}
        
	if (r == 29) {
	   	printf("\n\n O lugar sorteado foi a cidade sobre a tartaruga ");
	}
    
	if (r == 30) {
	   	printf("\n\n O lugar sorteado foram as escadarias ");
	}
		
    
// 2ª parte --------------------------------------------------------------------


	srand((unsigned)time(NULL));
    
    int min2 = 1; // O menor numero
    int max2 = 40; // O maior numero
    
    int c = (rand () % (max2-min2+1) + min2);// gera numeros entre min e max
    
    if (c == 1){
    	printf("dos mortos\n\n\n");
	}	
	
    if (c == 2){
    	printf("do fim\n\n\n");
	}	
	
    if (c == 3){
    	printf("dos espiritos adormecidos\n\n\n");
	}	
	
    if (c == 4){
    	printf("da Normandia\n\n\n");
	}	
	
    if (c == 5){
    	printf("do rei louco\n\n\n");
	}	
	
    if (c == 6){
    	printf("do pirata cego\n\n\n");
	}	
	
    if (c == 7){
    	printf("do elefante branco\n\n\n");
	}	
	
    if (c == 8){
    	printf("do dente de sabre\n\n\n");
	}	
	
    if (c == 9){
    	printf("das ilusoes\n\n\n");
	}	
	
    if (c == 10){
    	printf("do vale do fim\n\n\n");
	}	
	
    if (c == 11){
    	printf("das aguas calmas\n\n\n");
	}	
	
    if (c == 12){
    	printf("vigiado(a)(s) pelos Ents\n\n\n");
	}	
	
    if (c == 13){
    	printf("mal assombrada\n\n\n");
	}	
	
    if (c == 14){
    	printf("da reliquia arcaica\n\n\n");
	}	
	
    if (c == 15){
    	printf("dos dementadores\n\n\n");
	}	
	
    if (c == 16){
    	printf("das piramides gigantes\n\n\n");
	}	
	
    if (c == 17){
    	printf("do esqueleto de dragao\n\n\n");
	}	
	
    if (c == 18){
    	printf("do vapor ardente\n\n\n");
	}	
	
    if (c == 19){
    	printf("das aguas traicoeiras\n\n\n");
	}	
	
    if (c == 20){
    	printf("do bau da morte\n\n\n");
	}	
	
    if (c == 21){
    	printf("da fonte da juventude\n\n\n");
	}	
	
    if (c == 22){
    	printf("da antiga tribo do fogo\n\n\n");
	}	
	
    if (c == 23){
    	printf("sem lei\n\n\n");
	}	
	
    if (c == 24){
    	printf("da morte\n\n\n");
	}	
	
    if (c == 25){
    	printf("dos lobos gigantes\n\n\n");
	}	
	
    if (c == 26){
    	printf("do templo selvagem\n\n\n");
	}	
	
    if (c == 27){
    	printf("dos bosques sem vida\n\n\n");
	}	
	
    if (c == 28){
    	printf("dos comissais da morte\n\n\n");
	}	
	
    if (c == 29){
    	printf("dos animais falantes\n\n\n");
	}	
	
    if (c == 30){
    	printf("da aurora boreal\n\n\n");
	}	
	
    if (c == 31){
    	printf("dos gigantes\n\n\n");
	}	
	
    if (c == 32){
    	printf("das criaturas minusculas\n\n\n");
	}	
	
    if (c == 33){
    	printf("dos olhos tortos\n\n\n");
	}	
	
    if (c == 34){
    	printf("do terreno traicoeiro\n\n\n");
	}	
	
    if (c == 35){
    	printf("das mumias\n\n\n");
	}	
	
    if (c == 36){
    	printf("dos pecados capitais\n\n\n");
	}	
	
    if (c == 37){
    	printf("das chuvas acidas\n\n\n");
	}	
	
    if (c == 38){
    	printf("dos tremores eternos\n\n\n");
	}	
	
    if (c == 39){
    	printf("da nevoa\n\n\n");
	}	
	
    if (c == 40){
    	printf("da tripulacao dos piratas mortos\n\n\n");
	}	
	
	system ("pause");

	}

	
	while( 1 );    
	return 0;
	}
	
