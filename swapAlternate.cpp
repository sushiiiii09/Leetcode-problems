#include<iostream>
using namespace std;

int altSwap(int arr[], int n){
    
    for(int i=0; i< n ; i+=2){
        if(i+1 < n){
            swap (arr[i], arr[i+1]);
        }

    }
}
