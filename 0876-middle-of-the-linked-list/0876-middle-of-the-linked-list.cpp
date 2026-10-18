/**
* Definition for singly-linked list.
* struct ListNode {
*	int val;
*	ListNode *next;
*	ListNode() : val(0), next(nullptr) {}
*	ListNode(int x) : val(x), next(nullptr) {}
*	ListNode(int x, ListNode *next) : val(x), next(next) {}
* };
*/
// int getlength(ListNode *head){
//	int len=0;
 
//	ListNode* temp=head;
//	while(temp !=NULL){
//	temp=temp->next;
//	len++;


//	}
//	return len;
// }
ListNode* getmiddle(ListNode* head){
//0 or 1 node
if(head== NULL || head->next == NULL){ return head;
}
//if 2 node are present
if(head->next->next==NULL){ return head->next;
}
ListNode* slow=head; ListNode* fast=head->next; while(fast != NULL){ fast=fast->next; if(fast!=NULL){
fast=fast->next;
}
slow=slow->next;
}
return slow;
}
class Solution {
 
public:
ListNode* middleNode(ListNode* head) { return getmiddle(head);
// int len=getlength(head);
// int mid=len/2;
// ListNode* temp=head;
// int cnt=0;
// while(cnt<mid){
//	temp=temp->next;
//	cnt++;
// }
// return temp;
}
};
