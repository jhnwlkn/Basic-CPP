#include<iostream>
#include<algorithm>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar posisi elemen jika elemen berikutnya lebih kecil
                swap(arr[j], arr[j + 1]);
                // int temp = arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
            }
        }
    }
}

// 1,5,2,7,3,9,1
// 1,2,5,3,7,1,9
// 1,2,3,5,1,7,9
// 1,2,3,1,5,7,9
// 1,2,1,3,5,7,9
// 1,1,2,3,5,7,9
// 1,1,2,3,5,7,9

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
    int minIndex = i;
    // Cari elemen terkecil dalam sisa array yang belum terurut
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Tukar elemen terkecil dengan elemen pertama dalam sisa array yang belum terurut
        swap(arr[i], arr[minIndex]);
    }
    cout << "Sesudah di sorting: ";
    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
}

void quickSort(int arr[], int left, int right) {
    if (left >= right) {
        return; // Basis: Array kosong atau hanya memiliki satu elemen
    }
    int pivot = arr[(left + right) / 2]; // Pilih elemen tengah sebagai pivot
    int i = left, j = right;
    // bagi array ke dua bagian
    while (i <= j) {
        while (arr[i] < pivot) {
            i++; // Cari elemen yang lebih besar dari pivot di sebelah kiri
        }
        while (arr[j] > pivot) {
            j--; // Cari elemen yang lebih kecil dari pivot di sebelah kanan
        }
        if (i <= j) {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    // Quick Sort rekursif untuk bagian kiri dan kanan dari pivot
    quickSort(arr, left, j);
    quickSort(arr, i, right);
}

int main(){
    int arr[]={1,5,2,7,3,9,1};
    int n = sizeof(arr)/sizeof(int);
    cout << "Sebelum di sorting: ";
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
    // bubbleSort(arr, sizeof(arr)/sizeof(int));
    // selectionSort(arr, sizeof(arr)/sizeof(int));
    sort(arr,arr+n);
    
    cout << "Sesudah di sorting: ";
    for(int i : arr){
        cout << i << " ";
    }

    return 0;
}