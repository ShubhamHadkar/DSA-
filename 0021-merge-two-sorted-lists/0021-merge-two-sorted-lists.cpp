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
        ListNode* head = nullptr;
ListNode* temp = nullptr;

while(list1 != nullptr && list2 != nullptr){
    ListNode* newNode = nullptr;
    if(list1->val < list2->val){
        newNode = new ListNode(list1->val);
        list1 = list1->next;
    } else {
        newNode = new ListNode(list2->val);
        list2 = list2->next;
    }

    if(head == nullptr){
        head = temp = newNode;
    } else {
        temp->next = newNode;
        temp = temp->next;
    }
}


while(list1 != nullptr){
    ListNode* newNode = new ListNode(list1->val);
    if(head == nullptr){
        head = temp = newNode;
    } else {
        temp->next = newNode;
        temp = temp->next;
    }
    list1 = list1->next;
}


while(list2 != nullptr){
    ListNode* newNode = new ListNode(list2->val);
    if(head == nullptr){
        head = temp = newNode;
    } else {
        temp->next = newNode;
        temp = temp->next;
    }
    list2 = list2->next;
}

return head;

    }   
};