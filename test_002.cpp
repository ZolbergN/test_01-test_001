#include <iostream>

template <typename Iterator, typename T>
auto find_two_elements_with_sum(Iterator first, Iterator last, T c) -> std::pair<bool, std::pair<Iterator, Iterator>> {
	for (; first != last; ++first) {
		if ((first + (++first)) == c) {
			return (true, (first, ++first));
		}
		--first;
	}
};

int main() {
	return 0;
}
