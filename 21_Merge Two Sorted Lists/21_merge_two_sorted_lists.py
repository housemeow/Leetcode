# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    """
    l1: ListNode
    l2: ListNode

    1. 主要是將l1, l2這2串list node，將每一個node儲存進List<ListNode> nodeList
    2. 排序nodeList，由小到大
    3. 最後將nodeList裡面的ListNode，更新每個next
    """
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        if l1 is None and l2 is None:
            return None
        nodeList = []
        while l1 is not None:
            nodeList.append(l1)
            l1 = l1.next
        while l2 is not None:
            nodeList.append(l2)
            l2 = l2.next
        nodeList.sort(key = lambda node : node.val)
        for index, node in enumerate(nodeList):
            if index < len(nodeList)-1:
                node.next = nodeList[index+1]
        nodeList[len(nodeList)-1].next = None
        return nodeList[0]