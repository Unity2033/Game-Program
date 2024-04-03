#include <iostream>

using namespace std;

template <typename T>
class BinarySearchTree
{
private:
	struct Node
	{
		T data;
		Node * left;
		Node * right;
	};

	Node * root;

public:

	BinarySearchTree()
	{
		root = nullptr;
	}

	Node * CreateNode(T data)
	{
		Node * newNode = new Node();

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
			Node * currentNode = root;

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


};


int main()
{
#pragma region 이진 탐색 트리
	// 한 노드에 대해 왼쪽/오른쪽의 (최대) 두 개의 자식을 가질 수 있는 트리이며,
	// 왼쪽 자식은 부모 노드보다 작은 값을, 오른쪽 자식은 부모 노드보다 큰 값을
	// 가지는 탐색 트리입니다.
	

#pragma endregion



	return 0;
}
