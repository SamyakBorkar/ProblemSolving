#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            vector<int>res;
            int i=0;
            int j=i;
            while(i<a.size() && j<b.size()){
                if(a[i]==b[j]){
                    res.push_back(a[i]);
                    i++;
                    j++;
                }
                else if(a[i]<b[j]){
                    i++;
                }
                else{
                    j++;
                }
            }
            return res;
    }
};

int main(){
    Solution obj;
    vector<int>a={1,2,3};
    vector<int>b={4,5,6};
    vector<int> result=obj.intersectionWithDuplicates(a, b);
    for(int x: result){
        cout<<x<<" ";
    }
    return 0;
}