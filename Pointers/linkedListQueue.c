#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* nextPtr;
};

struct Node* head = NULL;

void addNewNode(int data){
    if(head == NULL){
        head = (struct Node*) malloc(sizeof(struct Node));
        head->data = data;
        head->nextPtr = NULL;
    }else{
        struct Node* nodePtr = head; //NodePtr sluji za navigirane prez suzdadenite node-ove 
        while(nodePtr->nextPtr != NULL){
            nodePtr = nodePtr->nextPtr;
        }
        struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->nextPtr = NULL;
        nodePtr->nextPtr = newNode;

    }
}

void printNodesData(){
    struct Node* tempNode = head;
    while(tempNode != NULL){
        printf("%d ",tempNode->data);
        tempNode = tempNode->nextPtr;
    }
}

int main(){
    addNewNode(9);
    addNewNode(1);
    addNewNode(7);
    printNodesData();

    return 0;
}
