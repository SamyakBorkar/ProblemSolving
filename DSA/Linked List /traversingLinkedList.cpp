class Solution {
  public:
    int getCount(struct Node* head) {
        struct Node* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
};