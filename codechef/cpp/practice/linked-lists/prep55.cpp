/*
prep55
sidb95
bhatoresiddharth@gmail.com
12, 13 May 2024
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
void combine(vector<int>& nums, int i, int j);
void merge_sort(vector<int>& nums, int i, int j);

void merge_sort(vector<int>& nums, int i, int j) {
	if(j - i <= 0)
		return;
	merge_sort(nums, i,i+(j-i)/2);
	merge_sort(nums, (i+(j-i)/2)+1, j);
	combine(nums, i, j);
	return;
}

void combine(vector<int>& nums, int i, int j) {
	if(j - i <= 0)
		return;
	vector<int> ans;
	int end1 = (i+(j-i)/2)+1;
	int end2 = j+1;
	int lptr = i, rptr = end1;
	while(lptr != end1 && rptr != end2) {
		if(nums[lptr] < nums[rptr]) {
			ans.push_back(nums[lptr]);
			lptr++;
		}
		else {
			ans.push_back(nums[rptr]);
			rptr++;
		}
	}
	if(lptr == end1) {
		while(rptr != end2) {
			ans.push_back(nums[rptr]);
			rptr++;
		}
	}
	else if(rptr == end2) {
		while(lptr != end1) {
			ans.push_back(nums[lptr]);
			lptr++;
		}
	}
	for(int x=i;x<=j;x++)
		nums[x] = ans[x-i];
	return;
} 

int* mySort(int* nums, int n, int start, int end) {
    vector<int> V1;
    for (int i=0; i<n; i++) {
        V1.push_back(nums[i]);
    }
    merge_sort(V1, start, end);
    for (int i=0; i<n; i++) {
        nums[i] = V1[i];
    }
    return nums;
}

class Solution {
public:
    void sortedLinkedList(int* nums, int n) {
        nums = mySort(nums, n, 0, n-1);
        return;
    }
    
    void removeDuplicatesAltAux(Node* head) {
        Node *headA, *headB;
        headA = head;
        while (headA != nullptr) {
            bool FLAG = false;
            headB = headA;
            headA = headA->next;
            while ((headA != nullptr) && (headA->data == headB->data)) {
                if (!FLAG) {
                    FLAG = true;
                }
                headA = headA->next;
            }
            if (FLAG) {
                headB->next = headA;
            }
        }
        return;
    }

    void removeDuplicatesAux(Node* head, int* nums, int n) {
        sortedLinkedList(nums, n);
        Node* head1;
        head1 = head;
        for (int i=0; head1 != nullptr; i++) {
            head1->data = nums[i];
            head1 = head1->next;
        }
        removeDuplicatesAltAux(head);
    }

    Node* removeDuplicates(Node* head) {
        int n, count = 0;
        int* nums;
        Node* head1;
        head1 = head;
        nums[count] = head1->data;
        head1 = head1->next;
        count++;
        while (head1 != nullptr) {
            head1 = head1->next;
            count++;
        }
        n = count;
        removeDuplicatesAux(head, nums, n);
        return head;
    }
};
