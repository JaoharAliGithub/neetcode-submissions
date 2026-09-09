class Solution {
   public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        std::priority_queue<std::pair<float, vector<int>>> closest;
        std::vector<vector<int>> returnVal;
        for (int i = 0; i < points.size(); i++) {
            closest.push({dist2O(points[i]), points[i]});
            if (closest.size() > k) {
                closest.pop();
            }
        }

        while (!closest.empty()){
            returnVal.push_back(closest.top().second);
            closest.pop();
        }

        return returnVal;
    }

    float dist2O(vector<int>& point) { return (point[0] * point[0] + point[1] * point[1] + 1); }
};
