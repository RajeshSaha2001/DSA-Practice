#include<iostream>
using namespace std;

void reverse( int array[], int n ){

    int start =0;
    int end = n-1;

    while ( start<=end) {

        swap(array[start], array[end]);

        start++;
        end--;
    }
}

void PrintArray( int array[], int n) {

    for(int i=0; i<n; i++) {

        cout<< array[i] << " ";
    }
}

int main() {
    int arr[6] = {2,3,4,8,9,7};
    int brr[5] = {65,87,12,45,100};

    reverse (arr, 6);
    reverse (brr, 5);

    PrintArray(arr, 6);
    cout<<endl;
    PrintArray(brr, 5);

}