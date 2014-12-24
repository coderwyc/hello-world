/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        if(headA == NULL || headB == NULL)
            return NULL;
            
        int lenA = 1;
        ListNode* curA = headA;
        while(curA->next != NULL)
        {
            lenA ++;
            curA = curA->next;
        }
        //now curA is the tail of A
        
        int lenB = 1;
        ListNode* curB = headB;
        while(curB->next != NULL)
        {
            lenB ++;
            curB = curB->next;
        }
        //now curB is the tail of B
        
        if(curA != curB)    //no intersection
            return NULL;
        else
        {
            //align
            int diff = lenA-lenB;
            if(diff > 0)
            {//A go
                while(diff)
                {
                    headA = headA->next;
                    diff--;
                }
            }
            else
            {//B go
                while(diff)
                {
                    headB = headB->next;
                    diff++;
                }
            }
            //go together
            while(true)
            {//A and B has judged to intersect, no need to avoid NULL
                if(headA == headB)
                    return headA;
                else
                {
                    headA = headA->next;
                    headB = headB->next;
                }
            }
        }
    }
};
