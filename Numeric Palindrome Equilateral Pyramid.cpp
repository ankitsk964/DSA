//
// Created by Ankit Kumar on 10/2/2023.
//
#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

    for(int i = 1; i<=n; i++){
//    for space print
        for(int j = 1; j<=(n-i); j++){
            cout << " ";
        }
//        for first half inverted triangle print
        for(int j = 1; j<=i; j++) {
            cout << j;
        }
//        for 2nd inverted half triange print
        for(int j = 1; j<=(i-1); j++){
            if(i==1){
                continue;
            }
            else{
                cout << i-j;
            }

        }
        cout << endl;
    }
    return 0;
}