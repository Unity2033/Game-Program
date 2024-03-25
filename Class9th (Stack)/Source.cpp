#include <iostream>

#define SIZE 5

using namespace std;

template<typename T>
class Stack
{
private:
	int top;
	T buffer[SIZE];

public:
	Stack()
	{
		top = -1;

		for (int i = 0; i < SIZE; i++)
		{
			buffer[i] = NULL;
		}
	}

	void Push(T data)
	{
		if (IsFull())
		{
			cout << "Stack is Full" << endl;
		}
		else
		{
			buffer[++top] = data;
		}
	}

	T Pop()
	{
		if (Empty())
		{
			cout << "Stack is Empty" << endl;
		}
		else
		{
			return buffer[top--];
		}
	}

	bool Empty()
	{
		if (top <= -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool IsFull()
	{
		if (SIZE - 1 <= top)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	T& Top()
	{
		return buffer[top];
	}

};

bool CheckBracket(string content)
{
	Stack<char> stack;

	for (int i = 0; i < content.length(); i++)
	{
		char character = content[i];

		if (character == '(' || character == '{' || character == '[')
		{
			stack.Push(character);
		}
		else if (character == ')' || character == '}' || character == ']')
		{
			char alphabet = stack.Pop();

			if (alphabet == '(' && character != ')')
			{
				return false;
			}

			if (alphabet == '{' && character != '}')
			{
				return false;
			}

			if (alphabet == '[' && character != ']')
			{
				return false;
			}
		}
	}

	if (stack.Empty())
	{
		return true;
	}
	else
	{
		return false;
	}

}

int main()
{
	Stack<int> stack;

	/*stack.Push(10);
	stack.Push(20);
	stack.Push(30);
	stack.Push(40);
	stack.Push(50);

	while (stack.Empty() == false)
	{
		cout << stack.Top() << endl;
		stack.Pop();
	}*/


	bool flag = CheckBracket("({[]})");

	cout << "flag 변수의 값 : " << flag << endl;

	return 0;
}
