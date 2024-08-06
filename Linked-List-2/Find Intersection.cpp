```
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
        ListNode* d1=A,*d2=B;
        while(d1 || d2)
        {
            if(d1==d2)return d2;
            if(d1==NULL)d1=B;
            else d1=d1->next;
            if(d2==NULL)d2=A;
            else d2=d2->next;
            
        }
        return NULL;
        
    }
};