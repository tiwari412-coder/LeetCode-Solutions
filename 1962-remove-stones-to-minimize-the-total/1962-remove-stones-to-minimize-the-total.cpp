class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(int x : piles) pq.push(x);

        while(k > 0){
            int maxi = pq.top();
            pq.pop();

            int removed = maxi/2;
            maxi -= removed;

            pq.push(maxi);
            k--;
        }

        int sum = 0;
        while(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }

        return sum;
    }
};