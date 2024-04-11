#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    string strings[]={"battleship","boot","cannon","iron","thimble","top hat"};
    for(int i=0; i<6;i++){
        if(strings[i]==argv[1]){
            cout<<"Found\n";
            return 0;
        }
    }
    cout<<"Not Found\n";
    return 1;
}