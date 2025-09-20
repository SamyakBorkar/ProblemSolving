class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        queue<int>tempq;
        int n = q.size();
        int k = n/2;
        
        while(k>0){
            int ele = q.front();
            q.pop();
            tempq.push(ele);
            k--;
        }
        
        // int remaining = n - k ;
        while(!tempq.empty()){
            //first element from the new queue
            int newqele = tempq.front();
            tempq.pop();
            q.push(newqele);
            //then the current queue element to the existing queue in the alternating fashion 
            int currentqele = q.front();
            q.pop();
            q.push(currentqele);
        }
        
    }
};