#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2,5,6,8,7};

    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;

    cout<<temp<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}