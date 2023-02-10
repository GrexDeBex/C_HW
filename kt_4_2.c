#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	Teaduskool, 4. teema, ülesanne 2
	Gregor Rämmal

	ARVA NUMBER ÄRA!
	Kirjutada programm, mis genereerib juhusliku numbri N vahemikus -300 kuni 300 ja pakub kasutajale arvata ära mis arv see on. 
	Maksimaalselt saab küsida 8 korda, peale seda näidata, mis arv see oli ning väljastada ekraanile, et kasutaja on kaotanud. 
	Iga sammul, kui kasutaja sisestab arvu X, kirjutada: 
	“Peidetud arv on vähem.”, kui N on vähem kui X; “Peidetud arv on suurem.”, kui N on suurem kui X; “Peidetud arv on N”, kui X on võrdne N.
*/


main(){
	srand(time(NULL));
	int N = (rand() % (300 + 300 + 1) - 300);
	int X, Counter;
	
	printf("Alustame mängu.\n");
	
	Counter = 8;
	do {
		Counter--;
		printf("Sisestage uus arv:\n"); scanf("%d", &X);
		
		if (X < N){
			printf("Peidetud arv on suurem.\n\n");
		}else if(X > N){
			printf("Peidetud arv on vähem.\n\n");
		}else{
			printf("Peidetud arv on %d.", N);
			Counter = -1;
		}
	} while (Counter > 0);
	
	if (Counter == 0){
		printf("Te kaotasite. Peidetud arv oli %d.", N);
	}
}
