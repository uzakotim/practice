#include <iostream>
#include <stdio.h>

int main()
{

    int number_of_friends{0}, number_of_photos{0}, number_of_pairs{0};
    
    scanf("%d %d %d", &number_of_friends,&number_of_photos,&number_of_pairs);
    
    int lists[number_of_photos][number_of_friends] = {{0}};
    int ranges[number_of_photos][2];

    for (int i = 0;i<number_of_photos;i++)
    {
        scanf("%d %d", &ranges[i][0],&ranges[i][1]);
    }

    int pairs[number_of_pairs][number_of_friends] = {{0}};
    for (int i=0;i<number_of_pairs;i++)
    {   
        scanf("%d %d", &pairs[i][0],&pairs[i][1]);
    }

    for (int i=0;i<number_of_photos;i++)
    {
        int length = ranges[i][1] - ranges[i][0] + 1;
        for (int j=0;j<length;j++)
        {
            lists[i][j] = ranges[i][0]+j;
        }
    }

    for (int i =0;i<number_of_pairs;i++)
    {
    bool found = false;
       for (int list=0;list<number_of_photos;list++)
       {
           int counter {0};
           for( int k=0;k<number_of_friends;k++)
           {
               if (pairs[i][0] == lists[list][k]) counter++;
               if (pairs[i][1] == lists[list][k]) counter++;
           }
           if (counter == 2) {found = true; std::cout<<"Yes\n"; break;}
       }
       if (found == false) {std::cout<<"No\n";}
    }
    return 0;
}