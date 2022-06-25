#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node *funin(int data1,struct node *head) // hume struct node *  
                                               //type ka return kara hai taaki humare main                        
{                                              // wale head m newnode ki values ja paye

        struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
   // printf("enter data");
    //scanf("%d",& newnode->data);
    newnode->data=data1;
    newnode->next=head;
    head=newnode;
    return head;
}
void main() {
    int choice=1;
    struct node *head=0,*temp,*newnode;
    while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",& newnode->data);
    newnode->next=0;
    if(head==0){
        head=newnode;
        head->next=0;
        temp=newnode;
        printf(" head ka beta %d \n",head->data);
    
    }else
    {
        temp->next=newnode;
        temp=newnode;
    }
    printf("enter choice\n");
    scanf("%d",&choice);}
    temp=head;
    while(temp!=0){
        printf("data is %d ",temp->data);
        temp=temp->next;
    }
    head=funin(6,head); //Hum idhar head pass kar rhe hein or jo funin m head change hoga vo alag 
                        //head hoga or ye alag head hai islie return karaya hai
   // struct node *newnode;
//     int data1=6;
//    newnode=(struct node*)malloc(sizeof(struct node));
   // printf("enter data");
    //scanf("%d",& newnode->data);
    // newnode->data=data1;
    // newnode->next=head;
    // head=newnode;
    temp=head;
    while(temp!=0){
        printf("\n new data is %d \n",temp->data);
        temp=temp->next;
    }
    //2.head=newnode;1.newnode->next=head
}
