#include<stdio.h>
#include <math.h>

/*  
	Teaduskool, 2. teema, ülesanne 3
	Gregor Rämmal

	LAENUKALKULAATOR
	Kirjutada programmi, mis küsib kasutajalt kolm numbri: laenusumma S eurodes, laenuperiood Y aastades ja laenuprotsendid P (intressimäär - aastaprotsendid), ja väljastab:
	-tagasimakstav kogu summa T eurodes
	-kuumakse K eurodes
*/

main(){
	
	double S, Y, P, T, K;
	
	printf("Sisestage laenusumma eurodes:\n");
	scanf("%lf", &S);
	printf("Sisestage laenuperiood aastades:\n");
	scanf("%lf", &Y);
	printf("Sisestage intressimäär protsentides:\n");
	scanf("%lf", &P);
	
	K = (S*(P/100/12)) / (1-pow((1+P/100/12), (-Y*12)));
	T = K*Y*12;
	
	printf("\nLaenusummaga %.2f eurot %.2f intressimääraga te peate maksma %.2f eurot kuus %.2f aastat. Ja kokku maksate pangale %.2f eurot.\n", S, P, K, Y, T);
}

