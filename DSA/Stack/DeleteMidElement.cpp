class Solution {
  private:
    void solve(stack<int>& s, int cnt, int size){
        if(cnt == (size/2)){
            s.pop();
            return;
        }    
        int num = s.top();
        s.pop();
        solve(s, cnt+1, size);
        s.push(num);
    }
    
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        int size=s.size();
        int cnt=0;
        solve(s, cnt, size);
    }
};