#include<iostream>
#include<cstring>
using namespace std;

int score(string word){
    int points[26]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    int score=0;
    for(int i=0,n=word.size();i<n;i++){
        word[i]=toupper(word[i]);
        int a=word[i]-'A';
        score+=points[a];
    }
    return score;
}

int main(){
    string word[2];
    cout<<"Player 1:";
    cin>>word[0];
    cout<<"Player 2:";
    cin>>word[1];

    int score1=score(word[0]);
    int score2=score(word[1]);
    if(score1>score2){
        cout<<"Player 1 Wins!";
    }
    else if(score1<score2){
        cout<<"Player 2 Wins!";
    }
    else{
        cout<<"Tie!";
    }
}