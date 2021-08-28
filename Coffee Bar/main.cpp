#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    int number {0};
    std::cin>>number;
    std::vector<std::string> ingredients;
    for (int i =0; i<number;i++)
    {   
        std::string ingredient;
        std::cin>>ingredient;
        ingredients.push_back(ingredient);
    }

    int selection = std::rand()%number;
    std::cout<<ingredients[selection]<<'\n';

    return 0;
}