#include<iostream>
using namespace std;


// for leetcode 

int row = matrix.size();
int col = matrix[0].size();

// try to find out why is this happening??
int count=0;
int total= row*col;

//index initialisation
int startingRow =0;
int endingRow =row-1;

int startingCol =0;
int endingCol =col-1;

//printing spiral matrix
while( (startingRow < endingRow) && (startingCol < endingCol) ){

    //printing starting row
    for(int index= startingCol; index<=endingCol; index++){
        ans.push_back(matrix[startingRow][index]) ; 
        
    }
    startingRow++;

    //printing ending column
    for(int index= startingRow; index<=endingRow; index++){
        ans.push_back(matrix[index][endingCol]) ;   
        
    }
    endingCol--;

    //printing ending row
    for(int index =endingCol; index>=startingCol; index--){
        ans.push_back(matrix[endingRow][index]) ;
        
    } 
    endingRow--;

    //print starting column
    for(int index=endingRow; index>=startingRow ; index--){
        ans.push_back(matrix[index][startingCol]) ;
        
    }
    startingCol++;

}
return ans;
 