#include<iostream>
using namespace std;

void draw(int n){
    //If nothing to draw
    if(n<=0){
        return;
    }
    //Print pyramid of height n-1
    draw(n-1);

    //Print one more row
    for(int i=0;i<n;i++){
        cout<<"#";
    }
    cout<<endl;
}

int main(){
    int height;
    cout<<"Enter the Height: ";
    cin>>height;
    draw(height);
}