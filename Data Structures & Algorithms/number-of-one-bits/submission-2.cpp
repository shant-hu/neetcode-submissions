class Solution {
public:
    int hammingWeight(uint32_t n) {
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
};
