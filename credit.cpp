#include<iostream>
using namespace std;

int length(unsigned long long x){
    int c=0;
    while(x>0){
        x/10;
        x=x/10;
        c++;
    }
    return c;
}

int add(int a){
    int i=a%10;
    a=a/10;
    int c=i+a;
    return c;
}

bool checksum(unsigned long long a){
    int r=0,s=0;
    unsigned long long p=a;
    for(int i=1;i<=length(a);i++){
        r=p%10;
        if(i%2==0){
            r=r*2;
        }
        if(r>9){
            r=add(r);
        }
        s=s+r;
        p=p/10;
    }
    int x=s%10;
    if(x==0){
        return true;
    }    
    else{
        return false;
    }
}

void condition1(unsigned long long n){
    if(length(n)==15 && n>=340000000000000 && n<350000000000000 || length(n)==15 && n>=370000000000000 && n<380000000000000){
            cout<<"AMEX";
        }

        else if(length(n)==16 && n>=5100000000000000 && n<5600000000000000){
            cout<<"MASTERCARD";
        }

        else if(length(n)==13 && n>=4000000000000 && n<50000000000000 || length(n)==16 && n>=4000000000000000 && n<5000000000000000){
            cout<<"VISA";
        }
    return void();
}

void condition2(void){
    cout<<"INVALID";
    return;
}

int main(){
    unsigned long long n;
    cout<<"Enter Card Number ";
    cin>>n;
    bool condition=checksum(n);
    if(condition==true){
        condition1(n);}
    else if(condition==false){
        condition2();
    }
    return 0;
}