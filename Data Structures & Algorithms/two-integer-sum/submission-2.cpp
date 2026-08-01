class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;

        int tofind;

        for(int i=0; i<nums.size();i++){
            tofind = target - nums[i];
            for(int j=0; j<nums.size();j++)
            if(tofind == nums[j] && i!=j){
                res.push_back(i);
                res.push_back(j);
                return res;
            }
            else{
                continue;
            }
        }
    }
};
