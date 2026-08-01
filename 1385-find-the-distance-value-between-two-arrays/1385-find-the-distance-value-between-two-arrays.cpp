class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        vector<int> result;

        for(int i=0; i<n; i++){
            bool invalid = false;
            for(int j=0; j<arr2.size(); j++){
                int diff = abs(arr1[i] - arr2[j]);
                if(diff <= d){
                    invalid = true;
                    break;
                }
            }
            if(invalid){
                result.push_back(arr1[i]);
            }
        }

         return arr1.size() - result.size();
    }
};