
#include <iostream>

#include<vector>
#include<algorithm>

template<class T>
class Sort {
public:
    Sort(T &arr) {
        std::sort(arr.begin(), arr.end());
        auto it = std::unique(arr.begin(), arr.end());
        arr.erase(it, arr.end());
    }

};


int main()
{
    std::vector<int> arr{ 1, 4, 5, 7, 4, 44, 3, 1, 1, 55, 5 , 9 };
    for (const auto& it : arr) {
        std::cout << it << " " ;
    }
    std::cout << std::endl;
    Sort <std::vector<int>> sor(arr);
    
    for (const auto& it : arr) {
        std::cout << it << " ";
    }
    
}
