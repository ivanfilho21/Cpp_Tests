#include <iostream>

using namespace std;

void print(int array[], int size, int i);
void print_reverse(int array[], int size);

void print(int array[], int size, int i)
{
	if (i == size) return;
	
	cout << array[i] << " ";
	print(array, size, i+1);
}

void print_reverse(int array[], int size)
{	
	if (size > 0)
	{
		size--;
		cout << array[size] << " ";
		print_reverse(array, size);
	}
	else
		return;
}

int main()
{
	int array[6];
	for (int i = 0; i < 6; i++)
		array[i] = (i + 1)	* 2;
	
	cout << "Array elements: ";
	print(array, 6, 0);
	cout << endl;
	cout << "Array elements (reversed): ";
	print_reverse(array, 6);
	
	return 0;
}