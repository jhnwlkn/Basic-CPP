#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int sequentialSearch(int arr[], int n, int target){
    for(int i = 0; i < n; i++){ // 4, 2, 7, 8, 3, 5, 1, 10
        if (arr[i] == target){  // 7, 7, 7
            return i;
        }
    }
    return -1;
}

bool binarySearch(int arr[], int n, int target){
    int left = 0, right = n-1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == target){
            return true;
        } else if(arr[mid] < target){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

int main(){
            //   1,2,3,4,5,7,8,10
    // int arr[] = {4,2,7,8,3,5,1,10}; // n = 8
    // int target;
    // int* result;

    // cin >> target;
    // int n = sizeof(arr)/sizeof(int);

    // result = sequentialSearch(arr, n, target);
    // sort(begin(arr),end(arr));
    // result = binarySearch(arr,n,target);

    // Sequential
    // if(result == -1){
    //     cout << "Elemen tidak ditemukan di dalam array tersebut!";
    // } else {
    //     cout <<"Element "<<target<<" berada pada posisi ke-"<<result+1<<endl;
    // }

    // Binary
    // if(result == false){
    //     cout << "Elemen tidak ditemukan di dalam array tersebut!";
    // } else {
    //     cout <<"Element ditemukan!";
    // }

    // STL
    // result = find(begin(arr),end(arr),target);
    // if(result == end(arr)){
    //     cout << "Elemen tidak ditemukan di dalam array tersebut!";
    // } else {
    //     int posisi = result - begin(arr);
    //     cout <<"Element "<<target<<" berada pada posisi ke-"<<posisi+1<<endl;
    // }

    // Searching string
    string text = "Hai perkenalkan nama saya John Wilken";
    string target = "nama";

    size_t found = text.find(target);

    if(found != string::npos){
        cout << "Target ditemukan!";
    } else {
        cout << "Target tidak ditemukan";
    }

    return 0;
}