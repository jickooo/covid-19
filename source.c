
#include <stdio.h>

int main()
{
	int i, ukupno_zarazenih, ukupno_preminulih, ukupno_testiranih;
	float procenat_zarazenih;
	
	struct dan
	{
		int br_testiranih,
			br_zarazenih,
			br_preminulih;
	} dan[10];
	
	printf("Unesite podatke o COVID-19 u Srbiji za prethodnih 10 dana:\n");
	
	//Unosenje podataka
	for(i = 0; i < 10; i++)
	{
	printf("\n%d. dan:\n", i+1);
	
	printf("Broj testiranih: ");
	scanf("%d", &dan[i].br_testiranih);
	
	printf("Broj zarazenih: ");
	scanf("%d", &dan[i].br_zarazenih);
	
	printf("Broj preminulih: ");
	scanf("%d", &dan[i].br_preminulih);
	}
	
	//Racunanje ukupnog broja zarazenih, testiranih, i preminulih osoba u periodu od 10 dana
	ukupno_zarazenih = ukupno_testiranih = ukupno_preminulih = 0;
	for(i = 0; i < 10; i++)
	{
		ukupno_zarazenih += dan[i].br_zarazenih;
		ukupno_testiranih += dan[i].br_testiranih;
		ukupno_preminulih += dan[i].br_preminulih;
	}
	
	//Ranucanje procenta zarazenih u odnosu na testirane osobe
	procenat_zarazenih = (float)ukupno_zarazenih / ukupno_testiranih;
	
	//Stampanje procenta zarazenih , testiranih, i preminulih osoba u periodu od 10 dana
	printf("\nUkupan broj zarazenih u periodu od 10 dana: %d", ukupno_zarazenih);
	printf("\nUkupan broj testiranih u periodu od 10 dana: %d", ukupno_testiranih);
	printf("\nUkupan broj premiulih u periodu od 10 dana: %d", ukupno_preminulih);
	
	//Stampanje procenta zarazenih u odnosu  na testirane osobe
	printf("\nProcenat zarazenih osoba u odnosu na testirane je: %.2f%", procenat_zarazenih*100);
	
	return 0;
}
