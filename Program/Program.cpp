#include <iostream>

#define SIZE 26

using namespace std;

class Trie
{
private:
	bool final;

	Trie * alphabet[SIZE];
public:
	Trie()
	{
		final = false;

		for (int i = 0; i < SIZE; i++)
		{
			alphabet[i] = nullptr;
		}
	}

	void Insert(const char* content)
	{
		if (*content == '\0')
		{
			final = true;
			return;
		}
		else
		{
			int index = *content - 'A';

			if (alphabet[index] == nullptr)
			{
				alphabet[index] = new Trie();
				alphabet[index]->Insert(content + 1);
			}
		}
	}
};

int main()
{

	return 0;
}
