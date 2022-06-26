#include <iostream>
#include <vector>
#include "swap.hpp"
int main()
{
    int t;
    std::cin >> t;
    std::vector<std::vector<int> > arrays(t, std::vector<int>());
    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;
        arrays[i].resize(n);
        int cnt = 0;
        for (int j = 0; j < arrays[i].size(); j++)
            std::cin >> arrays[i][j];
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n - j - 1; k++) {
                if (arrays[i][k] > arrays[i][k + 1]) {
                    swap(arrays[i][k], arrays[i][k + 1]);
                    cnt++;
                }
            }
        }
        for (int j = 0; j < arrays[i].size(); j++){
            std::cout << arrays[i][j];
            if(j != arrays[i].size() - 1)
                std::cout << " ";
        }
        std::cout << "\n" << cnt << "\n";
    }
}