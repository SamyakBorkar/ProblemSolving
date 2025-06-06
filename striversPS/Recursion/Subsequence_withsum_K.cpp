#include<bits/stdc++.h>
using namespace std;

void countAllSubsequencewithSumK(vector<int>&arr, int sum, vector<int>&subsequence, int index, int temp_sum, vector<vector<int>>&res){
    if(index==arr.size()){
        if(temp_sum==sum){
            res.push_back(subsequence);
        }
        return;
    }
    //Inclusion
    subsequence.push_back(arr[index]);
    temp_sum+=arr[index];
    countAllSubsequencewithSumK(arr, sum, subsequence, index+1, temp_sum, res);

    //Exclusion
    temp_sum-=subsequence.back();
    subsequence.pop_back();
    countAllSubsequencewithSumK(arr, sum, subsequence, index+1, temp_sum, res);

}

int main(){
    vector<int>arr = {4, 9, 2, 5, 1};
    int sum = 10, index=0;
    vector<int>subsequence;
    vector<vector<int>>res;
    countAllSubsequencewithSumK(arr, sum, subsequence, index,0, res);

    for (const auto& seq : res) {
        for (int num : seq) cout << num << " ";
        cout << endl;
    }
    return 0;
}