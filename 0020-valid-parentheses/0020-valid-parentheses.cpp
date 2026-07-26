class Solution {
public:
    bool isValid(string str) {
       stack<char> st; 
       
       for(int ch : str){
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }

        else{
            if(st.size() == 0){   // closing > opening
                return false;
            }

            if((st.top() == '(' && ch == ')') ||
            (st.top() == '{' && ch == '}') ||
            (st.top() == '[' && ch == ']')){
                st.pop();
            }

            else return false;
        }
       }
       return st.size() == 0;
    }
};