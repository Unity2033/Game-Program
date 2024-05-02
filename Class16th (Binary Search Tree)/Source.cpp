#include <iostream>

using namespace std;

template <typename T>
class BinarySearchTree
{
private:
	struct Node
	{
		T data;
		Node* left;
		Node* right;
	};

	Node* root;

public:
	BinarySearchTree()
	{
		root = nullptr;
	}

	Node* CreateNode(T data)
	{
		Node* newNode = new Node();

		newNode->data = data;
		newNode->left = nullptr;
		newNode->right = nullptr;

		return newNode;
	}

	void Insert(T data)
	{
		if (root == nullptr)
		{
			root = CreateNode(data);
			return;
		}
		else
		{
			Node* currentNode = root;

			while (currentNode != nullptr)
			{
				if (currentNode->data == data)
				{
					return;
				}		
				else if (currentNode->data > data)
				{
					if (currentNode->left == nullptr)
					{
						currentNode->left = CreateNode(data);
						break;
					}
					else
					{
						currentNode = currentNode->left;
					}
				}
				else 
				{
					if (currentNode->right == nullptr)
					{
						currentNode->right = CreateNode(data);
						break;
					}
					else
					{
						currentNode = currentNode->right;
					}
				}
			}
		}
	}

	bool Find(T data)
	{
		Node* currentNode = root;

		if (currentNode == nullptr)
		{
			return false;
		}

		while (currentNode != nullptr)
		{
			if (currentNode->data == data)
			{
				return true;
			}
			else
			{
				if (currentNode->data > data)
				{
					currentNode = currentNode->left;
				}
				else
				{
					currentNode = currentNode->right;
				}
			}
		}

		return false;
	}

	void Remove(T data)
	{
		Node* currentNode = root;
		Node* parentNode = nullptr;

		if (currentNode == nullptr)
		{
			cout << "Binary Search Tree is empty." << endl;
			return;
		}

		while (currentNode->data != data)
		{
			if (currentNode->data > data)
			{
				parentNode = currentNode;
				currentNode = currentNode->left;
			}
			else
			{
				parentNode = currentNode;
				currentNode = currentNode->right;
			}
		}

		if (currentNode == nullptr)
		{
			cout << "Data not found in the tree." << endl;
			return;
		}

		// Case 1: ?? œ?˜ë ¤???¸ë“œê°€ ë¦¬í”„ ?¸ë“œ??ê²½ìš°
		if (currentNode->left == nullptr && currentNode->right == nullptr)
		{
			if (parentNode != nullptr)
			{
				if (parentNode->left == currentNode)
				{
					parentNode->left = nullptr;
				}
				else
				{
					parentNode->right = nullptr;
				}
			}
			else
			{
				root = nullptr;
			}
		}
		else if (currentNode->left == nullptr || currentNode->right == nullptr) // Case 2: ?? œ?˜ë ¤???¸ë“œê°€ ?ì‹??1ê°œì¸ ê²½ìš°
		{
			Node* childNode = nullptr;

			if (currentNode->left != nullptr)
			{
				childNode = currentNode->left;
			}
			else
			{
				childNode = currentNode->right;
			}

			if (parentNode != nullptr)
			{
				if (parentNode->left == currentNode)
				{
					parentNode->left = childNode;
				}
				else
				{
					parentNode->right = childNode;
				}
			}
		}
		else
		{
			Node* childNode = currentNode->right;
			Node* traceNode = childNode;

			while (childNode->left != nullptr)
			{
				traceNode = childNode;
				childNode = childNode->left;
			}

			if (traceNode->left == traceNode)
			{
				traceNode->left = childNode->right;
			}
			else
			{
				traceNode->right = childNode->right;
			}

			currentNode->data = childNode->data;

			delete childNode;
  
			return;
		}

		delete currentNode;
	}

	void Destroy(Node * root)
	{
		if (root != nullptr)
		{
			Destroy(root->left);
			Destroy(root->right);
			delete root;
		}
	}

	~BinarySearchTree()
	{
		Destroy(root);
	}
};


int main()
{
#pragma region ?´ì§„ ?ìƒ‰ ?¸ë¦¬
	// ???¸ë“œ???€???¼ìª½/?¤ë¥¸ìª½ì˜ (ìµœë?) ??ê°œì˜ ?ì‹??ê°€ì§????ˆëŠ” ?¸ë¦¬?´ë©°,
	// ?¼ìª½ ?ì‹?€ ë¶€ëª??¸ë“œë³´ë‹¤ ?‘ì? ê°’ì„, ?¤ë¥¸ìª??ì‹?€ ë¶€ëª??¸ë“œë³´ë‹¤ ??ê°’ì„
	// ê°€ì§€???ìƒ‰ ?¸ë¦¬?…ë‹ˆ??

	BinarySearchTree<int> binarySearchTree;


#pragma endregion



	return 0;
}
