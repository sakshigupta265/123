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
        node*temp=new node(data);
        tail->next=temp;
        tail=temp;
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
void insertatk(node * head,int k){
    for(int i=0;i<k-1;i++){
        head=head->next;
    }
    int data;
    cin>>data;
    node *temp=new node(data);
    temp->next=head->next;
    head->next=temp;
    return;
}
void insertatk1(node *& head,int k){
    node *temp2=head;
    for(int i=0;i<k-1;i++){
        temp2=temp2->next;
    }
    int data;
    cin>>data;
    node *temp=new node(data);
    temp->next=temp2->next;
    temp2->next=temp;
    return;
}
int main(){
    node *head = NULL;
    createlinklist(head);
    print(head);
    int k;
    cin>>k;
    insertatk1(head,k);
    print(head);
    return 0;
}

