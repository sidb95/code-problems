/*
3208653
bhatoresiddharth@gmail.com
sidb95
13 May 2024
*/

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

void convertVector(vector<int>& V1, Node* root) {
    if (root == nullptr) {
        return;
    }
    else if ((root->left == nullptr) && (root->right == nullptr)) {
        V1.push_back(root->data);
        return;
    }
    else if(root->right == nullptr) {
        convertVector(V1, root->left);
    }
    else if (root->left == nullptr) {
        convertVector(V1, root->right);
    }
    else {
        convertVector(V1, root->left);
        convertVector(V1, root->right);
    }
    V1.push_back(root->data);
    return;
} 

int countCouples(Node* root1, Node* root2 , int x) {
    vector<int> V1, V2;
    int m, n;
    int retVal = 0;
    convertVector(V1, root1);
    m = V1.size();
    convertVector(V2, root2);
    n = V2.size();
    merge_sort(V1, 0, m-1);
    merge_sort(V2, 0, n-1);
    int y;
    for (int i=0; i<m; i++) {
        y = x - V1[i];
        if (y <= 0) {
            retVal += 0;
        }
        int r = 0, t = n-1;
        while ((r < n) && (t >= 0) && (r <= t)) {
            int mid = r + (t-r)/2;
            if (V2[mid] == y) {
                retVal++;
                break;
            }
            else if (V2[mid] < y) {
                r = mid + 1;
            }
            else {
                t = mid - 1;
            }
        }
    }
    return retVal;
}
