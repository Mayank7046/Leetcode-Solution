/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        if(list1==NULL&&list2==NULL){
            return list1;
        }
            ListNode* ptr=list1;
            ListNode* ptr2=list2;
            ListNode* newlist=new ListNode(-1);
            ListNode* dummy=newlist;

            while(ptr!=NULL&&ptr2!=NULL){
            if(ptr->val<ptr2->val){
                dummy->next=ptr;
                ptr=ptr->next;
            }
            // else if(ptr->val==ptr2->val){
            //     dummy->next=ptr;
            //      dummy->next=ptr2;
            // }
            else{
                dummy->next=ptr2;
                ptr2=ptr2->next;
            }
            
            dummy=dummy->next;}
            if(ptr!=NULL){
                dummy->next=ptr;
            }
            if(ptr2!=NULL){
                dummy->next=ptr2;
            }
            return newlist->next;
      }
    
};