/*
prep55
sidb95
bhatoresiddharth@gmail.com
12 May 2024
*/

#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

int* mergeSortAux(int* numArr, int n, int start, int end, int* retArr) {
    retArr[0] = numArr[start];
    int count = 1;
    int mid = (start+(end-start)/2);
    start++;
    if(start >= end) {
         return retArr;
    }
    int i=start, j=mid+1;
    for(int i=start; i<=mid; i++) {
        if(numArr[i] > numArr[j]) {
            retArr[count] = numArr[j];
            j++;
        }
        else {
            retArr[count] = numArr[i];
            i++;
        }
        count++;
    }
    if(count != n) {
        while(count != n) {
            if(i == mid) {        
                retArr[count] = numArr[i];
                count++;
                i++;
            }
            else {
                retArr[count] = numArr[j];
                count++;
                j++;
            }
        }
    }
    return retArr;
}

int* mergeSort(int* numArr, int n, int start, int end) {
    int* retArr;
    retArr = (int*)malloc(sizeof(int)*(end-start+1));
    if(start >= end) {
        return numArr;
    }
    else {
        int mid = (start+(end-start)/2);
        retArr = mergeSortAux(numArr, n, start, mid, retArr); 
        retArr = mergeSortAux(numArr, n, mid + 1, end, retArr);
        retArr = mergeSort(retArr, n, start, end);
    }
    return retArr;
}

class LinkedList {
public:
    void sortedLinkedList(int* nums, int n) {
        nums = mergeSort(nums, n, 0, n-1);
        return;
    }
    
    void removeDuplicatesAuxOne(Node* head, int* nums, int n) {
        int count = 0;
        Node* headA;
        headA = head;
        while (headA != nullptr) {
            headA->data = nums[count];
            headA = headA->next;
            count++;
        }
        return;
    }
    
    void removeDuplicatesAuxTwo(Node* head, int* nums, int n) {
        Node* headA, *headB;
        headA = head;
        while (headA != nullptr) {
            bool FLAG = false;
            headB = headA;
            headA = headA->next;
            while (headA != nullptr && headA->data == headB->data) {
                FLAG = true;
                headA = headA->next;
            }
            if (FLAG) {
                headB->next = headA;
            }
        }
        return;
    }

    Node* removeDuplicates(Node* head) {
        int n, count = 0;
        int nums[100002];
        Node* head1;
        head1 = head;
        nums[count] = head1->data;
        head1 = head1->next;
        count++;
        while (head1->next != nullptr) {
            nums[count] = head1->data;
            head1 = head1->next;
            count++;
        }
        n = count;
        sortedLinkedList(nums, n);
        removeDuplicatesAuxOne(head, nums, n);
        removeDuplicatesAuxTwo(head, nums, n);
        return head;
    }
};
