#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};


void show(struct node*ptr){
    while(ptr!=NULL){
    printf("Element: %d\n",ptr->data);
    ptr=ptr->link;
    }

}
int insert(struct node*ptr,int d){
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=ptr;
    return ptr;
}


int main(){
    struct node * head;
    struct node * head2;
    struct node * head1;
    head=(struct node*)malloc(sizeof(struct node));
    head2=(struct node*)malloc(sizeof(struct node));
    head1=(struct node*)malloc(sizeof(struct node));

    head->data=6;
    head->link=head2;
    head2->data=9;
    head2->link=head1;
    head1->data=5;
    head1->link=NULL;

insert(head,4);
    show(head);
    
    return 0;
}