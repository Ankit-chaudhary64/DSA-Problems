class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> num; 
        for(int i=n-k; i<nums.size();i++){
                num.push_back(nums[i]);
            }
        for(int m =0; m<n-k;m++){
            num.push_back(nums[m]);
        }
        nums=num;
        
    }
};