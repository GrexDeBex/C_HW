#include <stdio.h>

/*
	Teaduskool, 4. teema, ülesanne 3
	Gregor Rämmal

	KASSA
	Müüjal on vaja ostjale raha tagasi anda ning ta peab seda tegema kasutades minimaalset arvu kupüüre ja münte.
	Kupüüre ja münte on kassas piiratud koguses ning kassa seis on järgmine:
		20-eurosed: 1 tk
		10-eurosed: 2 tk
		5-eurosed: 3 tk 
		2-eurosed mündid: 1 tk
		1-eurosed mündid: 1 tk
*/

main(){
	int Money[8] = {20, 10, 10, 5, 5, 5, 2, 1};
	int Money_Back[9] = {0}; 
	int Payment, Index, Counter;
	
	printf("Sisestage summa, mida ostja saab tagasi:\n"); scanf("%d", &Payment);
	
	if (Payment - 58 > 0){															/*Kontrollib kas on piisavalt raha*/
		Payment = -1;
	}
	
	Index = 0;
	for (int i = 0; i < 8; i++){													/*Hakkab summast kupüüra ja münte maha lahutama, alustades suurimatest*/
		if (Payment - Money[i] >= 0){
			Payment -= Money[i];
			Money_Back[Index] = Money[i];
			Index++;
		}
	}
	
	if (Payment == -1){
		printf("\nKassas pole piisavalt raha.");
	}else if (Payment != 0){
		printf("\nPole võimalik anda täpne raha tagasi.");
	
	}else{
		printf("\nTagasi tuleb anda:");
		
		Counter = 1;																/*Prindib tagasi antava raha*/
		for (int i = 0; i < 8; i++){
			if (Money_Back[i] == Money_Back[i+1]){
				Counter++;
			}else{
				printf("\n%d-eurosed: %d tk", Money_Back[i], Counter);
				Counter = 1;
			}
		}
		
	}
}
