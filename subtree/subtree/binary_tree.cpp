#include <iostream>
using namespace std;


class Node {
public:
	Node* left=NULL;
	Node* right=NULL;
	int Integer;

	void inorder(Node* root) {
		if (root != NULL) {
			inorder(root->left);
			cout << root->Integer << endl;
			inorder(root->right);

		}
	}

};
Node n7 = { NULL,NULL ,22 };
Node n6 = { NULL,NULL ,95 };

Node n5 = { &n7,NULL,35 };

Node n4 = { NULL,NULL,5 };

Node n3 = { &n5,&n6,93 };

Node n2 = { &n4,NULL, 15 };;


Node n1 = {  &n2,&n3 ,17};







int main() {
	printf("전위 순회");
	Node *start=&n1;

	start->inorder(start);



}