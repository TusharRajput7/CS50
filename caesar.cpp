#include<iostream>
#include<cstring>
using namespace std;

int main(int argc, char* argv[]){

    //Checks if CLA matches the conditions
    if(argc!=2 || atoi(argv[1])<0){
        cout<<"Usage: ./caesar key\n";
        return 1;
    }
    //Caesar formula
    else{
        string plaintext;
        cout<<"Enter: ";
        getline(cin,plaintext);
        for(int i=0, n=plaintext.size();i<n;i++){
            if(isupper(plaintext[i])){
                plaintext[i]='A' + ((int)plaintext[i]-'A' + atoi(argv[1]))%26;
            }
            else if(islower(plaintext[i])){
                plaintext[i]='a' + ((int)plaintext[i]-'a' + atoi(argv[1]))%26;
            }
        }
        cout<<plaintext;
        return 0;
    }
}