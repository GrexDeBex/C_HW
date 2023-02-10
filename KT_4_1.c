#include <stdio.h>

/*
	Teaduskool, 4. teema, ülesanne 1
	Gregor Rämmal

	ALGARV
	Kirjutada programm, mis küsib kasutajalt täisarvu P ja väljastab sõna “Arv P on algarv”, kui arv jagub ainult iseenda 
	ja ühega, või väljastab kõik arvud, millega jagub antud arv P.
*/

main(){
	int P, Compare_Int, Index;
	double Compare_Double;
	
	printf("Sisestage arv:\n");
	scanf("%d", &P);
	
	int Array[P] = {0};													/*Teeb jada, kus on piisavalt kohti igale arvule, mis jagub kasutaja antud arvuga*/
	
	Index = 0;
	for (int i = 2; i < P; i++){										/*Proovib jagada arvu P iga arvuga 2 kuni P-1*/
		Compare_Int = P / i;											/*Leiab jagatise täisarvulise väärtuse*/
		Compare_Double = (double) P / i;								/*Leiab jagatise täpse väärtuse*/
		
		if (Compare_Int == Compare_Double){								/*Võrdleb, kas P jagub täpselt mingi arvuga*/
			Array[Index] = Compare_Int;									/*Paneb kõik jaguvad arvud jadasse*/
			Index++;
		}
	}
	
	if (Index == 0){
		printf("\nArv %d on algarv.", P);
	
	}else{
		printf("\nArv %d pole algarv ning jagub arvudega:", P);
		
		printf(" %d", Array[0]);
		for (int i = 1; i < P; i++){
			if (Array[i] == 0){											/*Kui massiivi liikmel pole väärtust jäetakse printimine pooleli*/
				break;
			}
			printf(", %d", Array[i]);
		}
	}
}
