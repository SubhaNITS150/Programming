#include<iostream>
using namespace std;

int main(){

    int cost, dollar, bananas;
    cin >> cost >> dollar >> bananas;

    int sum = cost * ((bananas * (bananas + 1))/2);

    if(sum <= dollar){
        cout << 0 <<endl;
    }

    cout << sum - dollar <<endl;

    return 0;
}