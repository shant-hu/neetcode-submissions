class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool res = false;
        if (nums.size() == 0) return res;

        unordered_map<int,int> f;
        for(int i=0; i<nums.size();i++){
            f[nums[i]]++;
        }
        for(auto i : f){
            int val = i.second;
            if(val > 1){
                res = true;
                return res;
            }
            else if(val=1){
                continue;
            }
        }
        return res;
    }
};