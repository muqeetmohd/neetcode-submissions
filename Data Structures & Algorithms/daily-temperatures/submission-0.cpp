class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        stack<int> s;
        vector<int> res(temperatures.size(), 0);

        for(int i = temperatures.size()-1; i >= 0; --i) {
            if(s.empty()) {
                res[i] = 0;
                s.push(i);
            } else if(temperatures[s.top()] <= temperatures[i]) {
                res[i] = 0;
                while(!s.empty() && (temperatures[s.top()] <= temperatures[i])) {
                    s.pop();
                }
                if(!s.empty()) {
                res[i] = s.top() - i;
                } else {
                res[i] = 0;
                }
                s.push(i);
            } else if(!s.empty() && (temperatures[s.top()] > temperatures[i])){
                res[i] = s.top() - i;
                s.push(i);
            } else{
                continue;
            }

        }

        return res;

        
    }
};
