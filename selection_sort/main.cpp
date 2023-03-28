#include <iostream>
#include <vector>
#include <algorithm>


void selection_sort(std::vector<int> &vec);

int main()
{
    std::vector<int> vec;
    const size_t len = std::rand() % 100;

    for (size_t i = 0; i < len; i++)
        vec.push_back(std::rand() % 10000);

    std::vector<int> vec_clone = vec;

    selection_sort(vec);
    std::sort(vec_clone.begin(), vec_clone.end());
    
    std::cout << (vec_clone == vec) << std::endl;

    return 0;
}

//--------------------------------------------
void selection_sort(std::vector<int> &vec)
{
    size_t index_max = 0;
    size_t len = vec.size();

    for (size_t i = 0; i < len; i++)
    {
        index_max = 0;

        for (size_t j = 1; j < len - i; j++)
        {
            if (vec[j] > vec[index_max])
                index_max = j;
        }

        std::swap(vec[index_max], vec[len - i - 1]);
    }
}