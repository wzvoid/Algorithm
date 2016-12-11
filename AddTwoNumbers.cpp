//
// Created by wzvoid on 2016/12/11.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/*
 * 几个典型的测试用例：
 * 3-4-6
 * 5-7-1
 * ----------
 * 8-1-8
 *
 * 3-4-6
 * 5-7-3
 * ----------
 * 8-1-0-1
 *
 * 3-4-6
 * 5-7-6-1
 * ----------
 * 8-1-3-2
 *
 * 3-4-6
 * 5-7-6-9
 * ----------
 * 8-1-3-0-1
 *
 * */

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int flag=0;//进位数
    int v1,v2;
    ListNode *l3=NULL;//构造最终链表并返回
    ListNode *p1,*p2,*p3;//遍历各个链表
    if(l1!=NULL&&l2!=NULL){
        p1=l1;
        p2=l2;
        while(p1!=NULL||p2!=NULL){
            v1=p1==NULL?0:p1->val;
            v2=p2==NULL?0:p2->val;
            ListNode *temp=(ListNode*)malloc(sizeof(ListNode));
            temp->val=(v1+v2+flag)%10;
            temp->next=NULL;
            flag=(v1+v2+flag)/10;//求进位
            if(l3==NULL){
                p3=l3=temp;
            } else{
                p3->next=temp;
                p3=p3->next;
            }
            if(p1!=NULL)
                p1=p1->next;
            if(p2!=NULL)
                p2=p2->next;
        }
        if(flag==1) {
            ListNode *end=(ListNode*)malloc(sizeof(ListNode));
            end->val=1;
            end->next=NULL;
            p3->next=end;
        }
    }
    return l3;
}


ListNode* createListNode(int a[],int n){
    ListNode *head=NULL,*p;
    for (int i = 0; i < n; ++i) {
        ListNode *temp=(ListNode*)malloc(sizeof(ListNode));
        temp->val=a[i];
        temp->next=NULL;
        if(head==NULL){
            p=head=temp;
        }else{
            p->next=temp;
            p=p->next;
        }
    }
    return head;
}

void print(ListNode *head){
    ListNode *p;
    if(head!=NULL){
        p=head;
        while (p!=NULL){
            cout<<p->val<<" ";
            p=p->next;
        }
    }
}

int main() {
    int a[] = {3,4,6},b[]={5,7,6,9};
    print(addTwoNumbers(createListNode(a,3),createListNode(b,4)));
    return 0;
}