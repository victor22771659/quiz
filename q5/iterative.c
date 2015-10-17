/* FIXME: Implement! */
#include<stdio.h>
#include<stdlib.h>

typedef struct ListNode{
    int data;
    struct ListNode *next;
}Node;

Node *detectCycle(Node *head);

int main(int argc,char* argv[]){
    int i=0;
    Node *head=NULL;
    Node *current=(Node *)malloc(sizeof(Node));
    Node *cycleBegin=NULL;
    Node *result=NULL;
    head=current;
    for(i=1;i<5;i++){
	current->data=i;
    	current->next=(Node *)malloc(sizeof(Node));
	current=current->next;
	if(i==1)
	    cycleBegin=current;
    }
    current->data=i+1;
    current->next=cycleBegin;
    result=detectCycle(head);
    if(result==cycleBegin){
	printf("Successfully found cycleBegin Node");
	printf("cycleBegin Node data=%d\n",result->data);
    }
    for(i=1;i<6;i++){
    	current=head;
    	head=head->next;
    	free(current);
    }
    return 0;
}

Node *detectCycle(Node *head){
    int flag=0;
    Node *p1,*p2;
    p1=head;
    p2=head;
    while(p2&&p2->next&&p2->next->next){
        p2=p2->next->next;
        p1=p1->next;
        if(p1==p2){
            flag=1;
            break;
        }
    }
    if(flag==0)
        return NULL;
    p1=head;
    while(p1!=p2){
        p2=p2->next;
        p1=p1->next;
    }
    return p1;
}
