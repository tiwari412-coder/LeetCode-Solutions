class Solution {
public:
    string removeKdigits(string num, int k) {
        string s = "";
        int count = 0;

        for(int i=0; i<num.size(); i++){
            while(!s.empty() && s.back() > num[i] && count < k){
                s.pop_back();
                count++;
            }
            s.push_back(num[i]);
        }

        // if k is still remaining
        while(count < k){
            s.pop_back();
            count++;
        }

       while(!s.empty() && s.front() == '0') s.erase(0 , 1);

       if(s.size() == 0) return "0";
       return s;
    }
};