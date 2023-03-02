  //row wise sum
  #include<iostream>
  using namespace std;

void printSum(int arr[][4], int row, int col){
for( int row=0; row<3;row++){
    int sum=0;
    for (int col= 0; col <4; col++){
     sum+= arr[row][col];
    } 
  }
}

//  int largestRowSum(int arr[][3], int rows, int col){

//   int maxi = INT_MIN;
//   int rowIndex=-1;
  
//   for (int row = 0; row <3; row++)
//   {
//     int sum=0;

//     for (int col = 0; col < 3; col++)
//     {
//     sum += arr[row][col];
//     }
//     if(sum>maxi){
//        maxi = sum;
//        rowIndex = row ;
//     }
//   }
//  }

void wavePrint(int arr[][3], int row , int col){

for(int col = 0; col < 3 ; col++){

   if (col % 2 == 0){ //shows that even numbered index is going top to bottom
    for(int row = 0; row < 3 ; row++){
      cout<<arr[row][col]<<" ";
    }
   }
   else{ //and odd numered index is bottom to top;
     for( row = 2; row>=0 ;row--){
      cout<<arr[row][col]<<" ";
     }
   }
  }
}


int main() {
  int arr[3][4];
  cout<<"Enter the  elements"<<endl;

  for(int row =0; row<3 ; row++){
    for (int col = 0; col< 4; col++)
    {
        cin>>arr[row][col];
    }

    cout<<"Printing the array"<<endl;
  for(int row =0; row<3 ; row++){
    for (int col = 0; col< 4; col++)
    {
        cout<< arr[row][col]<<" ";
    }

   }
  }
  printSum(arr,3,4);

// largestRowSum(arr,3,3);



}

