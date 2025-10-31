class Solution {
  public:
    vector<int> bottomView(Node *root) {
        if(root == nullptr) return {};

        unordered_map<int, int>mp;
        queue<pair<Node*, int>>q;

        int mn = INT_MAX;
        q.push({root, 0});
        while(!q.empty()){
            auto fN = q.front();
            q.pop();
            
            Node* temp = fN.first;
            int d = fN.second;
            mn = min(mn, d);

                mp[d] = temp->data;

            if(temp->left){
                q.push({temp->left, d-1});
            }

            if(temp->right){
                q.push({temp->right, d+1});
            }
        }
        vector<int>res(mp.size());
        for(auto it= mp.begin(); it!=mp.end(); it++){
            res[it->first - mn] = (it->second);
        }
        return res;
        
    }
};