class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<int> resultant;

        for(auto x : nums){
            map[x]++;
        }

        vector<pair<int,int>> temp;

        for(auto x : map){
            temp.push_back({x.first, x.second});
        }

        sort(temp.begin(), temp.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        for(int i = 0; i < k; i++){
            resultant.push_back(temp[i].first);
        }

        return resultant;
    }
};