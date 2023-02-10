#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	Teaduskool, 4. teema, �lesanne 2
	Gregor R�mmal

	ARVA NUMBER �RA!
	Kirjutada programm, mis genereerib juhusliku numbri N vahemikus -300 kuni 300 ja pakub kasutajale arvata �ra mis arv see on. 
	Maksimaalselt saab k�sida 8 korda, peale seda n�idata, mis arv see oli ning v�ljastada ekraanile, et kasutaja on kaotanud. 
	Iga sammul, kui kasutaja sisestab arvu X, kirjutada: 
	�Peidetud arv on v�hem.�, kui N on v�hem kui X; �Peidetud arv on suurem.�, kui N on suurem kui X; �Peidetud arv on N�, kui X on v�rdne N.
*/


main(){
	srand(time(NULL));
	int N = (rand() % (300 + 300 + 1) - 300);
	int X, Counter;
	
	printf("Alustame m�ngu.\n");
	
	Counter = 8;
	do {
		Counter--;
		printf("Sisestage uus arv:\n"); scanf("%d", &X);
		
		if (X < N){
			printf("Peidetud arv on suurem.\n\n");
		}else if(X > N){
			printf("Peidetud arv on v�hem.\n\n");
		}else{
			printf("Peidetud arv on %d.", N);
			Counter = -1;
		}
	} while (Counter > 0);
	
	if (Counter == 0){
		printf("Te kaotasite. Peidetud arv oli %d.", N);
	}
}
