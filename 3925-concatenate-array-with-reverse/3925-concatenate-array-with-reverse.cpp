class Solution {
public:
    void f(vector<int>& nums,int i){
            int n = nums.size();
            
            if(i >= n/2)
                return;

            swap(nums[i],nums[n-1-i]);
            f(nums,i+1);    
        }
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans = nums;
        
        f(nums,0);
        ans.insert(ans.end(),nums.begin(),nums.end());
        return ans;
    }
};