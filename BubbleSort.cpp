#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=1; i<n; i++){
        for( int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void PrintArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main() {

    int arr1[] = {1,5,3,12,60,9,0,15};
    // int size = arr1.size();
    // cout<<size<<endl;

    int size = sizeof(arr1)/sizeof(arr1[0]);

    bubbleSort(arr1,size);
    PrintArray(arr1,size);

}