// #include <iostream>
// using namespace std;
#include <cstdio>

int main()
{
	// ios_base::sync_with_stdio(0);
	// cin.tie(0);

	int min, max;

	scanf("%d %d", &min, &max);
	// cin >> min >> max;

	bool* result = new bool[max + 1]{false};

	result[1] = true;

	for (int i = 2; i <= max/2; i++)
	{
		if (!result[i])
			for (int j = 2; j * i <= max; j++)
				result[i * j] = true;
	}

	for (int i = min; i <= max; i++)
		if (!result[i])
			printf("%d\n", i);
			//cout << i << endl;
}