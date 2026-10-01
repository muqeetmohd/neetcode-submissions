class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> arr(26,0);

        for(int i = 0; i < s1.size(); i++) {
            arr[s1[i] - 'a'] += 1;
        }

        int sze = s2.size()-s1.size();

        for(int i = 0; i <= sze; i++) {
            vector<int> cmpr(26,0);
            for(int x = i; x < i+s1.size(); x++){
                cmpr[s2[x]-'a'] += 1;
            }
            if(arr == cmpr) return true;
        }

        return false;

    }
};
