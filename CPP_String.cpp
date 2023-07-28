#include<iostream>
#include<string> // library string, guna untuk mengakses fungsional yang ada di library tersebut
using namespace std;

int main(){
    string namaDepan = "John";
    string namaBelakang = "Wilken";

    // .length() = berguna untuk mengetahui panjang dari suatu array
    // cout << "Panjang nama depannya adalah " << namaDepan.length() << endl;
    // cout << "Panjang nama belakangnya adalah " << namaBelakang.length();

    // .append() = berguna untuk menggabungkan 2 buah string
    // cout << namaDepan.append(" "+namaBelakang);

    // .erase() = berguna untuk menghapus isi
    // namaBelakang.erase();

    // .swap = menukar value dari 2 buah string yang berbeda
    // cout << "Sebelum di swap: " << namaDepan + " " + namaBelakang << endl;
    // namaBelakang.swap(namaDepan);
    // cout << "Sesudah di swap: " << namaDepan + " " + namaBelakang << endl;

    // string word, word2;
    // cout << "Inputkan kalimat pertama: ";
    // getline(cin,word);
    // cout << "Input kalimat/kata yang ingin di cari: ";
    // getline(cin,word2);
    // // cout << word << endl << word2 << endl;
    // bool find = word.find(word2);
    // if(!find){
    //     cout << "Kata yang anda cari ada di dalam variabel word";
    // } else {
    //     cout << "Kata yang anda cari tidak ada dalam variabel word";
    // }

    return 0;
}