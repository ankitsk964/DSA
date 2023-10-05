//
// Created by Ankit Kumar on 10/5/2023.
//
#include <iostream>
using namespace std;

int main(){

    int n=4,count=1;
//    cin >> n;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=(2*i -1); j++){
            if(j%2 != 0){
                cout << count;
                count++;
            }
            else{
                cout << "*";
            }

        }
        cout << endl;
    }
    for(int i = 1; i<=n; i++){
        int c = 0;
        for(int j = 1; j<=count; j++){

            if(j%2 != 0){
                if(i==1){
                    count--;
                    c++;
                    cout << 2*n - i + c-1;
                }
                else if(i==2){
                    count--;
                    c++;
                    cout << 2*i + c - 1;
                }
                else if(i==3){
                    count--;
                    c++;
                    cout << i-1 + c- 1;
                }
                else if(i==4){
                    c++;
                    cout << 1;
                }
            }
            else{
                if(i==4){
                    break;
                }else{
                    cout << "*";
                }

            }


        }
        cout << endl;
    }
    return 0;

}