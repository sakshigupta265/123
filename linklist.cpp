#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;

    node(int data){
        this->data=data;
        next= NULL;
    }
};
void createlinklist(node *& head){
    cout<<"Enter data or -1 to exit"<<endl;
    int data;
    cin>>data;
    if(data!=-1){
        head=new node(data);
    }else{
        return;
    }
    node * tail=head;
    cin>>data;
    while(data!=-1){
        node * temp = new node(data);
        tail->next=temp;
        tail=tail->next;
        cin>>data;
    }
    return;
}
void insertathead(node *& head){
    int data;
    cin>>data;
    node*temp= new node(data);
    temp->next=head;
    head=temp;
    return;
}
void print(node * head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"NULL"<<endl;
    return;
}
void createlinklist1(node **head){
    cout<<"Enter data or -1 to exit"<<endl;
    int data;
    cin>>data;
    if(data!=-1){
        *head=new node(data);
    }else{
        return;
    }
    node*tail=*head;
    cin>>data;
    while(data!=-1){
        node*temp1=new node(data);
        tail->next=temp1;
        tail=temp1;
        cin>>data;
    }
    return;
}
void insertathead1(node **head){
    int data;
    cin>>data;
    node*temp=new node(data);
    temp->next=*head;
    *head=temp;
}
int main(){
    node *head = NULL;
    createlinklist1(&head);
    print(head);
    insertathead1(&head);
    print(head);
    return 0;
}
