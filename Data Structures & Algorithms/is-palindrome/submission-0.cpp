class Solution {
public:
    bool isPalindrome(string s) {

        int n = s.size();
        int first = 0, second = n-1;

        while(first < second){
            cout<<first<<"-"<<second<<":";
            if(s[first] == ' ' || !isalnum(s[first])) {
                first++;
                continue;
            }
            if(s[second] == ' '|| !isalnum(s[second])) {
                second--;
                continue;
            }

            if(tolower(s[first]) != tolower(s[second])) {
                return false;
            }
            first++;
            second--;
        }
        return true;
    }
};
