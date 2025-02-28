class Solution {
    public:
      Node* constructDLL(vector<int>& arr) {
          Node* head = new Node(arr[0]);
          Node* current = head;
          for(int i=1; i<arr.size(); i++){
              Node* temp = new Node(arr[i]);
              current->next=temp;
              temp->prev=current;
              current=temp;
          }
          return head;
      }
  };
  