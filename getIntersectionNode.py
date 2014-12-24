# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param two ListNodes
    # @return the intersected ListNode
    def getIntersectionNode(self, headA, headB):
        if headA is None or headB is None:
            return None
        lenA = 1 # calculate length of list A
        curA = ListNode(-1)
        curA = headA
        while(curA.next):
            lenA += 1
            curA = curA.next
        lenB = 1 # calculate length of list B
        curB = ListNode(-1)
        curB = headB
        while(curB.next):
            lenB += 1
            curB = curB.next
        if curA != curB: # tail of A != tail of B
            return None
        else:
            diff = lenA - lenB # alignment
            if diff > 0:
                while diff:
                    headA = headA.next
                    diff -= 1
            else:
                while diff:
                    headB = headB.next
                    diff += 1
        # find intersection 
        while True: 
            if headA == headB:
                return headA
            else:
                headA = headA.next
                headB = headB.next
            
            
        
