/*
Harjoitus 21 (Palautus vko 48)
Muunna harjoitus 11 niin, etta k‰yt‰t seuraavia aliohjelmia:

int KysyValinta(void);

-> KysyValinta paluttaa k‰ytt‰j‰n antaman valintanumeron (0-6)

double Summa(float luku1, int luku2);

-> Summa laskee yhteen annetut tiedot ja palauttaa summan p‰‰ohjelmaan

Juho Nissi
19.11.2014
versio1.0
*/
#include <iostream>
using namespace std;

int KysyValinta();
double summa(float luku1, int luku2);

int main()
{
	int valinta;
	float luku1;
	int luku2;

	cout << "Anna luku1 ";
	cin >> luku1;
	cout << "Anna luku2 ";
	cin >> luku2;

	do{
		
		valinta = KysyValinta();
		switch (valinta)
		{
		case 0: exit(0);
		case 1:	cout << "\nLukujen summa on: " << summa(luku1,luku2) << endl;
			break;
		case 2: cout << "\nLukujen erotus on: " << luku1 - luku2 << endl;
			break;
		case 3: cout << "\nLukujen tulo on: " << luku1*luku2 << endl;
			break;
		case 4: {if (luku2 == 0){ cout << "\nNollalla ei voida jakaa!" << endl; }
				else { cout << "\nLukujen osamaara on: " << luku1 / luku2 << endl; }
				break; }
		case 5: {if (luku2 == 0){ cout << "\nJakojaanosta ei voida ilmoittaa kun jakana on nolla!" << endl; }
				else { cout << "\nLuvuista jaljelle jaava jakojaannos on: " << ((int)luku1%luku2) << endl; }
				break; }
		case 6: cout << "\nAnna uudet luvut." << endl;
			cout << "Anna luku1 ";
			cin >> luku1;
			cout << "Anna luku2 ";
			cin >> luku2;
			break;
		default: cout << "\nVirhe: ei ko. toimintoa!" << endl;
			break;
		}
	} while (valinta = !0);
}
int KysyValinta()
{
	int valinta;
	cout << "VALIKKO";
	cout << "\n\n0 Lopetus";
	cout << "\n1 Summa ";
	cout << "\n2 Erotus ";
	cout << "\n3 Tulo ";
	cout << "\n4 Osamaara ";
	cout << "\n5 Jakojaannos ";
	cout << "\n6 Syota uudet luvut laskemista varten" << endl;
	cin >> ws >> valinta;
	return valinta;
}
double summa(float luku1,int luku2)
{
	return luku1 + luku2;

}