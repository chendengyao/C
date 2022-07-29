
/*
给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。

请你将两个数相加，并以相同形式返回一个表示和的链表。

你可以假设除了数字 0 之外，这两个数都不会以 0 开头。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/add-two-numbers
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


#include "stdio.h" // 包含输入输出标准库

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
  struct ListNode {
      int val;
      struct ListNode *next;
  };

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* p1 = l1;
    struct ListNode* p2 = l2;
    
    struct ListNode* result = NULL;
    struct ListNode* p3 = result;
    
    int temp = 0;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1 != NULL)
        {
            temp += p1->val;
            p1 = p1->next;
        }
        if (p2 != NULL)
        {
            temp += p2->val;
            p2 = p2->next;
        }
        
        struct ListNode* current = (struct ListNode*)malloc(sizeof(struct ListNode));
        current->next = NULL;
        current->val = temp % 10;
        p3 = current;
        p3 = p3->next;
        temp = temp / 10;
    }
    
}

int main() {
    printf("Hello World!"); // 输出字符串到控制台
    return 0;
}