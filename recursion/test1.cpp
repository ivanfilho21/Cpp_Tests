#include <iostream>
using namespace std;

int sum(int n);

int main()
{
	int n = 5;
	cout << sum(n);
}

int sum(int n)
{
	// base case (ending point)
	if (n == 1)
		return n;
	else
		return n + sum(n-1);
}