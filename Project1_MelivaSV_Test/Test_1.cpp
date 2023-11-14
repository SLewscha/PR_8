#include <iostream>
using namespace std;

int main()
{
	int num = 1;
	for (int i = 0; i < 20; ++i)
	{
		if (num % 2 == 0)
		{
			cout << num << " is even" << endl;
		}
		else
		{
			cout << num << " is odd" << endl;
		}
		num++;
	}
	return 0;
}