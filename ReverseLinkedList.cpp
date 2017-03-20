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
//头插法
//ListNode* reverseList(ListNode* head) {
//    if(head){
//        ListNode *reverse_list = NULL;
//        ListNode *pCurrent = head, *pNext;
//        while (pCurrent) {
//            pNext = pCurrent->next;
//            if(!reverse_list){
//                pCurrent->next=NULL;
//                reverse_list=pCurrent;
//            }else {
//                pCurrent->next = reverse_list;
//                reverse_list = pCurrent;
//            }
//            pCurrent = pNext;
//        }
//        return reverse_list;
//    }
//    return NULL;
//}
//迭代法
//ListNode* reverseList(ListNode* head) {
//    if(head){
//        ListNode *current,*next,*prior;
//        prior=NULL;
//        current=head;
//        next=head->next;
//        while(current){
//            current->next=prior;
//            prior=current;
//            current=next;
//            if(next)
//                next=next->next;
//        }
//        return prior;
//    }
//    return NULL;
//}
//递归法
ListNode* reverseList(ListNode* head) {

}
ListNode* createList(){
    ListNode* head=NULL,*p=head;
    for(int i=1;i<=10;++i){
        //ListNode *temp=(ListNode *)malloc(sizeof(ListNode));
        //temp->val=i;
        //temp->next=NULL;
        ListNode *temp = new ListNode(i);
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
//顺序输出链表
void show(ListNode *head){
    while (head){
        cout<<head->val<<" ";
        head=head->next;
    }
}
//递归倒序输出链表
void recursion(ListNode *head){
    if(head) {
        recursion(head->next);
        cout<<head->val;
    }
}
int main() {
    ListNode *h1,*h2;
    h1=createList();
    h2=reverseList(h1);
    show(h2);
    return 0;
}