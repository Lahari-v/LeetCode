class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        long long sum = 0;
        for(int i=0; i<n; i++) {
            sum += chalk[i];
        }
        long long rem = (long long)k % sum;
        for(int i=0; i<n; i++) {
            if(rem < chalk[i])
                return i;
            else
                rem -= chalk[i];
        }
        return 0;
    }
};