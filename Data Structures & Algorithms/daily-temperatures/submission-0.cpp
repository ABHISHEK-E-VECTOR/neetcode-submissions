class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res(n);

        for(int i = 0; i < n ; i++){
            int count = 1;
            int j = i +1;
            while(j < n){
                if(temperatures[j] > temperatures[i]){
                    break;
                }
             count++;
            j++;
            }
            count = (n == j) ? 0 : count; 
            res[i] = count;
        }
       return res;

    }
};
