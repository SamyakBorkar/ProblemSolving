#include<iostream>
using namespace std;

class Node{
    
    public:
        int data;
        Node* next;

        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

void insetAtHead(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode->next=head;
    head=newNode;
}

void insertAtTail(Node* &tail, int data){
    Node* temp= new Node(data);
    tail->next=temp;
    tail=tail->next;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    int cnt=1;
    Node* temp = head;

    if(position==1){
        insetAtHead(head, data);
        return;
    }
    while(cnt< position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next== NULL){
        insertAtTail(tail, data);
        return ;

    }

    //create a node to insert in between
    Node* nodeToInsert= new Node(data);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}
void deleteNodefromData(Node* &head, int d){
     //i am assuming that particular data is present in the linked list so here is the paricular code for that
     Node* current= head;
     Node* prev=NULL;
     while(current!=NULL){
        if(current->data==d){
            
        }
     }
}
void printLL(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<< endl;
}
int main(){
    Node* node1= new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    //Node* node2= new Node(20);
    //node1->next=node2;
    Node* head=node1;
    Node* tail=node1;
    insetAtHead(head, 20);
    insetAtHead(head, 30);
    insetAtHead(head, 40);
    insetAtHead(head, 50);
    insertAtPosition(head, tail, 3, 100);
    // printLL(head);
    cout<<head->data;
    cout<<tail->data;

}