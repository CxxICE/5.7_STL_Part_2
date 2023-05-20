#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	setlocale(LC_ALL, "RU");
	std::vector<int> v = { 1,1,2,5,6,1,2,4 };

	std::cout << "[IN]:\t";
	for (const auto &el : v)
	{
		std::cout << el << " ";
	}

	std::sort(v.begin(), v.end());
	std::vector<int>::iterator it = std::unique(v.begin(), v.end());
	v.erase(it, v.end());
	
	std::cout << "\n[OUT]:\t";
	for (const auto &el : v)
	{
		std::cout << el << " ";
	}
}
