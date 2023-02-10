#include <stdio.h>
#include <string.h>

/*
	Teaduskool, 3. teema, ülesanne 5
	Gregor Rämmal

	NÄDALAPÄEV
	Kirjutada programm, mis küsib kasutajalt naturaalavu k (1 <= k <= 365) ning väljstab aasta k-nda päeva nimetust arvestades seda, et 1. jaanuar on esmaspäev.
*/

main(){
	int k, WeekDay;
	char Day[30];
	
	printf("Sisestage päeva numbri k:\n");
	scanf("%d", &k);
	
	WeekDay = k % 7;
	
	switch (WeekDay){
		case 0:
			strcpy(Day, "pühapäev");
			break;
		case 1:
			strcpy(Day, "esmaspäev");
			break;
		case 2:
			strcpy(Day, "teisipäev");
			break;
		case 3:
			strcpy(Day, "kolmapäev");
			break;
		case 4:
			strcpy(Day, "neljapäev");
			break;
		case 5:
			strcpy(Day, "reede");
			break;
		case 6:
			strcpy(Day, "laupäev");
			break;	
	}
	
	printf("Aasta %d. päev on %s", k, Day);
}
