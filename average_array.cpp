#include<iostream>
using namespace std;

float sum(int x){
    int array[x];
    float sum=0;
    for(int i=0;i<x;i++){
        cout<<"Enter the value of "<<x<<" array ";
        cin>>array[i];
        sum=sum+array[i];
    }
    return sum;
}

int main(){
    int a; 
    cout<<"Enter the length of array: ";
    cin>>a;
    cout<<sum(a)/a;
    return 0;
}