class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxdiff=INT_MIN;

        int diff=0;
        for(int i=0;i<colors.size();i++){
            for(int j=0;j<colors.size();j++){
                if(colors[i]!=colors[j]){
                    diff=abs(j-i);
                    maxdiff=max(maxdiff,diff);
                }
            }
        }
        if(maxdiff!=INT_MIN){
            return maxdiff;
        }
        else{
            return diff;
        }
    }
};