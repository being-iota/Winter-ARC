class Solution {
public:

    class mycom{
        public:
        bool operator()(pair<int, int>&a, pair<int, int>&b) {
            int distA = a.first*a.first + a.second*a.second;
            int distB = b.first*b.first + b.second*b.second;
            return distA>distB;
        }
    };

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int, int>, vector<pair<int, int>>, mycom>pq;
        for(auto point : points) {
            pq.push({point[0], point[1]});
        }

        while(!pq.empty() && k--) {
            auto&top = pq.top();
            ans.push_back({top.first, top.second});
            pq.pop();
        }
        return ans;
    }
};