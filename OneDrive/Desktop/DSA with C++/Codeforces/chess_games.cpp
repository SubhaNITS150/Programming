#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    int anton = 0;
    int danik = 0;

    int i;

    for(i = 0; i < s.size(); i++){
        if(s[i] == 'A'){
            anton++;
        }
        if(s[i] == 'D'){
            danik++;
        }
    }

    if(anton > danik){
        cout <<  "Anton" << endl;
    }
    else if(anton < danik){
        cout << "Danik" << endl;
    }
    else{
        cout <<  "Friendship" << endl;
    }
    return 0;
}