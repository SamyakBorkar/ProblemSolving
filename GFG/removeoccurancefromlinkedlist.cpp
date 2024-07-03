#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        Node *temp = head;
        Node *prev = NULL;
        while (temp != NULL) {
            int cnt = 0;
            while (temp != NULL && temp->next != NULL) {
                if (temp->data == temp->next->data) {
                    temp = temp->next;
                    cnt++;
                } else {
                    break;
                }
            }
            if (cnt > 0) {
                if (prev != NULL) {
                    prev->next = temp->next;
                    temp = prev->next;
                } else {
                    head = temp->next;
                    temp = head;
                }
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};

void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        Node *head = NULL;
        Node *temp = head;
        for (int i = 0; i < N; i++) {
            int data;
            cin >> data;
            if (head == NULL)
                head = temp = new Node(data);
            else {
                temp->next = new Node(data);
                temp = temp->next;
            }
        }
        Solution ob;
        head = ob.removeAllDuplicates(head);
        printList(head);
        cout << "\n";
    }
    return 0;
}
