class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int ans = 0;
        unordered_set<int> st;

        for(int right = 0; right<s.size(); right++){
            // means if found the 's' elements in 'st' then erase it from 'st' and increase left
            while(st.find(s[right]) != st.end()){      
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);
            ans = max(ans , right - left +  1);
        }

        return ans;
    }
};