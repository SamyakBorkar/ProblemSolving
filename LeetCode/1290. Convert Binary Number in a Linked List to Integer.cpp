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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        string num = "";
        while(temp!=nullptr){
            num+=temp->val;
            temp=temp->next;
        }
        int res = convertToDecimal(num);
        return res;
    }
};

