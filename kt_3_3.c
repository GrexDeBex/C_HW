#include <stdio.h>
#include <string.h>

/*
	Teaduskool, 3. teema, �lesanne 3
	Gregor R�mmal

	SOODSAIM PILET
	Turist tuleb m�neks p�evaks linna ning vajab bussipileteid.
	Kirjutada programm, mis k�sib turistilt mitu p�eva P ta linnas viibida soovib, bussis�itude arvu S, �hekordse pileti hinda Y, 
	�he p�eva pileti hinda D ja kuukaardi hinda K ning v�ljastab, milline variant on k�ige soodsam kasutaja jaoks.

	Eeldame, et turist ei tea t�pselt, mis p�eval mitu s�itu ta teeb, seega sellega pole vaja programmis arvestada. 
	Aga kindlasti ta teeb t�pselt S s�itu P p�eva jooksul. Lisaks eeldame, et �hes kuus on 30 p�eva ja turist ei viibi linnas �le 30 p�eva.
	Kui mitu variante tulevad sama summaga siis v�ljastada �ks nendest variantidest (suvaline).
*/

main(){
	int P, S;
	double Y, D, K, Kokku_Y, Kokku_D;
	char Tulemus[30];
	
	printf("Sisestage p�evade arv:\n");
	scanf("%d", &P);
	printf("Sisestage s�itude arv:\n");
	scanf("%d", &S);
	printf("Sisestage �hekordse pileti hind:\n");
	scanf("%lf", &Y);
	printf("Sisestage p�eva pileti hind:\n");
	scanf("%lf", &D);
	printf("Sisestage kuukaardi hind:\n");
	scanf("%lf", &K);
	
	printf("\nTurist viibib linnas %d p�eva ja teeb %d bussis�itu.", P, S);
	printf("\nPiletite hinnad:");
	printf("\n�hekordne pilet: %.2f", Y);
	printf("\nP�evapilet: %.2f", D);
	printf("\nKuukaart: %.2f", K);
	
	Kokku_Y = Y * S;
	Kokku_D = D * P;
	
	printf("\n�hekordsete piletite hind kokku: %.2f", Kokku_Y);
	printf("\nP�evapiletite hind kokku: %.2f", Kokku_D);
	
	if(Kokku_Y < Kokku_D && Kokku_Y < K){
		strcpy(Tulemus, "�hekordsed piletid");
	}else if(Kokku_D < K){
		strcpy(Tulemus, "p�evapiletid");
	}else{
		strcpy(Tulemus, "kuupilet");
	}
	
	printf("\n========================================");
	printf("\nSoodsaim variant on %s.", Tulemus);
}
