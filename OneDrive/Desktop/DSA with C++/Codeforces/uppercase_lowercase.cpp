#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int count_lower = 0;
    int count_upper = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            count_lower++;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            count_upper++;
        }
    }

    if(count_lower >= count_upper){
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
        cout<<s<<endl;
    }
    else{
        for(int i = 0; i < s.size(); i++){
            s[i] = toupper(s[i]);
        }
        cout<<s<<endl;
    }

    return 0;
}