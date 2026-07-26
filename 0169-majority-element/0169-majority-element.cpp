class Solution {
public:
    int majorityElement(vector<int>& nums) {

        for(int val : nums){
            int count = 0;

            for(int ele : nums){
                if(val == ele){
                    count++;
                }
            if(count > nums.size()/2){
                return val;
            }    
        }
        }
        return -1;
    }
};