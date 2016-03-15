#include "binary-tree.h"

BinaryTree::BinaryTree()
{
	subTree = pRoot;
}

BinaryTree::~BinaryTree()
{
}

void BinaryTree::createSingleTree(Node *&pRoot)
{
	this->pRoot = pRoot;
	subTree = pRoot;
}

void BinaryTree::createSingleTree(dataType key)
{
	this->pRoot = new Node;
	pRoot->key    = key;
	pRoot->pLeft  = 0;
	pRoot->pRight = 0;
	subTree = pRoot;
}

void BinaryTree::workAroundDepthDirect()
{
	subTree = pRoot;
	stack<Node*> s;
	s.push(subTree);
	while (!s.empty())
	{
		Node* tmp;
		tmp = s.top();
		cout << tmp->key << endl;
		s.pop();
		if (tmp->pRight)
			s.push(tmp->pRight);
		if (tmp->pLeft)
			s.push(tmp->pLeft);
	}
}

void BinaryTree::workAroundDepthReverse()
{
	subTree = pRoot;
	stack<Node*> s1, s2;
	s1.push(subTree);
	while (!s1.empty())
	{
		Node* tmp = s1.top();
		s1.pop();
		if (tmp->pLeft)
			s1.push(tmp->pLeft);
		if (tmp->pRight)
			s1.push(tmp->pRight);
		s2.push(tmp);
	}

	while (!s2.empty())
	{
		Node* tmp = s2.top();
		s2.pop();
		cout << tmp->key << endl;
	}
}

void BinaryTree::workAroundDepthSymmetrically()
{
	subTree = pRoot;
	stack<Node*> s;
	while ((!s.empty()) || (subTree))
	{
		if (subTree) {
			s.push(subTree);
			subTree = subTree->pLeft;
		}
		else {
			subTree = s.top();
			s.pop();
			cout << subTree->key << endl;
			subTree = subTree->pRight;
		}
		
	}
}

void BinaryTree::workAroundBreadth()
{
	subTree = pRoot;
	queue<Node*> q;
	q.push(subTree);
	while (!q.empty())
	{
		Node* tmp = q.front();
		q.pop();
		cout << tmp->key << endl;
		q.push(tmp->pLeft);
		q.push(tmp->pRight);
	}
}

Node* BinaryTree::DFS(dataType key)
{

}