#include <iostream>
#include <vector>
#include <algorithm>


void insertion_sort(std::vector<int> &vec);

int main()
{
    std::vector<int> vec;
    const size_t len = std::rand() % 100;

    for (size_t i = 0; i < len; i++)
        vec.push_back(std::rand() % 10000);

    std::vector<int> vec_clone = vec;

    insertion_sort(vec);
    std::sort(vec_clone.begin(), vec_clone.end());
    
    std::cout << (vec_clone == vec) << std::endl;

    return 0;
}

//--------------------------------------------
void insertion_sort(std::vector<int> &vec)
{
    size_t len = vec.size();
    size_t j = 0;
    int current = 0;

    for (size_t i = 1; i < len; i++)
    {
        current = vec[i];
        j = i;

        while (j && vec[j - 1] > current)
        {
            vec[j] = vec[j - 1];
            j--;
        }

        vec[j] = current;
    }
}