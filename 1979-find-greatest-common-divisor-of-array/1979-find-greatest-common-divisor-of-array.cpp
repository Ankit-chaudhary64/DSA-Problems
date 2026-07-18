class Solution {
public:
    int gcdoftownum(int a,int b){
        while(b!=0){
            int rem =a%b;
            a=b;
            b=rem;
            }
            return a;
    }
    int findGCD(vector<int>& nums) {
        int a = *min_element(nums.begin(), nums.end());
        int b = *max_element(nums.begin(), nums.end());
        int ans=gcdoftownum(a,b);
        return ans;
        
    }
};