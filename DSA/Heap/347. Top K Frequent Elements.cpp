#include<bits/stdc++.h>
using namespace std;
/*logic is simple ek map mai integer and its freq store krdo and uske baad mean heap mai uske freq ke hisab se store kro 
pop the top as the top will have the element with the least freq untiil min heap is of size == k and add the elements to the resultant array
*/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>freq;
        vector<int>res;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>minHeap;
        for(int x : nums){
            freq[x]++;
        }

        for(auto[num, freq]: freq){
            minHeap.push({freq, num});

            if(minHeap.size()>k){
            minHeap.pop();
         }
        }
        while(!minHeap.empty()){
            res.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return res;
    }
};

int main(){
    vector<int>arr={1,1,1,2,2,3};
    int k = 2;
    Solution obj;
    vector<int>res= obj.topKFrequent(arr, k);
    for(int x: res){
        cout<<x<<" ";
    }
    return 0;
}