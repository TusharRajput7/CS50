#include<iostream>
using namespace std;

int get(void){
    int n;
    do{
        cout<<"Change owed ";
        cin>>n;
    }    
    while(n<=0);
    return n;
}

int quaters(int n){
    int quaters=n/25;
    return quaters;
}

int dimes(int n){
    int dimes=n/10;
    return dimes;
}

int nickels(int n){
    int nickels=n/5;
    return nickels;
}

int main(){
    int cents=get();
    int quater=quaters(cents);
    cents-=quater*25;
    int dime=dimes(cents);
    cents-=dime*10;
    int nickel=nickels(cents);
    cents-=nickel*5;
    int sum=quater+dime+nickel+cents;
    cout<<sum;
    return 0;
}