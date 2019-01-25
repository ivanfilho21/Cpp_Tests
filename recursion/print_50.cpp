#include <iostream>

using namespace std;

void print();
void print_aux(int n);

void print()
{
	print_aux(1);
}

void print_aux(int n)
{
	if (n != 51)
	{
		cout << n << " ";
		print_aux(n+1);
	}
	else return;
}

int main()
{
	cout << "The natural numbers are: ";
	print();
	return 0;
}