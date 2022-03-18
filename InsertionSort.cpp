#include<iostream>
using namespace std;
/*
void insertionSort (int arr[], int n){
    for(int i=1; i<n; i++ ){
        int temp = arr[i];
        int j = i-1;
        for( ; j>=0; j--){
            if( arr[j] > temp ){
                //shift
                arr[j+1]= arr[j];
            }
            else {
                //Ruk Jao
                break;
            }

        // arr[j+1] = temp;
        }
        arr[j+1] = temp;
    }
} */

void InsertionSort(int arr[], int n){
    int i,j,v;
    for(i=1; i<=n-1 ; i++){
        v= arr[i];
        j=i;
        
        while(arr[j-1] > v && j >= 1){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = v;
    }
}
void print(int arr[], int size ){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int A[7] = {10,1,7,4,8,2,11};
    // int size = sizeof(A)/sizeof(A[0]);
    // insertionSort(A,7);
    InsertionSort(A,7);
    print(A,7);
}