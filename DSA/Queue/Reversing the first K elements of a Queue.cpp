/*
    The idea is that use recursion stack and push elements to the back of the queue
    then remove n-k elements from the queue and push_back them in the queue 

    you can still use a simple stack and do so but it is more complex in operation as compare to recursion
*/


#include<bits/stdc++.h>
using namespace std;
class Solution {
  private:
    void moveToEnd(queue<int>&q, int k){
        if(k == 0 ){
            return;
        }
        int ele = q.front();
        q.pop();
        moveToEnd(q, k-1);
        q.push(ele);
    }

  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        int n = q.size();
        if(k>n){
            return q;
        }
        moveToEnd(q, k);
        
        int t = q.size()-k;
        while(t-->0){
            int ele = q.front();
            q.pop();
            q.push(ele);
        }
        return q;
    }
};

int main(){
    Solution obj;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    int k=3;
    queue<int>res = obj.reverseFirstK(q, k);
    while(!res.empty()){
        cout<<res.front()<<" ";
        res.pop();
    }

    return 0;
}