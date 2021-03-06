// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int num1 = 6666;
int num2 = 420;
int nums[5] = { 1, 2, 3, 4, 5 };
const char* foo = "hello";

//base class
class Shape {
public:
	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
	void setDepth(int d)
	{
		depth = d;
	}
protected:
	int width;
	int height;
	int depth;
};

//derived class
class Rectangle : public Shape {
public:
	int getArea()
	{
		return (width * height);
	}
};

//derived class
class Cube : public Shape {
public:
	int getVolume()
	{
		return (width * height * depth);
	}
};

//derived class
class Box : public Shape {
public:
	Box()
	{
		using namespace std;
		cout << "Constructor called!" << endl;
	}
	~Box()
	{
		using namespace std;
		cout << "Destructor called!" << endl;
	}
};

char * reverse(const char* str)
{
	using namespace std;
	int length = strlen(str);

	char * reversed_string = new char[length + 1];

	for (int i = length; i --> 0;)
	{
		reversed_string += str[i];

		cout << reversed_string << endl;
	}

	reversed_string[length] - '\0';
	return reversed_string;
}

int main()
{
	using namespace std;

	Box* myBoxArray = new Box[4];
	delete[] myBoxArray;

	Rectangle rect;
	rect.setWidth(5);
	rect.setHeight(7);
	cout << "Total area: " << rect.getArea() << endl;

	Rectangle* rectPointer;
	rectPointer = new Rectangle;
	rectPointer->setWidth(3);
	rectPointer->setHeight(9);
	cout << "Total area: " << rectPointer->getArea() << endl;

	Cube cube;
	cube.setWidth(6);
	cube.setHeight(9);
	cube.setDepth(4);
	cout << "Total volume: " << cube.getVolume() << endl;

	const char* newString = "text to be reversed";
	cout << newString << endl;
	cout << reverse(newString) << endl;

	cout << num1 << endl;
	cout << num2 << endl;
	cout << &num1 << endl;
	cout << &num2 << endl;
	cout << &num1 + 1 << endl;
	cout << *(&num1 + 1) << endl;

	*(nums + 2) = 400;
	cout << nums << endl;
	cout << *nums << endl;
	cout << *(nums + 1) << endl;
	cout << *(nums + 2) << endl;

	cout << *(foo + 4) << endl;
	cout << foo[4] << endl;

	return 0;
}
