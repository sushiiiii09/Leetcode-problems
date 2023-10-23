class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long rem = 0;
        int temp=x;
        while(x){
            rem = rem*10+ x%10;
            x=x/10;
        }
        if(rem==temp) {
            return true;
        }
        else{
            return false;
        }
    }
};