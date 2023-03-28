#include <iostream>
#include <vector>
#include <algorithm>


void bubble_sort(std::vector<int> &vec);

int main()
{
    std::vector<int> vec;
    const size_t len = std::rand() % 100;

    for (size_t i = 0; i < len; i++)
        vec.push_back(std::rand() % 10000);

    std::vector<int> vec_clone = vec;

    bubble_sort(vec);
    std::sort(vec_clone.begin(), vec_clone.end());
    
    std::cout << (vec_clone == vec) << std::endl;

    return 0;
}

//--------------------------------------------
void bubble_sort(std::vector<int> &vec)
{
    size_t len = vec.size();

    for (size_t i = 1; i < len; i++)
    {
        for (size_t j = 0; j < len - i; j++)
        {
            if (vec[j] > vec[j + 1])
                std::swap(vec[j], vec[j + 1]);
        }
    }
}