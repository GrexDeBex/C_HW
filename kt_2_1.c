#include<stdio.h>

/*
	Teaduskool, 2. teema, ülesanne 1
	Gregor Rämmal

	KÜTUSEKULU
	Kirjutada programmi, mis küsib kasutajalt teekonna pikkust kilomeetrides P, tarbitud kütuse kogust liitrites K ning kütuse liitri hinda eurodes H.
	Programm peab väljastama kütuse tarbimist liitrites saja kilomeetri kohta T (l/100 km) ning tarbitud kütuse maksumust.
*/
	
main(){
	
	float P, K, H, T, M;
	
	printf("Teekonna pikkus:\n");
	scanf("%f", &P);
	printf("Tarbitud kütuse kogus:\n");
	scanf("%f", &K);
	printf("Kütuse liitri hind:\n");
	scanf("%f", &H);
	
	T = K/(P/100);
	M = K*H;
	
	printf("\nOlete sõitnud %.2f kilomeetrit ning kulutanud %.2f liitrit kütust. Teie auto kütusekulu oli %.2f liitrit 100 kilomeetri kohta. Sõidu maksumus oli %.2f eurot.\n", P, K, T, M);
}


