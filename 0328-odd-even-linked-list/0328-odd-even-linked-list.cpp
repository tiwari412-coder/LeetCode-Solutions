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
     ListNode*arr2ll(vector<int>&arr){
        ListNode*head=new ListNode(arr[0]);
        ListNode*prev=head;
        
        for(int i=1;i<arr.size();i++){
           ListNode*temp=new ListNode(arr[i],nullptr);
            prev->next=temp;
            prev=temp;
        }
        return head;
    }
    

    ListNode*oddEvenList(ListNode*head){
        if (!head || !head->next) return head; 
       vector<int>arr;
       ListNode*temp=head;
       ListNode*prev=head->next;
       
       while(temp!=NULL){
           arr.push_back(temp->val);
           
           if(temp->next!=NULL){
           temp=temp->next->next;
          }
          else{
              break;
          }
       }
       
       while(prev!=NULL){
           arr.push_back(prev->val);
           if(prev->next!=NULL){
           prev=prev->next->next;
           }
           else{
               break;
           }
       }
       
       ListNode*newhead=arr2ll(arr);
       return newhead; 
   }
};