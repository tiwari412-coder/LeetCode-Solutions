class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int maxi = *max_element(arr.begin() , arr.end());
        auto pos = find(arr.begin() , arr.end() , maxi);
        int index = pos - arr.begin();

        if(index == 0 || index == arr.size()-1) return false;

        for(int i=0; i<index; i++){
            if(arr[i] >= arr[i+1]) return false;
        }
        for(int i=index; i<arr.size()-1; i++){
            if(arr[i] <= arr[i+1]) return false;
        }

        return true;
    }
};