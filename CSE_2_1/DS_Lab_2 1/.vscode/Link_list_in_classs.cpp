#include<bits/stdc++.h>
using namespace std;
class node{
    public :
    int data;
    node *next;
    node(int data){
        this->data=data;
        this->next=NULL;

    }
    node(){
        data=0;
        next=NULL;
    }
};
class linkedlist{
    private:
    node * head;
    public:
    linkedlist(){
        this->head=NULL;
    }
    void insertNode(int);
    void printList();
    void deleteNode(int);
};

void  linkedlist::insertNode(int data){
    node * newnode = new node(data);
    if(head==NULL){
        head=newnode;
        return;
    }
    node * tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newnode;

}
void linkedlist :: deleteNode(int val){
    node * tmp;
    node * pre;
    node * post;
    tmp = head;
    if(head == NULL){
        cout<<"empty list\n";
        return;
    }
    if(head->data==val){
        head=head->next;
        return;
    }
    while(1){
        if(tmp->data==val){
            post=tmp->next ;
            pre->next=post;
            //cout<<"KL"<<tmp->data<<" ";
            break;
        
        }
        else if (tmp->data!=val){
            pre=tmp;
            tmp=tmp->next;

        }
        else if(tmp->next==NULL){
            break;
        }
    }


    


}
void linkedlist :: printList(){
    node * tmp= head;
    if(head == NULL){
        cout<<"list empty\n";
    }
    while(tmp!=NULL){
        cout<<tmp->data<<"\n";
        tmp=tmp->next;
    }
}


int main(){
     linkedlist list;
    list.insertNode(2);
    list.insertNode(4);
    list.insertNode(6);
    list.deleteNode(2);
    list.printList();

}