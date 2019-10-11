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
int length(node *head){
    int l=0;
    while(head->next!=NULL){
        head=head->next;
        l++;
    }
    return l+1;
}
node* mid(node *head){
    node * it1=head; //1
    node * it2=head; //2
    while(it2->next!=NULL && it2->next->next!=NULL){
        it1=it1->next;
        it2=it2->next->next;
    }
    return it1;
}
bool find(int data,node *head){
    if(head->data==data){
        return true;
    }
    if(head->next==NULL){
        return false;
    }
    bool f= find(data,head->next);
    if(f){
        return true;
    }
    return false;
}
node * element(node *head,int i){
    int count=0;
    while(head->next!=NULL){
        if(head->data == data){
            count=1;
        }
        if(count==1){
            i++;
        }
        head=head->next;
    }
    return i;
}
int main(){
    node *head = NULL;
    createlinklist1(&head);
    print(head);
    //insertathead1(&head);
    //print(head);
    //cout<<length(head)<<endl;
    //cout<<mid(head)->data<<endl;
    //cout<<find(5,head)<<endl;
    cout<<element(head,4)<<endl;
    return 0;
}
