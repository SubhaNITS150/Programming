#include<bits/stdc++.h>
using namespace std;

int count_stones(int n, string stones){
    int i = 0;
    int count = 0;

    while(i < n){
        if(stones[i] == stones[i+1]){
            count++;
        }
        i++;
    }

    return count;
}

int main(){

    int n;
    cin >> n;

    string stones;
    cin >> stones;

    int result = count_stones(n, stones);

    cout << result << endl;

    return 0;
}