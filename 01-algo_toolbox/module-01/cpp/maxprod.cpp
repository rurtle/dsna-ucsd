#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * @brief	Utility to calculate the max product
 */
long long prod_max(vector<int> vec)
{
	sort(vec.begin(), vec.end());
	reverse(vec.begin(), vec.end());
	return ((long long)vec[0] * (long long)vec[1]);
}

/**
 * @brief	Driver function
 */
int main(int argc, char *argv[])
{
	vector<int> vec;
	int n = 0;
	int tmp = 0;
	long long prodmax = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		vec.push_back(tmp);
	}

	prodmax = prod_max(vec);

	cout << prodmax << endl;

	return 0;
}
