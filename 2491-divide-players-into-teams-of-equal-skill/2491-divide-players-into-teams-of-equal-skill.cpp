class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),  skill.end());
        long long total = 0;
        int n = skill.size();
        int val = skill[0] + skill[n-1];

        for(int i=0; i<skill.size()/2; i++){
            int sum = skill[i]*skill[n - i - 1];
            int add = skill[i] + skill[n - i - 1];

            if(val != add) return -1;
            total += sum;
        }
        return total;
    }
};