#include <iostream>

using namespace std;

class Magazin {
public:
	string oras;
	int nrAngajati;
	float suprafata;
	const int anDeschidere;
	static int impozitM2;

	Magazin() :anDeschidere(2024), nrAngajati(2) {
		this->oras = "Bucuresti";
		this->suprafata = 50;

	}

	void afisare() {
		cout << "Oras: " << this->oras << endl;
		cout << "Numar angajati: " << this->nrAngajati << endl;
		cout << "Suprafata: " << this->suprafata << endl;
		cout << "An deschidere: " << this->anDeschidere << endl;
		cout << "Impozit pe m2: " << Magazin::impozitM2 << endl;
	}

	Magazin(string oras, int nrAngajati, float suprafata, int an) :anDeschidere(an) {
		this->oras = oras;
		this->nrAngajati = nrAngajati;
		this->suprafata = suprafata;

	}

	float calculeazaSuprafataMedie() {
		if (this->nrAngajati != 0)
		{
			return this->suprafata / this->nrAngajati;
		}
		else {
			return 0;
		}
	}

	static void modificaImpozit(int impozit) {
		if (impozit > 0) {
			Magazin::impozitM2 = impozit;
		}
	}

	static float calculeazaSuprafataTotala(Magazin* vector, int nrMagazine) {
		float suma = 0;
		for (int i = 0; i < nrMagazine; i++) {
			suma += vector[i].suprafata;
		}
		return suma;
	}

};
int Magazin::impozitM2 = 2;

int main() {
	Magazin m1;
	m1.afisare();

	m1.modificaImpozit(4);

	cout << endl;
	Magazin m2("Iasi", 7, 200, 2019);
	m2.afisare();

	cout << endl;
	Magazin* pointer = new Magazin("Timisoara", 4, 120, 2022);
	pointer->afisare();
	//-> - dereferentiere + accesare
	cout << endl << "Suprafata medie per angajat este de: " << pointer->calculeazaSuprafataMedie() << endl;

	int nrMagazine = 3;
	Magazin* vector = new Magazin[nrMagazine];
	//[] - deplasare+ dereferentiere
	for (int i = 0; i < nrMagazine; i++)
	{
		cout << endl;
		vector[i].afisare();
	}

	cout << endl << "Suprafata totala: " << Magazin::calculeazaSuprafataTotala(vector, nrMagazine) << endl;
	delete[]vector;
	delete pointer;

	return 0;
}