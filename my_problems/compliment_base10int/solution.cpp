class Solution {
public:
    int bitwiseComplement(int n) {
        int p = n;
        int mask = 0;

        //edge case
        if( n== 0){
            return 1;
        }

        while(p!=0){
            mask = mask << 1 | 1 ;
            p = p >> 1;
        }

        int ans = (~n) & mask;
        return ans;
    }
};