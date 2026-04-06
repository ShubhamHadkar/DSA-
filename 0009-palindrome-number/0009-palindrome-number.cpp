class Solution {
public:
    bool isPalindrome(int x) {
        int z=x;
        long y = 0;
        int rem = 0;
        if(x<0){
            return false;
        }
        while(z!=0){
        rem = z%10;
        y = y * 10 + floor(rem) ;
        z= z/10;
        }
        if (x==y){
            return true;
        }
        return false;
    }
};