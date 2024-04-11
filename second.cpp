#include<iostream>
using namespace std;

int main(){
    int n;
    
    do{
        cout<<"Enter the Height ";
        cin>>n;
    }
    while(n<1 || n>8);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"#";
            }
        }
        cout<<"  ";
        for(int j=1;j<=i;j++){
            cout<<"#";
            }
        cout<<endl;
    }
}   