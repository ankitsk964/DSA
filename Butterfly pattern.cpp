//
// Created by Ankit Kumar on 10/5/2023.
//
#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
//  forupper part of butterfly
    for(int i = 1; i<=n ; i++){
//        for left upper half of butterfly
        for(int j = 1; j<=i ; j++){
            cout << "*";
        }
//        for centre space print
        for(int j = 1; j<=(2*n-2*i);j++){
            cout << " ";
        }
//        for right upper half of butterfly
        for(int j = 1; j<=i ; j++){
            cout << "*";
        }

        cout << endl;

    }
//  for lower part of butterfly
    for(int i = 1; i<=n ; i++){
//        for left lower half of butterfly
        for(int j = 1; j<=(n-i+1) ; j++){
            cout << "*";
        }
//        for lower centre space print
        for(int j = 1; j<=(2*i-2);j++){
            cout << " ";
        }
//        for right lower half of butterfly
        for(int j = 1; j<=(n-i+1) ; j++){
            cout << "*";
        }

        cout << endl;

    }
    return 0;
}