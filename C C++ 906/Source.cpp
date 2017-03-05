#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Carte{
	public:
		char titlu[264];
		char autor[64];
		float pret;
		void arata_titlu(){
			cout << titlu << endl;};
		float da_pret(){
			return (pret);
		};
		void arata_carte();
		void atrib_editura(char *nume){
			strcpy(editura, nume);
			};
	private:
		char editura[256];
		void arata_editura(){
			cout << editura << endl;
		};

};

void Carte::arata_carte(){
	arata_titlu();
	arata_editura();
};

void main(){
	Carte capitole, jurnal;

	strcpy(capitole.titlu, "Jamsa");
	strcpy(capitole.autor, "Jamsa si Klander");
	capitole.pret = 50;
	capitole.atrib_editura("Jamsa Press");

	strcpy(jurnal.titlu, "All my Secrets...");
	strcpy(jurnal.autor, "Kris Jamsa");
	jurnal.pret = 9.95;
	jurnal.atrib_editura("fara");
	capitole.arata_carte();
	jurnal.arata_carte();

	system("pause");
}
