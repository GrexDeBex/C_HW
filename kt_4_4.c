#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	Teaduskool, 4. teema, ülesanne 4
	Gregor Rämmal

	KAHEMÕÕTMELINE JADA
	Kirjutada programm, mis genireerib kahemõõtmelise 10x10 jada, kus iga element on juhuslik täisarv vahemikus 1 kuni 99.
	Programm väljastab genereeritud jada ekraanile ning iga rida alguses väljastab rea numbri ning iga rea lõpus väljastab 
	selle rea elementide aritmeetiline keskmine täpsusega üks koht peale koma. Lisaks programm väljastab rea järjekorranumbri 
	mille aritmeeline keskmine on suurim.
*/

main(){
	srand(time(NULL));
	int Array[10][10], Random, Sum, Max_Index;
	double Average[10], Max_Average;
	
	Max_Average = 0;
	for (int i1 = 0; i1 < 10; i1++){
		Sum = 0;
		
		for (int i2 = 0; i2 < 10; i2++){							/*Võtab ridade kaupa juhuslike arve ja leiab rea summa*/
			Random = rand() % (99) + 1;
			Array[i1][i2] = Random;
			
			Sum += Random;
		}
		Average[i1] = (double) Sum / 10;							/*Jätab rea keskmise meelde*/
		
		if (Max_Average < (double) Sum / 10){						/*Jätab meelde suurima keskmise ja selle indeksi*/
			Max_Average = (double) Sum / 10;
			Max_Index = i1;
		}
	}
	
	for (int i1 = 0; i1 < 10; i1++){								/*Prindib tabeli*/
		if (i1 == 9){
			printf("\n  %d. | ", i1+1);
		}else{
			printf("\n   %d. | ", i1+1);
		}
		for (int i2 = 0; i2 < 10; i2++){
			if (Array[i1][i2] < 10){
				printf(" %d ", Array[i1][i2]);
			}else{
				printf("%d ", Array[i1][i2]);
			}
		}
		printf("| %.1f", Average[i1]);
		
	}
	printf("\n\n  Elementide suurim aritmeetiline keskmine on reas nr. %d", Max_Index+1);	
		
			
}
