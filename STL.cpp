#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<stack>
using namespace std;

int main(){
/*
    int basic[4] = {1,2,3,4};
    array<int, 4> arr = {1,2,3,4};

    int size = arr.size();
    cout<<size<<endl;

    cout<<"Element at 2nd address: "<<arr.at(2)<<endl;
    cout<<"Empty or not --> : "<<arr.empty()<<endl;
    cout<<"First element -- : "<<arr.front()<<endl;
    cout<<"Last element -- > : "<<arr.back()<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    vector<int> v ;
    cout<<"Capacity of v is: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity of v is: "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity of v is: "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity of v is: "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"Capacity of v is: "<<v.capacity()<<endl;

    deque<int> d;

    d.push_back(2);
    d.push_front(3);
    d.push_front(4);


    for(int i:d){
        cout<<i<<" ";
    }

    cout<<endl;

    // d.pop_front();

    for(int i:d){
        cout<<i<<" ";
    } 
    cout<<"Element at first index: "<<d.at(0)<<endl;
*/
    stack<string> s;
    s.push("Rajesh");
    s.push("Chandra");
    s.push("Saha");

    cout<<"The element at the top is: "<<s.top()<<endl;

    s.pop();
    cout<<"The element at the top is: "<< s.top()<<endl;

    cout<<"Size of stack: "<< s.size();

}