#include <stdio.h>
#include <math.h>

/*  
	Teaduskool, 3. teema, �lesanne 1
	Gregor R�mmal

	SUURIM PINDALA
	Kirjutada programm, mis k�sib kasutajalt ringi raadiust R ja ruudu k�lje pikkust K ning v�ljastab ekraanile ringi ja ruudu pindalad ja kumb pindala on suurim.
*/

main(){
	double R, K, Pindala_R, Pindala_K;
	
	printf("Sisestage ringi raadius:\n");
	scanf("%lf", &R);
	printf("Sisestage ruudu k�lje pikkus:\n");
	scanf("%lf", &K);
	
	Pindala_R = pow(R, 2) * M_PI;
	Pindala_K = pow(K, 2);
	
	if (Pindala_R > Pindala_K){
		printf("\nRingi pindala on %.2f. Ruudu pindala on %.2f. Ringi pindala on suurim.\n", Pindala_R, Pindala_K);
	}
	else{
		printf("\nRingi pindala on %.2f. Ruudu pindala on %.2f. Ruudu pindala on suurim.\n", Pindala_R, Pindala_K);
	}
}
