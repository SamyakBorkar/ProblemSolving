class Solution {
  public:
    bool searchKey(int n, struct Node* head, int key) {
        struct Node* temp=head;
        while(temp!=NULL){
            if(temp->data==key){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
};