#include <stdio.h>
#include <string.h>

/*  
	Teaduskool, 3. teema, ülesanne 2
	Gregor Rämmal

	KAALUDE KONVERTER
	Kirjutada programm, mis küsib kasutajalt tema kaalu K ja planeedi nime P ning väljastab kui suur oleks inimese kaal planeedil P
*/

main(){
	double K, X;
	char P[30];
	
	printf("Sisestage kaal kilogrammides:\n");
	scanf("%lf", &K);
	printf("Sisestage planeet (merkuur, veenus, maa, marss, jupiter, saturn, uraan, neptuun):\n");
	scanf("%s", P);
	
	if(strcmp(P, "merkuur") == 0){
		X = 0.378;
	}else if(strcmp(P, "veenus") == 0){
		X = 0.907;
	}else if(strcmp(P, "maa") == 0){
		X = 1.0;
	}else if(strcmp(P, "marss") == 0){
		X = 0.377;
	}else if(strcmp(P, "jupiter") == 0){
		X = 2.364;
	}else if(strcmp(P, "saturn") == 0){
		X = 1.064;
	}else if(strcmp(P, "uraan") == 0){
		X = 0.889;
	}else if(strcmp(P, "neptuun") == 0){
		X = 1.125;
	}
	
	X = X * K;
	
	printf("\nTeie kaal planeedil %s oleks %.2f kilogrammi.\n", P, X);
}
