#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head) {
    if(head){
        ListNode *reverse_list=NULL;
        ListNode *pCurrent=head,*pNext;
        while(pCurrent) {
            pNext=pCurrent->next;
            pCurrent=reverse_list->next;
            reverse_list=pCurrent;
            pCurrent=pNext;
        }
    }
}
ListNode* createList(){
    ListNode* head=NULL,*p=head;
    for(int i=0;i<10;++i){
        ListNode *temp;
        temp->val=i;
        temp->next=NULL;
        if(!head){
            head=p=temp;
        }
        else{
            p->next=temp;
            p=p->next;
        }
    }
    return head;
}
void show(ListNode * head){
    while (head){
        cout<<head->val<<" ";
        head=head->next;
    }
}
int main() {
    show(createList());
    return 0;
}