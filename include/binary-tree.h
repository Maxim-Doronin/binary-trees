#pragma once
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

typedef int dataType;

struct Node {
	dataType key;
	Node* pLeft;
	Node* pRight;
};

class BinaryTree {
private:
	Node *pRoot;
	Node *subTree;
public: 
	BinaryTree();
	~BinaryTree();
	void createSingleTree(Node *&pRoot);
	void createSingleTree(dataType key);
	
	void workAroundDepthDirect();
	void workAroundDepthReverse();
	void workAroundDepthSymmetrically();
	void workAroundBreadth();
	
	Node* DFS(dataType key);
	Node* BFS(dataType key);
	
	void insert(dataType key);
	void erase(dataType key);
};