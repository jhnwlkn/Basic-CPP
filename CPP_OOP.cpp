#include<iostream>
using namespace std;

class Car{
private :
    string merk;
    int tahun;
    string warna;
    double harga;

public:
    void setMerk(string merk){
        this->merk=merk;
    }

    string getMerk(){
        return this->merk;
    }

    void setTahun(int tahun){
        this->tahun=tahun;
    }

    int getTahun(){
        return this->tahun;
    }

    void setWarna(string warna){
        this->warna=warna;
    }

    string getWarna(){
        return this->warna;
    }

    void setHarga(double harga){
        this->harga=harga;
    }

    double getHarga(){
        return this->harga;
    }

    void maju(){
        cout << "Mobil " << merk << " sedang maju." << endl;
    }

    void berhenti(){
        cout << "Mobil " << merk << " sedang berhenti." << endl;
    }

    double hitung_kecepatan(double jarak, double waktu){
        return jarak/waktu;
    }
};

class BangunDatar{
public: 
    float luas(){
        cout << "Menghitung luas bangun datar" << endl;
        return 0;
    }

    float keliling(){
        cout << "Menghitung keliling bangun datar" << endl;
        return 0;
    }

};

class Persegi : public BangunDatar{
private:
    float sisi;

public:
    Persegi(float s) : sisi(s) {}

    float luas() {
        float luas = sisi * sisi;
        cout << "Luas Persegi: " << luas << endl;
        return luas;
    }

    float keliling() {
        float keliling = 4 * sisi;
        cout << "Keliling Persegi: " << keliling << endl;
        return keliling;
    }
};

int main(){
    Car mobil1, mobil2;
    // Persegi kotak1(4);

    // mobil1.merk = "Toyota";
    // mobil1.tahun = 2010;
    // mobil1.warna = "Merah";
    // mobil1.harga = 20000.5;

    // mobil2.merk = "Volvo";
    // mobil2.tahun = 2012;
    // mobil2.warna = "Hitam";
    // mobil2.harga = 18000.5;

    // mobil1.setMerk("Toyota");
    // mobil1.setTahun(2010);
    // mobil1.setWarna("Merah");
    // mobil1.setHarga(20000.5);

    // mobil2.setMerk("Volvo");
    // mobil2.setTahun(2012);
    // mobil2.setWarna("Hitam");
    // mobil2.setHarga(18000.5);

    // cout << "Merk mobil 1: " << mobil1.getMerk() << endl;
    // cout << "Tahun mobil 1: " << mobil1.getTahun() << endl;
    // cout << "Warna mobil 1: " << mobil1.getWarna() << endl;
    // cout << "Harga mobil 1: " << mobil1.getHarga() << endl;

    // cout << endl << endl;

    // cout << "Merk mobil 2: " << mobil2.getMerk() << endl;
    // cout << "Tahun mobil 2: " << mobil2.getTahun() << endl;
    // cout << "Warna mobil 2: " << mobil2.getWarna() << endl;
    // cout << "Harga mobil 2: " << mobil2.getHarga() << endl;

    // cout << endl << endl;

    // mobil1.maju();
    // cout << endl;
    // mobil2.maju();
    // cout << endl;
    // mobil1.berhenti();
    // cout << endl;
    // mobil2.berhenti();
    
    Persegi persegi(5);
    persegi.luas();
    persegi.keliling();

    return 0;
}