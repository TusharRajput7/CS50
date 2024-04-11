#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{   
    if(argc!=2){
        cout<<"Need arguemtns ";
        return 1;
    }
    cout<<"Hello ";
    for(int i=1;i<argc;i++){
        cout<<argv[i]<<" ";
    }
    return 0;
}