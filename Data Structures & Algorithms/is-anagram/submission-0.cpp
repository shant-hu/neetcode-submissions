class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int> f;
        unordered_map<char,int> q;

        for(int i=0; i<s.size();i++){
            f[s[i]]++;
        }
        for(int i=0; i<t.size();i++){
            q[t[i]]++;
        }

        int val1,val2;

        if(f==q){
        return true;
        }
        else{
            return false;
        }
    }
};
