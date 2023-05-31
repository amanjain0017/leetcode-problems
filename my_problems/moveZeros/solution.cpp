class Solution {
public:
    void moveZeroes(vector<int>& nums) { 
        
        //ignore if zero and swap if nonZero
        for(int nonZero = 0, j = 0; j<nums.size(); j++ ){
            if( nums[j] != 0 )
                swap( nums[nonZero++], nums[j] );         
        } 
    }
};