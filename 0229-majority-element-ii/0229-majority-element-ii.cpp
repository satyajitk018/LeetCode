class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1 = 0, candidate2 = 0;
        int count1 = 0, count2 = 0;

        for(int val : nums){
            if(val == candidate1)
                count1++;
            else if(val == candidate2)
                count2++;
            else if(count1 == 0){
                candidate1 = val;
                count1 = 1;
            }else if(count2 == 0){
                candidate2 = val;
                count2 = 1;
            }else{
                count1--;
                count2--;
            }
        }

        int freq1 = 0, freq2 = 0;

        for(int val : nums){
            if(val == candidate1)
                freq1++;
            else if(val == candidate2)
                freq2++;
            
        }

        vector<int> ans;

        if(freq1 > nums.size()/3)
            ans.push_back(candidate1);
        if(freq2 > nums.size()/3)
            ans.push_back(candidate2);

        return ans;
    }
};