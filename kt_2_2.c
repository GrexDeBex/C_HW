#include<stdio.h>

/*
	Teaduskool, 2. teema, �lesanne 2
	Gregor R�mmal

	PALGAKALKULAATOR 2017
	Kirjutada programmi, mis k�sib kasutajalt tema brutopalga B (aastal 2017 miinimumpalk oli 470 eurot, ehk arvestada sellega et kasutaja alati sisestab B >= 470), ja v�ljastab:
	-summa T, mida t��andja maksab
	-netopalk N, mida t��taja saab k�tte palgap�eval.
	*Netopalk N arvutada 2017 aasta reeglite j�rgi - maksuvaba tulu oli 180 eurot, t��taja t��tuskindlustusmakse on 1.6%, kogumispensioon (II sammas) oli 2%.
	
	T��andja kulu T samuti arvutada 2017 aasta reeglite j�rgi - sotsiaalmaks oli 33% ja t��andja t��tuskindlustusmakse oli 0.8%
*/
	
main(){
	
	float B, T, N;
	
	printf("Mis on teie brutopalk eurodes?\n");
	scanf("%f", &B);

	T = B*(1+0.33+0.008);
	N = (B*(1-0.016-0.02)-180)*(1-0.20)+180;
	
	printf("\nKui t��taja brutopalk on %.2f eurot, siis t��andja maksab %.2f eurot ja t��taja saab k�tte puhtalt %.2f eurot.\n", B, T, N);
}
