class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size() == 1) return false;
cout<<"c";
        for(int i = 0; i < s.size(); i++) {
            if(!st.empty() && s[i] == ')'){
                if(st.top() != '(') return false;
                st.pop();
            } else if(!st.empty() && s[i] == '}'){
                if(st.top() != '{') return false;
                st.pop();
            } else if(!st.empty() && s[i] == ']'){
                if(st.top() != '[') return false;
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        return st.empty();

    }
};
