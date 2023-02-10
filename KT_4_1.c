#include <stdio.h>

/*
	Teaduskool, 4. teema, �lesanne 1
	Gregor R�mmal

	ALGARV
	Kirjutada programm, mis k�sib kasutajalt t�isarvu P ja v�ljastab s�na �Arv P on algarv�, kui arv jagub ainult iseenda 
	ja �hega, v�i v�ljastab k�ik arvud, millega jagub antud arv P.
*/

main(){
	int P, Compare_Int, Index;
	double Compare_Double;
	
	printf("Sisestage arv:\n");
	scanf("%d", &P);
	
	int Array[P] = {0};													/*Teeb jada, kus on piisavalt kohti igale arvule, mis jagub kasutaja antud arvuga*/
	
	Index = 0;
	for (int i = 2; i < P; i++){										/*Proovib jagada arvu P iga arvuga 2 kuni P-1*/
		Compare_Int = P / i;											/*Leiab jagatise t�isarvulise v��rtuse*/
		Compare_Double = (double) P / i;								/*Leiab jagatise t�pse v��rtuse*/
		
		if (Compare_Int == Compare_Double){								/*V�rdleb, kas P jagub t�pselt mingi arvuga*/
			Array[Index] = Compare_Int;									/*Paneb k�ik jaguvad arvud jadasse*/
			Index++;
		}
	}
	
	if (Index == 0){
		printf("\nArv %d on algarv.", P);
	
	}else{
		printf("\nArv %d pole algarv ning jagub arvudega:", P);
		
		printf(" %d", Array[0]);
		for (int i = 1; i < P; i++){
			if (Array[i] == 0){											/*Kui massiivi liikmel pole v��rtust j�etakse printimine pooleli*/
				break;
			}
			printf(", %d", Array[i]);
		}
	}
}
