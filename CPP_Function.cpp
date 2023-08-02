#include<iostream>
using namespace std;
// tipe_data nama_fungsi(parameter)
int tambah(int x, int y){ // dalam tanda kurung = parameter
    return x+y; // mengembalikan nilai ke fungsi utama
}

string nama_lengkap(string namaDepan, string namaBelakang){
    return namaDepan + " " + namaBelakang;
}

int kurang(int a, int b){
    return a-b;
}

void cetak(string fname, string lname){
    cout << "Nama depan: " << fname << endl;
    cout << "Nama belakang: " << lname << endl;
    cout << "Nama lengkap: " << fname + " " + lname;
}

int faktorial(int n){ // 5
    if(n == 0 || n == 1){
        return 1;
    } else {
        return n * faktorial(n-1);
    } 
}

int main(){
    int a;
    int b;

    // cin >> a >> b;
    // cout << kurang(5,3) << endl;
    // cout << kurang(a,b) << endl;
    // cout << kurang(b,a);

    // cout << tambah(a,b);

    // string fname, lname;
    // getline(cin,fname);
    // getline(cin,lname);
    // cout << nama_lengkap(fname, lname);
    // cetak(fname,lname); 
    // cout << endl;
    // cetak("mikee", "nicol");

    int n;

    cin >> n;

    cout << faktorial(n);
//  1! = 1 (1)
//  2! = 2 (2*1)
//  3! = 6 (3*2*1)
//  4! = 24 (4*3*2*1)
//  5! = 120
//  6! = 720
//  7! = 5040
//  8! = 40.320
//  9! = 362.880
//  10!= 3.628.800

    return 0;
}