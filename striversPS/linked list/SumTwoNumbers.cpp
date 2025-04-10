#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public: 
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *temp1=l1, *temp2=l2;       
    int carry = 0;
    ListNode *dummy = new ListNode(-1);
    ListNode *curr = dummy;
    while(temp1!=nullptr || temp2!=nullptr){
        int sum = carry;
        if(temp1){
        sum+=temp1->val;
        temp1=temp1->next;
        }

        if(temp2){
            sum+=temp2->val;
            temp2=temp2->next;
        }

        ListNode *newNode = new ListNode(sum%10);
        carry=sum/10;
        curr->next=newNode;
        curr=curr->next;
    }
    if(carry){
        ListNode *newNOde = new ListNode(carry);
        curr->next=newNOde;
        curr=curr->next;
    }

    return dummy->next;
}

int main() {
        ListNode* list1 = new ListNode(2);
        list1->next = new ListNode(4);
        list1->next->next = new ListNode(3);
    
        ListNode* list2 = new ListNode(5);
        list2->next = new ListNode(6);
        list2->next->next = new ListNode(4);
    
        ListNode* result = addTwoNumbers(list1, list2);
    
        while (result != nullptr) {
            cout << result->val;
            if (result->next != nullptr) cout << " -> ";
            result = result->next;
        }
        cout << endl;
    
        return 0;
    } 
