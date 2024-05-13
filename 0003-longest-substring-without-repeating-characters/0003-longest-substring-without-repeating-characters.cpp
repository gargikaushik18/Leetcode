class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int start=0;
        int maxlen =0;
        unordered_map<char,int>smap;
        for(int i=0;i<n;i++){
            char curr = s[i];
            if(smap.find(curr)!=smap.end()&& smap[curr]>=start){
                start = smap[curr]+1;
            }
           smap[curr]=i;
            maxlen = max(maxlen,i-start+1);
            }
        return maxlen;
    }
};