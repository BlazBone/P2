#include <stdio.h>
#include <stdlib.h>

void kombinacijeGesel(char* geslo, int dolzina, int i, int balance)
{
	if(i == (dolzina)) {
		if(balance == 0) {
			printf("%s\n", geslo);
		}
		return;
	}

	for(char znak = 'a'; znak <= 'z'; znak++) {
		geslo[i] = znak;
		kombinacijeGesel(geslo, dolzina, i + 1, balance + 1);
	}

	for (int st = 0; st <= 9; st++)
	{
		geslo[i] = st + '0';
		kombinacijeGesel(geslo, dolzina, i + 1, balance - 1);
	}
}

int main()
{
	for(int d = 8; d <= 20; d++) {
		char* geslo = malloc(d * sizeof(char));
		kombinacijeGesel(geslo, d, 0, 0);
	}
	return 0;
}