#include<iostream>
//#include<cstring>
using namespace std;

int main(){
    string name;
    cout<<"Name: ";
    cin>>name;
    for(int i=0, n=name.size();i<n;i++){
        name[i]=toupper(name[i]);
    }
    cout<<"Length: "<<name.size()<<endl;
    cout<<name;
    return 0;
}