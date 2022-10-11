class Solution {
public:
    bool isAnagram(string s, string t) {
        int len1 = s.size(), len2 = t.size();
        
        if (len1 == len2) {
            vector<int> tmp1(26, 0);
            vector<int> tmp2(26, 0);
            
            for(int i=0; i<len1; i++) {
                tmp1[s[i]-97] += 1;
                tmp2[t[i]-97] += 1;
            }
            for(int i=0; i<26; i++) {
                if (tmp1[i] != tmp2[i])
                    return false;
            }
        }
        else {
            return false;
        }  
        
        return true;
    }
};
