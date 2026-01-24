class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int g = 0, m = 0, p = 0;
        int lastG = 0, lastM = 0, lastP = 0;

        for (int i = 0; i < garbage.size(); i++) {
            for (char c : garbage[i]) {
                if (c == 'G') {
                    g++;
                    lastG = i;
                }
                else if (c == 'M') {
                    m++;
                    lastM = i;
                }
                else {
                    p++;
                    lastP = i;
                }
            }
        }

        for (int i = 0; i < lastG; i++) g += travel[i];
        for (int i = 0; i < lastM; i++) m += travel[i];
        for (int i = 0; i < lastP; i++) p += travel[i];

        return g + m + p;
    }
};
