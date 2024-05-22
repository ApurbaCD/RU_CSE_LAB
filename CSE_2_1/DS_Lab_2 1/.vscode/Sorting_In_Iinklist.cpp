//sort linked list

#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node * next;
    node(int data){
       this->data=data;
       this->next=NULL;
    }
        node(){
        this->data=0;
        this->next=NULL;
    }

};
class linkedlist{
    private:
    node * head;
    public:
    linkedlist(){
        this->head=NULL;
    }
    void insert(int);
    void printlist();
    void sort();

};
void linkedlist :: insert(int val){
node * newnode = new node(val);
node * ptr=head;

if(head == NULL){
    head = newnode;
    return;
}
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr ->next= newnode;
}
void linkedlist::printlist(){
    node * ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
void linkedlist :: sort(){
    node *a, *b;
    int tmp;
    for(a=head;a->next!=NULL;a=a->next)
    for(b=a->next;b!=NULL;b=b->next){
        if(a->data>b->data){
            tmp = a->data;
            a->data=b->data;
            b->data=tmp;
        }
    }
}
int main(){
    linkedlist link;
    link.insert(5);
    link.insert(4);
    link.insert(8);
    link.insert(1);
    link.sort();
    link.printlist();

}