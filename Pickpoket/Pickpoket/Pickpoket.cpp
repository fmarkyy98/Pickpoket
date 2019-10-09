#include <iostream>

using namespace std;

struct thief
{
	int height;
	string eyeColor;
	string hairColor;
	int downloadedPunishment;
};

int machCount(thief t1, thief t2)
{
	int result = 0;
	if (t1.height == t2.height) { ++result; }
	if (t1.eyeColor == t2.eyeColor) { ++result; }
	if (t1.hairColor == t2.hairColor) { ++result; }
	if (t1.downloadedPunishment == t2.downloadedPunishment) { ++result; }
	return result;
}

thief thiefs[100];
const int MAX_N = 100;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> thiefs[i].height >> thiefs[i].eyeColor >> thiefs[i].hairColor >> thiefs[i].downloadedPunishment;
	}
	int i = 0;
	bool found = false;
	while (i < n && !found)
	{
		int j = i + 1;
		while (j < n && !found)
		{
			if (machCount(thiefs[i], thiefs[j]) > 1)
			{
				found = true;
			}
			++j;
		}
		++i;
	}
	cout <<(found ? "IGEN" : "NEM");
}

