#include<bits/stdc++.h>
using namespace std;

bool boyGirl(string str){
    int hash_arr[257] = {0};

    for(int i = 0; i < str.size(); i++){
        hash_arr[str[i] - 'a']++;
    }
    int count = 0;

    // int size = hash_arr.size();

    for(int j = 0; j < 257; j++){
        if(hash_arr[j] > 0){
            count++;
        }
    }

    if(count % 2 == 0){
        return false;
    }
    else{
        return true;
    }
}

int main(){

    string str;
    cin>>str;

    if(boyGirl(str) == true){
        cout<< "CHAT WITH HER" <<endl;
    }
    else{
        cout << "IGNORE HIM!"<<endl;
    }

    return 0;
}