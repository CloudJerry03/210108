#include <iostream>
#include <math.h>
#define MAX 246914
using namespace std;

int main()
{
	int min;
	bool* a = new bool[MAX]{ false };
	if (a) a[1] = true;

	for (int i = 2; i < MAX / 2; i++)
	{
		if (!a[i])
			for (int j = 2; j * i < MAX; j++)
				a[i * j] = true;
	}

	cin >> min;

	while(min != 0)
	{
		int result = 0;

		for (int i = min; i <= 2*n; i++)
			if (!a[i])
				result++;

		cout << result << endl;
		cin >> min;
	}
}