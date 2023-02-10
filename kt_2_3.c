#include<stdio.h>
#include <math.h>

/*  
	Teaduskool, 2. teema, �lesanne 3
	Gregor R�mmal

	LAENUKALKULAATOR
	Kirjutada programmi, mis k�sib kasutajalt kolm numbri: laenusumma S eurodes, laenuperiood Y aastades ja laenuprotsendid P (intressim��r - aastaprotsendid), ja v�ljastab:
	-tagasimakstav kogu summa T eurodes
	-kuumakse K eurodes
*/

main(){
	
	double S, Y, P, T, K;
	
	printf("Sisestage laenusumma eurodes:\n");
	scanf("%lf", &S);
	printf("Sisestage laenuperiood aastades:\n");
	scanf("%lf", &Y);
	printf("Sisestage intressim��r protsentides:\n");
	scanf("%lf", &P);
	
	K = (S*(P/100/12)) / (1-pow((1+P/100/12), (-Y*12)));
	T = K*Y*12;
	
	printf("\nLaenusummaga %.2f eurot %.2f intressim��raga te peate maksma %.2f eurot kuus %.2f aastat. Ja kokku maksate pangale %.2f eurot.\n", S, P, K, Y, T);
}

