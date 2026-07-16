class Solution {
public:
        int gcdofarray (int a ,int b){
            while(b !=0){
                int rem =a%b;
                a=b;
                b=rem;
            }
            return a ;
        }
    long long gcdSum(vector<int>& nums) {

        vector<int> prefixGcd;

        int mx =0;
        for(int i =0; i<nums.size();i++){
            mx=max(mx,nums[i]);
            prefixGcd.push_back(gcdofarray(nums[i], mx));

        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int s=0,l=prefixGcd.size()-1;
        long long ans=0;
        while(s<l){
            int ans1=gcdofarray(prefixGcd[s],prefixGcd[l]);
            ans+=ans1;
            s++;
            l--;
        }
        return ans;
    }
};