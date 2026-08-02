class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;

        for(char ch  : s){
            mp[ch]++;
        }

        priority_queue<pair<int, char>> pq;    // decresing order

        for(auto it : mp){
            pq.push({it.second , it.first});
        }

        string st;
        while(!pq.empty()){
            int count = pq.top().first;
            char res = pq.top().second;
            st += string(count , res);
            pq.pop();
        }
        return st;
    }
};