#include <iostream>

using namespace std;

template<typename T>
class BalancedBinaryTree
{
private:
	struct Node
	{
		T data;
		int height;
		Node* left;
		Node* right;
	};

	Node* root;

public:

	BalancedBinaryTree()
	{
		root = nullptr;
	}

	Node* CreateNode(T data)
	{
		Node* newNode = new Node;

		newNode->data = data;
		newNode->height = 1;

		newNode->left = nullptr;
		newNode->right = nullptr;

		return newNode;
	}

	int Height(Node* root)
	{
		if (root == nullptr)
		{
			return 0;
		}
		else
		{
			int left = Height(root->left);
			int right = Height(root->right);

			int height = std::max(left, right) + 1;

			return height;
		}
	}

	int BalanceFactor(Node* root)
	{
		return Height(root->left) - Height(root->right);
	}

	Node* Insert(Node* root, T data)
	{
		if (root == nullptr)
		{
			root = CreateNode(data);
		}
		else if (root->data < data)
		{
			root->right = Insert(root->right, data);
			root = Rebalance(root);
		}
		else if (root->data > data)
		{
			root->left = Insert(root->left, data);
			root = Rebalance(root);
		}

		return root;
	}

	Node* LLRotate(Node* root)
	{
		Node* currentNode = root->left;

		root->left = currentNode->right;
		currentNode->right = root;

		return currentNode;
	}

	Node* RRRotate(Node* root)
	{
		Node* currentNode = root->right;
		root->right = currentNode->left;
		currentNode->left = root;
		return currentNode;
	}

	Node* RLRotate(Node* root)
	{
		Node* currentNode = root->right;
		root->right = LLRotate(currentNode);
		return RRRotate(root);
	}

	Node* LRRotat(Node* root)
	{
		Node* currentNode = root->left;
		root->left = RRRotate(currentNode);
		return LLRotate(root);
	}

	Node* Rebalance(Node* root)
	{
		int factor = BalanceFactor(root);

		if (factor > 1)
		{
			if (BalanceFactor(root->left) > 0)
			{
				// Left Left 
			}
			else
			{
				// Left Right
			}
		}
		else
		{
			if (BalanceFactor(root->right) > 0)
			{
				// Right Left
			}
			else
			{
				// Right Right
			}
		}
	}

};

int main()
{
#pragma region 균형 이진 탐색 트리	
	// 삽입과 삭제가 일어나는 경우 자동으로 그 높이를
	// 작게 유지하는 노드 기반 이진 탐색 트리입니다. 

	// Balance Factor(BF)
	// 왼쪽 서브 트리의 높이에서 오른쪽 서브 트리의 높이를 뺀 값

	// BF = 1  (왼쪽 서브 트리의 높이가 오른쪽 서브 트리의 높이보다 한 단계 높다.)

	// BF = 0  (왼쪽 서브 트리의 높이와 오른쪽 서브 트리의 높이가 같다.)

	// BF = -1 (왼쪽 서브 트리의 높이가 오른쪽 서브 트리의 높이보다 한 단계 낮다.)

	// LL 유형 : 불균형 발생 노드의 왼쪽 자식 노드와 자식의 왼쪽 자식 노드에
	//           의해 왼쪽으로 기울어져 있습니다.

	// RR 유형 : 불균형 발생 노드의 오른쪽 자식 노드와 자식의 오른쪽 자식 노드에
	//           의해 오른쪽으로 기울어져 있습니다.

	// LR 유형 : 불균형 발생 노드의 왼쪽 자식 노드와 자식의 오른쪽 자식 노드에 의해
	//           왼쪽 서브트리가 기울어져 있습니다.

	// RL 유형 : 불균형 발생 노드의 오른쪽 자식 노드와 자식의 왼쪽 자식 노드에 의해
	//           오른쪽 서브 트리가 기울어져 있습니다.

#pragma endregion



	return 0;
}
