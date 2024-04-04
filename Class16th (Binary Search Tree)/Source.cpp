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
				// 내가 삽입하고자 하는 값이 root 값보다 작은 경우
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
				else // 내가 삽입하고자 하는 값이 root 값보다 큰 경우
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

		// Case 1: 삭제하려는 노드가 리프 노드인 경우
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
		else if (currentNode->left == nullptr || currentNode->right == nullptr) // Case 2: 삭제하려는 노드가 자식이 1개인 경우
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
		}

		delete currentNode;
	}
};


int main()
{
#pragma region 이진 탐색 트리
	// 한 노드에 대해 왼쪽/오른쪽의 (최대) 두 개의 자식을 가질 수 있는 트리이며,
	// 왼쪽 자식은 부모 노드보다 작은 값을, 오른쪽 자식은 부모 노드보다 큰 값을
	// 가지는 탐색 트리입니다.

	BinarySearchTree<int> binarySearchTree;


#pragma endregion



	return 0;
}
