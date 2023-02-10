#include <stdio.h>
#include <math.h>

/*
	Teaduskool, 3. teema, ülesanne 4
	Gregor Rämmal

	FUNKTSIOONI VÄÄRTUS
	Kirjutada programm, mis küsib kasutajalt täisarvu x ning arvutab funktsiooni F väärtust kohal x.
*/

main(){
	double x, y;
	
	printf("Sisestage x väärtus:\n");
	scanf("%lf", &x);
	
	if (x <= 0){
		y = 0;
	
	}else if (x <= 7){
		y = pow(x, 2);
	
	}else{
		y = (3*x) + 51;
	}
	
	printf("Funktsiooni F väärtus kohal x on %.0f.", y);
}
