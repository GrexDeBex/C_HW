#include <stdio.h>
#include <string.h>

/*
	Teaduskool, 3. teema, �lesanne 5
	Gregor R�mmal

	N�DALAP�EV
	Kirjutada programm, mis k�sib kasutajalt naturaalavu k (1 <= k <= 365) ning v�ljstab aasta k-nda p�eva nimetust arvestades seda, et 1. jaanuar on esmasp�ev.
*/

main(){
	int k, WeekDay;
	char Day[30];
	
	printf("Sisestage p�eva numbri k:\n");
	scanf("%d", &k);
	
	WeekDay = k % 7;
	
	switch (WeekDay){
		case 0:
			strcpy(Day, "p�hap�ev");
			break;
		case 1:
			strcpy(Day, "esmasp�ev");
			break;
		case 2:
			strcpy(Day, "teisip�ev");
			break;
		case 3:
			strcpy(Day, "kolmap�ev");
			break;
		case 4:
			strcpy(Day, "neljap�ev");
			break;
		case 5:
			strcpy(Day, "reede");
			break;
		case 6:
			strcpy(Day, "laup�ev");
			break;	
	}
	
	printf("Aasta %d. p�ev on %s", k, Day);
}
