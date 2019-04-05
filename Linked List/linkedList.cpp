#include "bits/stdc++.h"
using namespace std;

struct node {
        int value;
        node* next;
        node( int value ) : value(value), next(NULL) {}
};

node *head, *temp;

void showLinkedList() {
        temp = head;
        while( temp ) {
                cout << temp->value << " -> ";
                temp = temp->next;
        }
        cout << "NULL" << endl;
}

void insertLast(int value) {
        temp = head;

        if(head == NULL) {
                head = new node(value);
                return ;
        }
        while( temp->next ){
                temp = temp->next;
        }

        temp->next = new node(value);

}




int main() {

        head = NULL;

        for(int i = 0; i < 10; i++) {
                insertLast(i + 1);
        }
        showLinkedList();


        return 0;
}
