#include<bits/stdc++.h>
using namespace std;

string Capitalization(string str){
    str[0] = toupper(str[0]);
    return str;
}

int main(){

    //String Declaration
    string str;
    cin>>str;

    cout<<Capitalization(str);

    return 0;
}