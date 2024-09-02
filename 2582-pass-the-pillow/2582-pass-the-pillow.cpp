class Solution {
public:
    int passThePillow(int n, int time) {
        int pos = 1;
        bool forward = true;
        for(int i=1; i<=time; i++) {
            if(forward) {
                pos++;
                if(pos >= n)
                    forward = false;
            }
            else {
                pos--;
                if(pos == 1)
                    forward = true;
            }
        }
        return pos;
    }
};