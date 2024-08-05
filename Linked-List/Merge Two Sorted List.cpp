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
        ListNode* node1=list1;
        ListNode* node2=list2;
        if(node1==NULL)return node2;
        if(node2==NULL)return node1;
        ListNode* output;
        if(node2->val<node1->val)
            output=node2,node2=node2->next;
        else output=node1,node1=node1->next;;
        ListNode* node=output;
        while(node2!=NULL && node1!=NULL)
        {
            cout<<node->val<<' ';
            if(node2->val<node1->val)
            {
                node->next=node2;
                node=node->next;
                node2=node2->next;
            }
            else{
                node->next=node1;
                node=node->next;
                node1=node1->next;
            }
        }
        if(node2==NULL)
        {
            node->next=node1;
        }
        else
            node->next=node2;

        return output;

    }
};