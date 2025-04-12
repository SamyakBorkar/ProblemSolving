#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
        int val;
        ListNode *next;
        ListNode *prev;

        ListNode(int data1){
            val = data1;
            next = NULL;
            prev = NULL;
        }
};


ListNode * deleteAllOccurrences(ListNode* head, int target) {
    ListNode *currP = head;
    ListNode *dummy = new ListNode(-1);
    ListNode *dp = dummy;
    unordered_map<int, int> freqMap; 
    int cnt=0;

    ListNode* current = head;
    while (current != nullptr) {
        freqMap[current->val]++; 
        current = current->next;
    }
    // cout<<"The freq of "<<currP->val<<"is :"<< freqMap[currP->val]<<endl;
    // for (const auto& pair : freqMap) {
    //     cout << "Data: " << pair.first << " -> Frequency: " << pair.second << endl;
    // }

    while(currP!=nullptr){
        if(freqMap[currP->val]>1){
            currP=currP->next;
        }
        else{
            ListNode *newNode = new ListNode(currP->val);
            dp->next=newNode;
            newNode->prev=dp;
            if(newNode->prev->val==-1 && cnt==1) newNode->prev=NULL;
            dp=dp->next;
            currP=currP->next;
            cnt++;
        }

    }

    return dummy->next;
}

int main(){
    ListNode *head = new ListNode(1);
    ListNode *second = new ListNode(2);
    ListNode *third = new ListNode(3);
    ListNode *fourth = new ListNode(1);
    ListNode *fifth = new ListNode(4);

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    fourth->next = fifth;
    fifth->prev = fourth;

    ListNode *newhead = deleteAllOccurrences(head, 1);
    ListNode *temp = newhead;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}