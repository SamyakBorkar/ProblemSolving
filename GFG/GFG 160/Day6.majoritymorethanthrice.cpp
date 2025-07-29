class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        int threshold = (n/3);
        vector<int>res;
        unordered_map<int , int>freq;
        for(int x : arr){
            freq[x]++;
        }
        
        for(auto it : freq){
            if(it.second>threshold){
                res.push_back(it.first);
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};