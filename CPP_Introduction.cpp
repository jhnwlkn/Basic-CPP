#include<iostream> // ini gunanya sebagai library
using namespace std; // efisiensi 

int main(){ // fungsi utama
    // cout << "Hello world!"; // output

    string word;
    int angka;
    double nilai_pi;
    char karakter;

    angka = 1;
    word = "Hello world!";
    nilai_pi = 3.241231234;
    karakter = '1';

    // cout << word << endl;
    // cout << angka + 1 << endl;
    // cout << nilai_pi << endl;
    // cout << karakter;

    // Operator Artimatika
    // +, -, *, /, %
    
    int a, b;
    // cout << a;

    // cout << "Ini adalah nilai a: " << a << endl;
    // cout << "Ini adalah nilai b: " << b << "\n";
    // cout << "Ini adalah hasil a+b: " << a+b << "\n";
    // cout << "Ini adalah hasil a-b: " << a-b << "\n";
    // cout << "Ini adalah hasil a/b: " << a/b << "\n";
    // cout << "Ini adalah hasil a*b: " << a*b << "\n";
    // cout << "Ini adalah hasil a%b: " << a%b;

    // Operator penugasan
    // =, +=, -=, *=, /=
    // a /= 100;
    // cout << a;

    // Operator Pembanding
    // ==, !=, >, <, >=, <=
    
    // if(a!=b){
    //     cout << "ya";
    // } 
    // else {
    //     cout << "ga";
    // }
    a = 10;
    b = 5;
    
    int numpang;

    cout << "Sebelum ditukar: ";
    cout << "a: " << a << ", b: " << b << endl;

    // numpang = 0, a = 10, b = 5
    numpang = a; // numpang = 10, a = 10, b = 5
    a = b; // numpang = 10, a = 5, b = 5
    b = numpang; // numpang = 10, a = 5, b = 10


    cout << "Sesudah ditukar: ";
    cout << "a: " << a << ", b: " << b << endl;
    
    return 0;
}