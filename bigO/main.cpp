#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


// O(c * n) ~ O(n)
int search(vector<int> vec, int x)
{
    for (size_t i = 0; i < vec.size(); i++)
    {
        if (vec[i] == x)
            return i;
    }

    return -1;
}

// O(3) ~ O(1)
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

// O(2 * 4) ~ O(1)
void cycle_1()
{
    size_t c = 4;

    for (size_t i = 0; i < c; i++)
    {
        i++;
        cout << i;
    }
}

// O(2 * n) ~ O(n)
void cycle_n(size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        i++;
        cout << i;
    }
}

// O(n + m) ~ O(max(n,m))
void cycle_nm1(size_t n, size_t m)
{
    for (size_t i = 0; i < n; i++)
    {
        i++;
        cout << i;
    }

    for (size_t i = 0; i < m; i++)
    {
        i++;
        cout << i;
    }
}

// O(n * m * 2) ~ O(n * m)
void cycle_nm2(size_t n, size_t m)
{
    for (size_t i = 0; i < n; i++)
        for (size_t j = 0; j < m; j++)
        {
            i++;
            cout << i << j;
        }
}

// O(n * n * 2) ~ O(n^2)
void cycle_n2(size_t n)
{
    for (size_t i = 0; i < n; i++)
        for (size_t j = 0; j < n; j++)
        {
            i++;
            cout << i;
        }
}

// O(n * n * n * 2) ~ O(n^3)
void cycle_n3(size_t n)
{
    for (size_t i = 0; i < n; i++)
        for (size_t k = 0; k < n; k++)
            for (size_t j = 0; j < n; j++)
            {
                i++;
                cout << i;
            }
}

// n + (n -1) + (n -2) +...+ 1 = n*(n + 1)/2  O(n * (n + 1) / 2) ~ O(n^2)
void cycle_ij(size_t n)
{
    for (size_t i = 0; i < n; i++)
        for (size_t j = i; j < n; j++)
        {
            i++;
            cout << i;
        }
}

// O(n^3 + n^2 + n) ~ O(n^3)
void cycle_123(size_t n)
{
    for (size_t i = 0; i < n; i++)
        for (size_t k = 0; k < n; k++)
            for (size_t j = 0; j < n; j++)
                cout << j;

    for (size_t i = 0; i < n; i++)
        for (size_t k = 0; k < n; k++)
            cout << k;

    for (size_t i = 0; i < n; i++)
        cout << i;
}

// O(a^3 + b^2 + c)
void cycle_abc123(size_t a, size_t b, size_t c)
{
    for (size_t i = 0; i < a; i++)
        for (size_t k = 0; k < a; k++)
            for (size_t j = 0; j < a; j++)
                cout << j;

    for (size_t i = 0; i < b; i++)
        for (size_t k = 0; k < b; k++)
            cout << k;

    for (size_t i = 0; i < c; i++)
        cout << i;
}

// O(log10(n)) ~ O(log(n))
int cycle_log1(int n)
{
    int sum = 0;

    while (n)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

// O(n * log10(n)) ~ O(n * log(n))
int cycle_log2(int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int a = i;

        while (n)
        {
            sum += n % 10;
            n /= 10;
        }
    }

    return sum;
}

// O(sqrt(n))
void cycie_sqrt1(int n)
{
    for (int i = 0; i < sqrt(n); i++)
        cout << i;
}

// O(sqrt(n))
void cycie_sqrt2(int n)
{
    for (int i = 0; i * i < n; i++)
        cout << i;
}

// O(n / 3) ~ O(n)
void cycie_n_plus_3(int n)
{
    for (int i = 0; i < n; i += 3)
        cout << i;
}

int main()
{
    return 0;
}


