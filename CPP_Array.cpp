#include <iostream>
using namespace std;

int main(){
    // nilai kelas a = 100, 90, 80, 85, 75, 95, 100
    
    // nilai[0] = 100;
    // nilai[1] = 900;
    // nilai[2] = 80;
    // nilai[3] = 85;
    // nilai[4] = 75;
    // nilai[5] = 95;
    // nilai[6] = 100;

    int nilai[7] = {100, 90, 80, 85, 75, 95, 100};
    //   elemen  :   1   2   3   4   5   6    7
    //    index  :   0   1   2   3   4   5    6

    // output keseluruhan array
    cout << "Isi dari array nilai: ";
    for(int i = 0; i < 7; i++){
        cout << nilai[i] << " ";
    }
    for(int i : nilai){
        cout << i << " ";
    }

    cout << endl << "Isi dari array nilai dari belakang: ";
    for(int i = 6; i >= 0; i--){
        cout << nilai[i] << " ";
    }

    int limit = 0;
    while(limit != 7){
        cout << nilai[limit] << " ";
        limit++;
    }

    // sizeof
    int arr[] = {1,2,3,1,1,2,4,12,3,4,213,4,3,2,1,4,5,2,2,3};
    int panjangArray = sizeof(arr)/sizeof(int);
    cout << panjangArray;

    for(int i=0; i < panjangArray; i++){
        cout << arr[i] << " ";
    }

    char nama[10] = {'J', 'o', 'h', 'n', ' ', 'W', 'i', 'l', 'k', 'e'};
    for(char c : nama){
        cout << c;
    }

    return 0;
}