using namespace std;
#include <iostream>
class Node {
public:
	int val;
	Node*left;
	Node*right;
	Node(int data) {
		val=data;
		left=right=NULL;
	}
};
Node*tree_insertion(Node*root) {
	int data;
	cin>>data;

	if(data==-1)
		return NULL;
	root=new Node(data);

	root->left=tree_insertion(root->left);
	//   cout<<"left "<<root->val<<endl;
	root->right=tree_insertion(root->right);
	// cout<<"right "<<root->val<<endl;
	return root;
}
void inorder(Node*root) {
	if (root==NULL)
		return;
	inorder(root->left);
	cout<<root->val<<" ";
	inorder(root->right);
}
void postorder(Node*root) {
	if (root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->val<<" ";

}
void preorder(Node*root) {
	if (root==NULL)
		return;
	cout<<root->val<<" ";
	preorder(root->left);
	preorder(root->right);


}
int main()
{
	Node*root=NULL;
	root=tree_insertion(root);
	inorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;
	preorder(root);

	/*1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
	7 3 11 1 17 5
	7 11 3 17 5 1
	1 3 7 11 5 17 */
	return 0;
}