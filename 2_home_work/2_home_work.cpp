

#include <iostream>
#include <set>
#include <list>
#include <vector>
template<class T>
std::vector<T> print_container(std::vector<T> arr) {
	std::cout << "This is vector: ";
	auto prev_end = std::prev(arr.end());
	for ( auto it = arr.begin(); it < prev_end; ++it) {
		std::cout << *it << ", ";
	}
	std::cout << *prev_end;
	std::cout << std::endl;
	return arr;
}
template<class T>
std::list<T> print_container(std::list<T> arr) {
	std::cout << "This is list: ";
	auto prev_end = std::prev(arr.end());
	for (auto it = arr.begin(); it != prev_end; std::advance(it, 1)) {
		std::cout << *it << ", ";
	}
	std::cout << *prev_end;

	std::cout << std::endl;
	return arr;
}
template<class T>
std::set<T> print_container(std::set<T> arr) {
	std::cout << "This is set: ";
	auto prev_end = std::prev(arr.end());
	for (auto it = arr.begin(); it != prev_end; std::advance(it, 1)) {
		std::cout << *it << ", ";
	}
	std::cout << *prev_end;
	std::cout << std::endl;
	return arr;
}

int main()
{

	std::set<std::string> test_set = { "one", "two", "three", "four" };
	print_container(test_set); // four one three two. помните почему такой порядок? :)

	std::list<std::string> test_list = { "one", "two", "three", "four" };
	print_container(test_list); // one, two, three, four

	std::vector<std::string> test_vector = { "one", "two", "three", "four" };
	print_container(test_vector); // one, two, three, four
}

