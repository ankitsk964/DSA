//
// Created by Ankit Kumar on 10/2/2023.
//
#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

//    for upper half of diamond
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
//    for lower half of diamond
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=(n-i); j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;

}