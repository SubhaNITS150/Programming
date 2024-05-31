#include<bits/stdc++.h>
using namespace std;

int greater_weight(int a, int b){
    int year = 0;

    while(a <= b){
        a *= 3;
        b *= 2;
        year++;
    }
    return year;
}

int main(){

    int a, b;
    cin >> a >> b;

    int result = greater_weight(a, b);

    cout << result << endl;
}