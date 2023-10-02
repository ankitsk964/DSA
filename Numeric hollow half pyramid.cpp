//
// Created by Ankit Kumar on 10/2/2023.
//
#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

    for(int i = 1; i<=n ; i++){
        for(int j = 1; j<=i ; j++){
            if(j==1 || i==n || j==i){
                cout << j;
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}