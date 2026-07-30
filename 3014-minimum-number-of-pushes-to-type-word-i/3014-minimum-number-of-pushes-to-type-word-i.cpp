class Solution {
public:
    int minimumPushes(string word) {
        int push = 0 ,count = 0;

        for(int i=0;i<word.size();i++){
            count++;

            if(count<9){
                push = push+1;
            }
            else if(count<17){
                push = push+2;
            }
            else if(count<25){
                push = push +3;
            }
            else{
                push = push+4;
            }
        }

        return push;
    }
};