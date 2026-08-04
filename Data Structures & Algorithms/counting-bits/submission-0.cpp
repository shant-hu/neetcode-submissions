class Solution {
public:
    int noofones(int n) {
        int rem;
        int count=0;

        if(n==0) return 0;

        while(n>1){
            rem = n%2;
            n = n/2;
            if(rem == 1){
              count++;
            }
        }
        return count+1;
    }

    vector<int> countBits(int n) {
        vector<int> res;

        for(int i = 0; i<=n; i++){
           int ones = noofones(i);
           res.push_back(ones);
        }

        return res;
    }
};
