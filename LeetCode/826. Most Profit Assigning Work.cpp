#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = difficulty.size();
        vector<pair<int, int>>jobs(n);
        for(int i=0; i<n; i++){
            jobs[i] = {difficulty[i], profit[i]};
        }
        sort(jobs.begin(), jobs.end());
        sort(worker.begin(), worker.end());
        //  ({2,10},{4,20},{6,30},{8,40},{10,50})
         //  {4,5,6,7}
        int i = 0, best = 0, total = 0;
        for (int x : worker) {
            while (i < n && x >= jobs[i].first) {
                best = max(best, jobs[i].second);
                i++;
            }
            total += best;
        }
        return total;
    }
};

int main(){
    Solution obj;
    vector<int>difficulty={2,4,6,8,10};
    vector<int>profit={10,20,30,40,50};
    vector<int>worker={4,5,6,7};
    int res = obj.maxProfitAssignment(difficulty, profit, worker);
    cout << res<<endl;
    return 0;

}