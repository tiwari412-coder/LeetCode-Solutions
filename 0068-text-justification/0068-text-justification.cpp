class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {

        vector<string> ans;

        int i = 0;

        while(i < words.size()) {

            int j = i;
            int totalLength = 0;

            // Find how many words can fit in this line
            while(j < words.size()) {

                if(totalLength + words[j].size() + (j - i) > maxWidth)
                    break;

                totalLength += words[j].size();
                j++;
            }

            int numberOfWords = j - i;
            int spaces = maxWidth - totalLength;

            string line = "";

            // Last line OR only one word
            if(j == words.size() || numberOfWords == 1) {

                for(int k = i; k < j; k++) {

                    line += words[k];

                    if(k != j - 1)
                        line += " ";
                }

                // Add remaining spaces at the end
                while(line.size() < maxWidth)
                    line += " ";
            }

            // Normal line
            else {

                int gaps = numberOfWords - 1;

                int spaceEach = spaces / gaps;
                int extra = spaces % gaps;

                for(int k = i; k < j; k++) {

                    line += words[k];

                    if(k != j - 1) {

                        // Every gap gets spaceEach
                        for(int x = 0; x < spaceEach; x++)
                            line += " ";

                        // Extra spaces go to left gaps
                        if(extra > 0) {
                            line += " ";
                            extra--;
                        }
                    }
                }
            }

            ans.push_back(line);

            i = j;
        }

        return ans;
    }
};