class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int total = 0;
        int count = 0;

        for(int i=0; i<events.size(); i++){
            if(events[i] == "W"){
                count++;
                if(count == 10) break;
            }

            else if(isdigit(events[i][0])) total += stoi(events[i]);
            else total += 1;
        }

        return {total , count};
    }
};