#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;
}; 

Node* deleteNode(Node* head, int x) {
    if (head == NULL || x <= 0) {
        return head; 
    }

    if (x == 1) {
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    } else {
        Node* fp = head;
        Node* sp = NULL;
        int cnt = 1;

        while (cnt < x && fp != NULL) {
            sp = fp;
            fp = fp->next;
            cnt++;
        }

        if (fp == NULL) {
            return head; 
        }

        sp->next = fp->next;
        if (fp->next != NULL) {
            fp->next->prev = sp;
        }
        fp->prev = NULL;
        fp->next = NULL;
        delete fp;
    }
    return head; 
}