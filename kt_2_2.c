#include<stdio.h>

/*
	Teaduskool, 2. teema, ülesanne 2
	Gregor Rämmal

	PALGAKALKULAATOR 2017
	Kirjutada programmi, mis küsib kasutajalt tema brutopalga B (aastal 2017 miinimumpalk oli 470 eurot, ehk arvestada sellega et kasutaja alati sisestab B >= 470), ja väljastab:
	-summa T, mida tööandja maksab
	-netopalk N, mida töötaja saab kätte palgapäeval.
	*Netopalk N arvutada 2017 aasta reeglite järgi - maksuvaba tulu oli 180 eurot, töötaja töötuskindlustusmakse on 1.6%, kogumispensioon (II sammas) oli 2%.
	
	Tööandja kulu T samuti arvutada 2017 aasta reeglite järgi - sotsiaalmaks oli 33% ja tööandja töötuskindlustusmakse oli 0.8%
*/
	
main(){
	
	float B, T, N;
	
	printf("Mis on teie brutopalk eurodes?\n");
	scanf("%f", &B);

	T = B*(1+0.33+0.008);
	N = (B*(1-0.016-0.02)-180)*(1-0.20)+180;
	
	printf("\nKui töötaja brutopalk on %.2f eurot, siis tööandja maksab %.2f eurot ja töötaja saab kätte puhtalt %.2f eurot.\n", B, T, N);
}
