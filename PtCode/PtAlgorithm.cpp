#include "PtAlgorithm.h"

int findRepeatNumber(vector<int>& nums)
{
	//排序
	sort(nums.begin(),nums.end());
	//依次比较
	size_t iNum=nums.size();
	for (size_t i=0;i<iNum-1;++i)
	{
		if (nums[i]==nums[i+1])
		{
			return nums[i];
		}
	}
	return -1;

	//原地hash，把数字放到对应下标相等的地方，出现重复说明重复
	//for(int i = 0; i < nums.size(); ++i)
	//{
	//	while(nums[i] != i)     //当前元素不等于下标
	//	{
	//		if(nums[i] == nums[nums[i]])    return nums[i];
	//		swap(nums[i],nums[nums[i]]);            
	//	}
	//}   
	//return -1;
}

std::string replaceSpace(string s)
{
	string resultStr;
	size_t iNum=s.length();
	for (size_t i=0;i<iNum;++i)
	{
		if (s[i]==' ')
		{
			resultStr+="%20";
		}
		else
		{
			resultStr+=s[i];
		}
	}

	return resultStr;

	//库函数
}

bool findNumberIn2DArray(vector<vector<int>>& matrix, int target)
{
	int m=matrix.size(),n=matrix[0].size(), maxNum(0),minNum(0);
	
	return true;
}

vector<int> reversePrint(ListNode* head) 
{
	ListNode* headCopy=head;
	size_t iNum(0);

	//先分配内存
	while (headCopy)
	{
		headCopy=headCopy->next;
		++iNum;
	}
	vector<int> resultAns(iNum);

	//不断替换头
	while (head)
	{
		resultAns[--iNum]=head->val;
		head=head->next;
	}

	return resultAns;
}

TreeNode* mirrorTree(TreeNode* root) {
	if(!root||!(root->left)&&!(root->right))
	{
		return root;
	}

	root->left=mirrorTree(root->left);
	root->right=mirrorTree(root->right);

	auto tempLeft=root->left;
	root->left=root->right;
	root->right=tempLeft;

	return root;

	//        
	//if(!root)
	//	return root;

	//mirrorTree(root->left);
	//mirrorTree(root->right);

	//swap(root->left,root->right);

	//return root;
}
