class Solution {
public:

    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       int n=names.size();
       n = heights.size();
        for (int i = 0; i <= n - 2; i++) {
            int max = i;
            for (int j = i + 1; j <= n - 1; j++) {
                if (heights[j] > heights[max]) {
                    max = j;
                }
            }
            swap(names[i], names[max]);
            swap(heights[i],heights[max]);
        }
        return names;
    }
};