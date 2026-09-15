class Solution {
public:
    string reformatDate(string date) {
        string d = "";
        
        for(int i=0;i<=1; i++){
            if(isdigit(date[i])) d += date[i];
        }

        vector<string>ans = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

        int n = date.size();
        string month_name = "";

        for(int i = n - 8; i<= n - 6; i++){
            month_name += date[i];
        }
        int month = 1;

        for(int i=0; i<ans.size(); i++){
            if(ans[i] == month_name){
                month += i;
                break;
            }
        }

        string year = "";
        int m = date.size();

        for(int i = m-4; i<date.size(); i++){
            year += date[i];
        }

        string final = "";
        final += year + '-';
        
        if(month < 10){
            final += '0';
        }
        final += to_string(month);
        final += '-';

        if(d.size() == 1) final += '0';
        final += d;

        return final;

    }
};