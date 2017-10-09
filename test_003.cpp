#include <iostream>
#include <vector>

using namespace std;

template<typename Iterator1, typename Iterator2>
auto merge(Iterator1 first1, Iterator1 last1, Iterator1 first2, Iterator1 last2, Iterator2 output)
{
	while (true)
	{
		if (first1 == last1)
			return copy(first2, last2, output);

		if (first2 == last2)
			return copy(first1, last1, output);

		*output++ = (*first2<*first1) ? *first2++ : *first1++;
	}
}

int main()
{
	vector<int> v1 = { 13, 31, 313 };
	vector<int> v3 = { 1, 2, 3 };

	vector<int> v2(v1.size() + v3.size());
	vector<int>::iterator first1 = v1.begin(), last1 = v1.end(), first2 = v3.begin(), last2 = v3.end(), output = v2.begin();

	merge<vector<int>::iterator, vector<int>::iterator>(first1, last1, first2, last2, output);

	for (int i = 0; i < v2.size(); ++i)
	{
		cout << v2[i] << " ";
	}

	return 0;
}
