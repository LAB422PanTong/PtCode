#include "PtAlgorithm.h"

int findRepeatNumber(vector<int>& nums)
{
	//����
	sort(nums.begin(),nums.end());
	//���αȽ�
	size_t iNum=nums.size();
	for (size_t i=0;i<iNum-1;++i)
	{
		if (nums[i]==nums[i+1])
		{
			return nums[i];
		}
	}
	return -1;

	//ԭ��hash�������ַŵ���Ӧ�±���ȵĵط��������ظ�˵���ظ�
	//for(int i = 0; i < nums.size(); ++i)
	//{
	//	while(nums[i] != i)     //��ǰԪ�ز������±�
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

	//�⺯��
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

	//�ȷ����ڴ�
	while (headCopy)
	{
		headCopy=headCopy->next;
		++iNum;
	}
	vector<int> resultAns(iNum);

	//�����滻ͷ
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
