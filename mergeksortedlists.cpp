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
    ListNode *mergeLists(ListNode *p, ListNode *q)
    {
        ListNode dummy(-1);
        ListNode *ptr = &dummy;
        while(p&&q)
        {
            if(p->val < q->val)
            {
                ptr->next = p;
                p = p->next;
            }
            else
            {
                ptr->next = q;
                q = q->next;
            }
            ptr = ptr->next;
        }
        ptr->next = p != NULL ? p : q;
        return dummy.next;
    }
 
    ListNode *mergeKLists(vector<ListNode *> &lists) 
    {
        if(lists.empty()) 
            return NULL;
        queue<ListNode *> que;
        for(int i = 0 ; i < lists.size(); ++ i)     //入队
        {
            if(lists[i]) que.push(lists[i]);
        }
        while(que.size()>1)
        {
            ListNode* p = que.front();que.pop();
            ListNode* q = que.front();que.pop();
            que.push(mergeLists(p,q));
        }
        return que.front();
    }
};
