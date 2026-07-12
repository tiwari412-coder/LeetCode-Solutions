class Solution {
public:
    string removeDuplicates(string s) {
        
        bool remove = true;


        while(remove==true){
            if(s.empty()) return s;   // agar all the vharacters are same then it will be "" but without this while loop will run inifite times 

             remove = false;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                s.erase(i,2);
                remove = true;
                break;
            }
          }
        } 

        return s;
    }
};