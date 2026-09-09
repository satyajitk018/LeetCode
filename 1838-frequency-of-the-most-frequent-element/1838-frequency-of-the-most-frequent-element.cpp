class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int left = 0;
        sort(nums.begin(),nums.end());
        long long sum = 0;
        int best = 0;

        for(int right=0;right<nums.size();right++){
            sum += nums[right];

            while((long long) nums[right] * (right - left + 1) - sum > k){
                sum -= nums[left];
                left++;
            }
            best = max(best,right - left + 1);
        }
        return best;
    }
};