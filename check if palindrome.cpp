#include<iostream>
using namespace std;

bool checkPalindrome(char a[], int n){//n is size
int start =0;
int end = a.size();
while(start< end){
    if(a[start] != a[end]){
        return 0;
    }
    else{
        start ++;
        end--;

    }
    return 1;
    //case sensitive
    //eg: Noon is not a palindrom but NOON and noon are palindrome
}
}