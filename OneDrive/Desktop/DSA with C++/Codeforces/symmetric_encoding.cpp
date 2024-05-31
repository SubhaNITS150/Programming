#include<bits/stdc++.h>
using namespace std;

string symmetricEncoding(string str, int n){
    int i = 0;

    while(i < n/2){
        //Swapping the components.
        char temp = str[i];
        str[i] = str[n - i -1];
        str[n - i - 1] = temp;
        
        i++;
    }
    return str;
}


int main(){

    //Initialization and Taking input 
    int i;

    //No. of letters
    int n;   
    cin>>n;       
    
    //Character input on string.
    string str;
    cin>>str;

    str = symmetricEncoding(str, n);

    cout<<str<<endl;

    return 0;
}