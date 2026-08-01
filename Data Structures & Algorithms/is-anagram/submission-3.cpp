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
      
      if(f.size()!=q.size()){
        return false;
      }

        for(auto [key,value] : f){
            auto it = q.find(key);

            if(it == q.end() || it->second!=value){
                return false;
            }
        }
       return true;
    }
};
