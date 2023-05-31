class Solution {
public:
    bool isPowerOfTwo(int n) {

        while( n!=0 ){      
            if( n == 1 ){
                return true;
            }

            //check if no is odd
            if( n % 2 != 0 ){
                return false;
            }

            n = n/2;
        }

        return false;    
    }
};