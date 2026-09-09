class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0;
        int present = 0;
        int late = 0;
        int maxilate = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i] == 'P'){
                present++;
                late = 0;
            }

            else if(s[i] == 'L'){
                late++;
                maxilate = max(maxilate , late);
            }
            else if(s[i] == 'A'){
                absent++;
                late = 0;
            }
        }

        if(absent < 2 && maxilate < 3) return true;
        return false;
    }
};