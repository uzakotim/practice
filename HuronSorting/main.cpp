#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    int n;
    std::cin>>n;
    std::vector<int> permutation_init, permutation;
    for (int i=0;i<n;i++)
    {
        int value;
        std::cin>>value;
        permutation_init.push_back(value);
    }

    int count = 0;
    for (int x=0;x<n;x++)
    {
        permutation = permutation_init;
        permutation.erase(permutation.begin()+x);
        
        std::sort(permutation.begin(),permutation.end());
        permutation.insert(permutation.begin()+x, permutation_init[x]);
        
        count++;
        for (int i =0;i<n-1;i++)
        {
            if(permutation[i]>permutation[i+1])
            {
                count--;
                break;
            }
        }
    }
    std::cout<<count<<'\n';

    return 0;
}