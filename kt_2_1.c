#include<stdio.h>

/*
	Teaduskool, 2. teema, �lesanne 1
	Gregor R�mmal

	K�TUSEKULU
	Kirjutada programmi, mis k�sib kasutajalt teekonna pikkust kilomeetrides P, tarbitud k�tuse kogust liitrites K ning k�tuse liitri hinda eurodes H.
	Programm peab v�ljastama k�tuse tarbimist liitrites saja kilomeetri kohta T (l/100 km) ning tarbitud k�tuse maksumust.
*/
	
main(){
	
	float P, K, H, T, M;
	
	printf("Teekonna pikkus:\n");
	scanf("%f", &P);
	printf("Tarbitud k�tuse kogus:\n");
	scanf("%f", &K);
	printf("K�tuse liitri hind:\n");
	scanf("%f", &H);
	
	T = K/(P/100);
	M = K*H;
	
	printf("\nOlete s�itnud %.2f kilomeetrit ning kulutanud %.2f liitrit k�tust. Teie auto k�tusekulu oli %.2f liitrit 100 kilomeetri kohta. S�idu maksumus oli %.2f eurot.\n", P, K, T, M);
}


