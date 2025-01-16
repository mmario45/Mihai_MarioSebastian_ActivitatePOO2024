#include <iostream>

using namespace std;

//Task suplimentar2

class Laptop {
public:
    string brand;
    int RAM;
    float pret;
    static int garantieStandard;
    const int anFabricatie;
    string* model;

    Laptop() : anFabricatie(2023) {
        brand = "Generic";
        RAM = 8;
        pret = 2500.0;
        model = new string("Basic");
    }

    Laptop(string brand) : anFabricatie(2023) {
        this->brand = brand;
        RAM = 16;
        pret = 4000.0;
        model = new string("Pro");
    }

    Laptop(string brand, int RAM, float pret, int an, string model) : anFabricatie(an) {
        this->brand = brand;
        this->RAM = RAM;
        this->pret = pret;
        this->model = new string(model);
    }

    ~Laptop() {
        delete[] model;
    }

    void afisare() {
        cout << "Brand: " << brand << ", RAM: " << RAM << " GB, Pret: " << pret << ", An fabricatie: " << anFabricatie << ", Model: " << *model << endl;
    }

    static void modificaGarantie(int nouaGarantie) {
        if (nouaGarantie > 0) {
            garantieStandard = nouaGarantie;
        }
    }
};

int Laptop::garantieStandard = 2;

class Telefon {
public:
    string marca;
    int memorie;
    float pret;
    static int TVA;
    const int anLansare;
    string* model;

    Telefon() : anLansare(2022) {
        marca = "Generic";
        memorie = 64;
        pret = 1200.0;
        model = new string("Basic");
    }

    Telefon(string marca) : anLansare(2022) {
        this->marca = marca;
        memorie = 128;
        pret = 2000.0;
        model = new string("Pro");
    }

    Telefon(string marca, int memorie, float pret, int an, string model) : anLansare(an) {
        this->marca = marca;
        this->memorie = memorie;
        this->pret = pret;
        this->model = new string(model);
    }

    ~Telefon() {
        delete[] model;
    }

    void afisare() {
        cout << "Marca: " << marca << ", Memorie: " << memorie << " GB, Pret: " << pret << ", An lansare: " << anLansare << ", Model: " << *model << endl;
    }

    static void modificaTVA(int noulTVA) {
        if (noulTVA > 0) {
            TVA = noulTVA;
        }
    }
};

int Telefon::TVA = 19;

class Smartwatch {
public:
    string brand;
    bool areGPS;
    float pret;
    static int durataBaterieStandard;
    const int anLansare;
    string* model;

    Smartwatch() : anLansare(2021) {
        brand = "Generic";
        areGPS = true;
        pret = 800.0;
        model = new string("Basic");
    }

    Smartwatch(string brand) : anLansare(2021) {
        this->brand = brand;
        areGPS = false;
        pret = 600.0;
        model = new string("Lite");
    }

    Smartwatch(string brand, bool areGPS, float pret, int an, string model) : anLansare(an) {
        this->brand = brand;
        this->areGPS = areGPS;
        this->pret = pret;
        this->model = new string(model);
    }

    ~Smartwatch() {
        delete[] model;
    }

    void afisare() {
        cout << "Brand: " << brand << ", GPS: " << areGPS  << ", Pret: " << pret << ", An lansare: " << anLansare << ", Model: " << *model << endl;
    }

    static void modificaDurataBaterie(int nouaDurata) {
        if (nouaDurata > 0) {
            durataBaterieStandard = nouaDurata;
        }
    }
};

int Smartwatch::durataBaterieStandard = 24;

int main() {

    Laptop l1;
    Laptop l2("Dell");
    Laptop l3("Apple", 32, 8000.0, 2023, "MacBook Pro");

    l1.afisare();
    l2.afisare();
    l3.afisare();

    Telefon t1;
    Telefon t2("Samsung");
    Telefon t3("iPhone", 256, 6000.0, 2023, "14 Pro Max");

    t1.afisare();
    t2.afisare();
    t3.afisare();

    Smartwatch s1;
    Smartwatch s2("Fitbit");
    Smartwatch s3("Garmin", true, 2000.0, 2022, "Forerunner 945");

    s1.afisare();
    s2.afisare();
    s3.afisare();

    return 0;
}
