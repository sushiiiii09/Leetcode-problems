 #include<iostream>
 using namespace std;


/* for making pattern 1
    * * *
    * * * 
    * * * 
 int main(){
int n;
// asking how many rows to be printed
cin>>n;
int i=1; //counting started from 1
while(i<=n){
//column
int j=1;
while(j<=n){
    cout<<"*";
    j++;
} cout<<endl;
i++;
}
} 
 */


/*for making pattern 2
  1 1 1
  2 2 2
  3 3 3     */
// int main(){
//     int n;
//      cin>>n;
//      int i =1;
//      while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<i<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//      }

// }

/*for making pattern 
 1 2 3 4 
 1 2 3 4 
 1 2 3 4
 1 2 3 4    */

 //int main(){
    // int n;
    // cin>>n;
    // int i =1;
    // while(i<=n ){
    //     int j=1;
    //     while(j<=n){
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
 //}

 /*for making pattern
   3 2 1 
   3 2 1
   3 2 1*/
//    int main(){

//     int n;
//     cin>>n;
//     //rows
//     int i=1;
//     while(i<=n){
//         //column
//         int j=n;
//         while(j!=0){
//             cout<<j<<" ";
//             j--;
//         }
//         cout<<endl;

//         i++;
//     }
//    }

/*for making pattern  1 2 3 
                      4 5 6 
                      7 8 9      */// n*n is the final number 
// int main(){
//     int n;
//     cin>>n;
//     int count = 1;

//     //rows
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n)
//         cout<<count<<" ";
// count ++;
// j++;
// }
//     cout<<endl;
//     i++;
// }

//!!!!!!!!!! IMPORTANT !!!!!!!!!!
/*for making pattern
 *
 * *
 * * *   

int main(){
    int n;
    cin>>n;
    //row
     int row =1;
     while(row<=n){
        int col= 1;
        while(col<=row){
            cout<<"* ";
            col++;
        }
        cout<<endl;
        row++;
     }
}*/

/*making pattern
 1
 2 2 
 3 3 3
int main(){
    int n;
    cin>>n;
     int row=1;
     while(row<=n){
        int col =1;
        while(col<=row){
            cout<<row<<" ";
            col++;
        }
        cout<<endl;
        row++;
     }
}*/


/*for making pattern 
1
2 3 
4 5 6 */

int main(){
    int n;
    cin>>n;
    //row
    int row =1;
    while(row<=n){
        int col =1;
        int val =row;
        while(col<=row){

            cout<<val<<" ";
            val++;
            col++;
        }
        cout<<endl;
        row++;
    }

}

