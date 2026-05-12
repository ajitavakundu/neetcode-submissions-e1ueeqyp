class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ansMerged;

        for (auto interval : intervals){
            if (ansMerged.empty() || ansMerged.back()[1] < interval[0]){
                ansMerged.push_back(interval);
            } else {
                ansMerged.back()[1] = max(ansMerged.back()[1], interval[1]);
            }
        }

        return ansMerged;
    }
};
