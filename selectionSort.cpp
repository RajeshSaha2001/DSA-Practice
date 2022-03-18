#include<iostream>
using namespace std;


void selectionSort(int arr[], int n){
    for (int i=0; i< n-1; i++ ){
        int minIndex = i;
        
        for(int j= i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        swap(arr[minIndex],arr[i]);
    }
}

void PrintArray (int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
}


int main (){
    int raj[] = {12,5,3,55,21,1};
    int n = sizeof(raj)/ sizeof(raj[0]);
    selectionSort(raj,n); 
    PrintArray(raj, n);

}