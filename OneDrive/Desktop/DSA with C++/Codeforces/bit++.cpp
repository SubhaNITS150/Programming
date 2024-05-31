#include<bits/stdc++.h>
using namespace std;

int main(){

    //Number of statements

    int n;
    cin >> n;

    char s[n*3];
    
    for(int i = 0; i < n*3; i++){
        cin >> s[i];
    }

    int count = 0;

    for(int i = 0; i < n*3; i++){
        if(s[i] == '+' && s[i+1] == '+'){
            count++;
        }
        else if(s[i] == '-' && s[i+1] == '-'){
            count--;
        }
    }
    cout << count << endl;
    
   return 0;
}