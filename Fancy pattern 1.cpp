//
// Created by Ankit Kumar on 10/2/2023.
//
#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

//    for first star triangle
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=(n+4-i); j++){
            cout << "*";
        }
//        for centre half triangle
        for(int j = 1; j<=i; j++){
            cout << i << "*";
        }
        for(int j = 1; j<=(n+3-i); j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;

}