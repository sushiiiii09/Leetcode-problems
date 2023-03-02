#include<iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m ,int arr3[],){

    int i =0;
    int j=0;
    int k=0;

     while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        } 
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
     }
     //copy first array k elemnets{
        while(i<n){
            arr3[k] = arr1[i];
            k++;
            i++;
        }

        //copy second array k elements
        while(j<m){
            arr2[k] = arr2[j];
            k++;
            j++;
        }
     }
}

int main(){

int arr1[5]={1,3,5,7,9};
int arr2[3]={2,4,6};

int arr3[8]={0};
merge(arr1, 5, arr2, 3);
print(arr3,8);
    return 0;

}



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n ) {

        int i=0;
        int j=0;
        int k =0;
        int nums3[m+n];

        while(i<m && j<n){
            if(nums1[i] < nums2[j]){
                nums3[k]=nums1[i];
                i++;
                k++;
            }
            else{
                nums3[k]=nums2[j];               
                k++;
                j++;
            }
        }
        while(i<m){
            nums3[k]=nums1[i];
            k++;i++;
        }
        while(j<n){
             nums3[k]=nums2[j];
           j++;k++;
        }
        for(i=0;i<m;i++){
             nums1[i]=nums3[i];
        }       
    }  
};