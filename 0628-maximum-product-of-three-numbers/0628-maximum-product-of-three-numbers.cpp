class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int first = INT_MIN;
        int sec = INT_MIN;
        int third = INT_MIN;

        int min1 = INT_MAX;
        int min2 = INT_MAX;
        
        for(int val : nums){
            //maxvalue
            if(val > first){
                third = sec;
                sec = first;
                first = val;
            }else if(val > sec){
                third = sec;    
                sec = val;
            }else if(val > third){
                third = val;
            }
            
            //minvalue
            if(val < min1){
                min2 = min1;
                min1 = val;
            }else if(val < min2){
                min2 = val;
            }

        }
        return max(first * sec * third,
                   first * min1 * min2);
    }
};