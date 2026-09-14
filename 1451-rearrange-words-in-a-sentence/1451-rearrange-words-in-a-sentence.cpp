class Solution {
public:
    string arrangeWords(string text) {
        transform(text.begin() , text.end() , text.begin() , ::tolower);

        vector<string>ans;
        string temp;
        stringstream ss(text);

        while(ss >> temp){
            ans.push_back(temp);
        }

        stable_sort(ans.begin() ,ans.end() , [](const string& a ,const string& b){
            return a.size() < b.size();
        });

        string ch = "";
        for(string s : ans){
            ch += s + " ";
        }
        ch.pop_back();

        ch[0] = ::toupper(ch[0]);

        return ch;

    }
};


