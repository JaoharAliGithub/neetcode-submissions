class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        } else {
            std::unordered_map<char, int> sfreq;
            std::unordered_map<char, int> tfreq;
            for (int i = 0; i < s.size(); i++) {
                if (sfreq.contains(s[i])) {
                    sfreq[s[i]] += 1;
                } else {
                    sfreq[s[i]] = 1;
                }
                if (tfreq.contains(t[i])) {
                    tfreq[t[i]] += 1;
                } else {
                    tfreq[t[i]] = 1;
                }
            }
            for (const auto&[key, value] : sfreq){
                 if (tfreq.contains(key)){
                    if (tfreq[key] != value){
                        return false;
                    }
                 }
                 else{
                    return false;
                 }
            }
            return true;
        }
    }
};
