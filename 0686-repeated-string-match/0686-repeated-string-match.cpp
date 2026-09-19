class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count = 1;
        string s = a;

        while(s.size() < b.size()){
            s += a;
            count++;
        }
        if(s.find(b) != string :: npos){
            return count;
        }

      // if still not get it then again one more time add the string a to s then check it

      s += a;
      count++;

      if(s.find(b) != string :: npos){
        return count;
      }

      return -1;
    }
};