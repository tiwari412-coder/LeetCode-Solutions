class Solution {
public:
    int rotatedDigits(int n) {
        int answer = 0;

        for(int i=1; i<=n;i++){
            int temp =i;
            bool valid = true;
            bool result = false;
            
            while(temp > 0){
                int rem = temp%10;
                
                if(rem==3 || rem==4 || rem==7){
                    valid = false;
                    break;
                }

                if(rem==2 || rem== 5 || rem== 6 || rem==9){
                    result = true;
                }
                temp /=10;
            }

            if(valid && result){
                answer++;
            }
         }
        return answer;
    }
};