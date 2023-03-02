#include <iostream>
using namespace std;
void reverse(int arr[],int n)//n is size
{
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
      
}