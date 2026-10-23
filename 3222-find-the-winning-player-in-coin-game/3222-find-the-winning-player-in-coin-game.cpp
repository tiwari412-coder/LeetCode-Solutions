class Solution {
public:
    string winningPlayer(int x, int y) {
        int mini = min(x  , y/4);

        if(mini % 2 != 0) return "Alice";
        return "Bob";
    }
};