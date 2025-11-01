#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if (!head) return nullptr;
        unordered_set<int>ele(nums.begin(), nums.end());
        
        while(head && ele.count(head->val)){
            // ListNode* temp = head;
            head = head->next;
            // delete temp;
        }

        if(!head) return nullptr;

        ListNode* curr = head;
        while(curr && curr->next){
            if(ele.count(curr->next->val)){
                // ListNode* temp = curr;
                curr->next = curr->next->next;
                // delete temp;
            }
            else{
                curr = curr->next;
            }
        }
        return head;
    }
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(1);
    head->next->next->next->next->next = new ListNode(2);

    vector<int> nums = {1};
    Solution sol;
    ListNode* result = sol.modifiedList(nums, head);

    // Print the result
    ListNode* curr = result;
    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;

    // Clean up memory
    while (result != nullptr) {
        ListNode* temp = result;
        result = result->next;
        delete temp;
    }
    
    return 0;
}