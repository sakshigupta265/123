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
int length(node *head){
    int l=0;
    while(head->next!=NULL){
        head=head->next;
        l++;
    }
    return l+1;
}
void swaphead(node *&head,node *&temp){
    node *temp=head->next;
    head->next=head->next->next;
    head->next->next=head;
    head=temp;
    return;
}
void swap(node *&head,int i,int j){
    node *it=head;
    node *it2=head;
    node *n1=head;
    node *n2=head;
    for(int k=0;k<i-1;k++){
        it=it->next;
    }
    for(int k=0;k<j-1;k++){
        it2=it2->next;
    }
    for(int k=0;k<i;k++){
        n1=n1->next;
    }
    for(int k=0;k<j;k++){
        n2=n2->next;
    }

    for(int i=0;i<j;i++){
        it=it->next;
    }

}
void bubble(node *& head)
int main(){
    node *head = NULL;
    createlinklist1(&head);
    print(head);
    //insertathead1(&head);
    //print(head);
    cout<<length(head)<<endl;
    cout<<mid(head)->data<<endl;
    cout<<find(5,head)<<endl;
    return 0;
}
