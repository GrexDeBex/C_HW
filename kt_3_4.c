#include <stdio.h>
#include <math.h>

/*
	Teaduskool, 3. teema, �lesanne 4
	Gregor R�mmal

	FUNKTSIOONI V��RTUS
	Kirjutada programm, mis k�sib kasutajalt t�isarvu x ning arvutab funktsiooni F v��rtust kohal x.
*/

main(){
	double x, y;
	
	printf("Sisestage x v��rtus:\n");
	scanf("%lf", &x);
	
	if (x <= 0){
		y = 0;
	
	}else if (x <= 7){
		y = pow(x, 2);
	
	}else{
		y = (3*x) + 51;
	}
	
	printf("Funktsiooni F v��rtus kohal x on %.0f.", y);
}
