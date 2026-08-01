class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> f;
        for(int i = 0; i<nums.size();i++){
            int a = nums[i];
            int more = target - a;
            if(f.find(more)!=f.end()){
                return {f[more],i};
            }
            f[a] = i;
        }
        return {-1,-1};
    }
};
