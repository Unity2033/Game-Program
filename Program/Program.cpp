#include <iostream>

using namespace std;

class Vector2
{
public:
	int x;
	int y;

	Vector2(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	Vector2 operator+(const Vector2 & vector2)
	{
		Vector2 other
		(
			this->x + vector2.x,
			this->y + vector2.y
		);

		return other;
	}

	Vector2 operator-(const Vector2& vector2)
	{
		Vector2 other
		(
			this->x - vector2.x,
			this->y - vector2.y
		);

		return other;
	}

	Vector2 operator*(const Vector2& vector2)
	{
		Vector2 other
		(
			this->x * vector2.x,
			this->y * vector2.y
		);

		return other;
	}

	Vector2 operator*(int value)
	{
		Vector2 other
		(
			this->x * value,
			this->y * value
		);

		return other;
	}

	Vector2 operator/(const Vector2& vector2)
	{
		Vector2 other
		(
			this->x / vector2.x,
			this->y / vector2.y
		);

		return other;
	}
};

Vector2 operator*(int value, Vector2 vector2)
{
	return vector2 * value;
}

int main()
{
	Vector2 vector1(10,20);
	Vector2 vector2(5, 5);

	Vector2 vector3 = vector1 / vector2;

	cout << "vector3의 x 값 : " << vector3.x << endl;
	cout << "vector3의 y 값 : " << vector3.y << endl;

	vector3 = vector1 * 5;

	cout << "vector3의 x 값 : " << vector3.x << endl;
	cout << "vector3의 y 값 : " << vector3.y << endl;

	vector3 = 10 * vector1 ;

	cout << "vector3의 x 값 : " << vector3.x << endl;
	cout << "vector3의 y 값 : " << vector3.y << endl;

	return 0;
}
