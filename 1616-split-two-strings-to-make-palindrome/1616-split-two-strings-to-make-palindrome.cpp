class Solution {
public:
    
    bool checkpalidrome(string ch, int i , int j){
        while(i < j){
            if(ch[i] != ch[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    bool check(string &a , string &b){
        int i = 0;
        int j = a.size()-1;

        while(i < j && a[i] == b[j]){
            i++;
            j--;
        }

        return checkpalidrome(a, i ,j) || checkpalidrome(b ,i, j);
    }

    bool checkPalindromeFormation(string a, string b) {
        return check(a,b) || check(b ,a);
    }
};