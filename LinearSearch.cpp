#include<iostream>
using namespace std;

bool Search(int array[], int size , int key) {
    for(int i=0; i<size ; i++) {

        if(array[i] == key ) {
            return 1;
        }
    }
    return 0;
}

int main() {

    int rajesh[10] = {0,12,54,8,9,-2,0,-5,11,3};
    cout<<"Enter the number you want to search for: ";
    int key;
    cin>> key;

    bool found = Search(rajesh, 10, key) ;
    
    if(found) {
        cout<< key <<" is found."<< endl;
    }

    else {
        cout<< key <<" not found." << endl;
    }


}