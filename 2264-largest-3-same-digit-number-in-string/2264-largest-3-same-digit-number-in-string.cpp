class Solution {
public:
    string largestGoodInteger(string num) {
        char s = num[0];
        string ch = "";
        int count = 1;

        for(int i=1; i<num.size(); i++){
            if(s == num[i]){
                count++;
            }
            else {
                s = num[i];
                count = 1;
            }

            if(count == 3){
                if(ch == "" || num.substr(i-2 ,3) > ch){
                ch = num.substr(i-2,3);
            }
        }
    }

        return ch;
    }
};