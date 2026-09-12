class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        unordered_map<int , int> mp;

        for(int x : tops) mp[x]++;
        int val = 0;
        int num = 0;

        for(auto it : mp){
            if(val < it.second){
                val = it.second;
                num = it.first;
            }
        }

        int count = 0;
        bool valid = true;

        for(int i=0; i<tops.size(); i++){
            if(num != tops[i]){
                if(bottoms[i] == num){
                    count++;
                }
                else{
                    valid = false;
                    break;
                }
            }
        }

        mp.clear();

        for(int x : bottoms) mp[x]++;
        int val2 = 0;
        int num2 = 0;

        
        for(auto it : mp){
            if(val2 < it.second){
                val2 = it.second;
                num2 = it.first;
            }
        }

        bool check = true;
        int count2 = 0;

         for(int i=0; i<bottoms.size(); i++){
            if(num2 != bottoms[i]){
                if(tops[i] == num2){
                    count2++;
                }
                else{
                    check = false;
                    break;
                }
            }
        }

        if(valid && check) return min(count, count2);
        else if(valid && !check) return count;
        else if(!valid && check) return count2;
        return -1;
    }
};