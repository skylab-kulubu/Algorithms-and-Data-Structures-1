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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr)
            return head;
        if(k == 0)
            return head;
        
        int size = find_size(head);
        k = k % size;
        int rotate = size - k;
        
        ListNode* end = head;
        ListNode* Rotate = head;;
            
        while(end->next != NULL )
            end = end->next;
        
        end->next = head;
        
        while(rotate--){
            if(rotate == 0){
                ListNode* tmp = Rotate;
                Rotate = Rotate->next;
                tmp->next = nullptr;
                break;
            }
                
            Rotate = Rotate->next;
                
        }
        
        return Rotate;
    }
    
    int find_size(ListNode* head){
        int size = 1;
        ListNode* up = head;
        while(up->next != NULL ){
            size++;
            up = up->next; 
        }
        return size;
    }
    
};