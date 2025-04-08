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

        ~Node(){
            int val= this->data;
            if(this->next!=NULL){
                delete next;
                this->next=NULL;
            }
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

void DeleteNodePosition(Node* &head,Node* &tail, int position){
 
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
    else{
        Node* current=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=current;
            current=current->next;
            cnt++;
        } 
        prev->next=current->next;
        //FOR UPDATING THE TAIL WHEN WE ARE DELETING THE LAST NODE 
        if(current->next==NULL){
            tail=prev;
            prev->next=NULL;
        }
        else{current->next=NULL;
        delete current;}
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
    printLL(head);
    DeleteNodePosition(head, tail, 6);
    printLL(head);

    // cout<<head->data;
    cout<<tail->data;

}