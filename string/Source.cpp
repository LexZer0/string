#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using namespace std;

const int MAX_N = 100;

int main()
{
	int k = 0, i = 0, p = 0;
	bool flag(true);
	char a[MAX_N];
	char b[MAX_N];
	cin.getline(a, MAX_N);
	cout << a << endl;
	while (a[k] != '\0')
	{
		k++;
		if (isspace(a[k]))
		{
			k--;
		}
	}
	//cout << strlen(a) << endl;
	cout << k << endl;

	for (i = strlen(a) - 1; i >= 0; i--)
	{
		if (a[p] != a[i])
		{
			flag = false;
		}
		p++;
	}
	if (flag == false)
	{
		cout << "not";
	}
	else
	{
		cout << "polim";
	}

	cout << endl;
	int n = 0;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z')
		{
			b[n] = a[i];
			n++;
		}
	}
	cout << b;
	return 0;
}