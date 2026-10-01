class Solution {
public:

    string encode(vector<string>& strs) {

        string res = "";
        for(int i = 0; i < strs.size(); i++) {
            int n = strs[i].size();
            res += to_string(n) + "@";
            res += strs[i];
        }
        cout<<res;
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int n = s.size();
        int i = 0;

        while(i != n) {
            string myWord = "";
            string freq = "";
            do{
                cout<<"hi";
                freq+=s[i];
                i++;
            } while(s[i] != '@');

            res.push_back(s.substr(i+1, stoi(freq)));
            i = i + stoi(freq) + 1;
        }
        return res;
    }
};


// Input: ["neet","code","love","you"]
//  ye konsa song hai which he is singing? "kis qDAR LOG BADAL JAATE HAI, SOMETHIGN NAZAR, KHAMOSHI"
