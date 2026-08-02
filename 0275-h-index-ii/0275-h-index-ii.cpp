class Solution {
public:

    int hIndex(vector<int>& citations) {
        
        int low = 0;
        int high = citations.size()-1;
        int n = citations.size();

        while(low <= high){
            int mid = low + (high - low)/2;

            if(citations[mid] == n - mid){
                return n - mid;
            }

            else if(n - mid < citations[mid]){
                high = mid-1;
            }

            else if(n - mid > citations[mid]){
                low = mid+1;
            }
        }

        return n - low;
    }
};