class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        vector <int> temp(n);

        for (int i = 0; i < n; i++)
            //position of element after rotation by k
            temp[(i+k)%n] = nums[i];

        
        nums = temp;
    }
};