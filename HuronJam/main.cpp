#include <stdio.h>
#include <iostream>
#include <vector>

int main()
{   
    
    int students{0};
    std::cin>>students;
    if (students%2 != 0) return 0;
    
    std::vector<int> skills;
    for (int i = 0;i<students;i++)
    {
        int skill{0};
        std::cin>>skill;
        skills.push_back(skill);
    }

    int sum = 0;
    int i=0;

    while(i<students)
    {
        sum+= abs(skills[i]-skills[i+1]);
        i++;
        i++;
    }
    std::cout<<sum<<'\n';
    return 0;
}