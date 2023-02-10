#include <stdio.h>
#include <string.h>

/*
	Teaduskool, 3. teema, ülesanne 3
	Gregor Rämmal

	SOODSAIM PILET
	Turist tuleb mõneks päevaks linna ning vajab bussipileteid.
	Kirjutada programm, mis küsib turistilt mitu päeva P ta linnas viibida soovib, bussisõitude arvu S, ühekordse pileti hinda Y, 
	ühe päeva pileti hinda D ja kuukaardi hinda K ning väljastab, milline variant on kõige soodsam kasutaja jaoks.

	Eeldame, et turist ei tea täpselt, mis päeval mitu sõitu ta teeb, seega sellega pole vaja programmis arvestada. 
	Aga kindlasti ta teeb täpselt S sõitu P päeva jooksul. Lisaks eeldame, et ühes kuus on 30 päeva ja turist ei viibi linnas üle 30 päeva.
	Kui mitu variante tulevad sama summaga siis väljastada üks nendest variantidest (suvaline).
*/

main(){
	int P, S;
	double Y, D, K, Kokku_Y, Kokku_D;
	char Tulemus[30];
	
	printf("Sisestage päevade arv:\n");
	scanf("%d", &P);
	printf("Sisestage sõitude arv:\n");
	scanf("%d", &S);
	printf("Sisestage ühekordse pileti hind:\n");
	scanf("%lf", &Y);
	printf("Sisestage päeva pileti hind:\n");
	scanf("%lf", &D);
	printf("Sisestage kuukaardi hind:\n");
	scanf("%lf", &K);
	
	printf("\nTurist viibib linnas %d päeva ja teeb %d bussisõitu.", P, S);
	printf("\nPiletite hinnad:");
	printf("\nÜhekordne pilet: %.2f", Y);
	printf("\nPäevapilet: %.2f", D);
	printf("\nKuukaart: %.2f", K);
	
	Kokku_Y = Y * S;
	Kokku_D = D * P;
	
	printf("\nÜhekordsete piletite hind kokku: %.2f", Kokku_Y);
	printf("\nPäevapiletite hind kokku: %.2f", Kokku_D);
	
	if(Kokku_Y < Kokku_D && Kokku_Y < K){
		strcpy(Tulemus, "ühekordsed piletid");
	}else if(Kokku_D < K){
		strcpy(Tulemus, "päevapiletid");
	}else{
		strcpy(Tulemus, "kuupilet");
	}
	
	printf("\n========================================");
	printf("\nSoodsaim variant on %s.", Tulemus);
}
