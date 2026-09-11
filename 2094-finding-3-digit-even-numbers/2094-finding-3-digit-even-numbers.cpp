class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
      unordered_set<int>st;

      for(int i=0; i<digits.size(); i++){
        for(int j = 0; j<digits.size(); j++){
            for(int k=0; k<digits.size(); k++){
                if(i != j && j != k && k != i){
                    if(digits[i] != 0 && digits[k] % 2 == 0){
                    int num = digits[i]*100 + digits[j]*10 + digits[k];
                    st.insert(num);
                }
             }
          }
        }
      }

      vector<int>ans(st.begin() , st.end());
      sort(ans.begin() , ans.end());
      return ans;
    }
};