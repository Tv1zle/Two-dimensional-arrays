
#include <iostream>


int main()
{
    //Task 1
    const int raw = 5, coll = 4;
    int arr[raw][coll];
    srand(time(0));


    for (int y = 0; y < raw; y++)
    {
        for (int x = 0; x < coll; x++)
        {
            arr[y][x] = rand() % 99;
        }
    }


    std::cout << " ________________________\n";
    for (int y = 0; y < raw; y++)
    {
        for (int x = 0; x < coll; x++)
        {
            std::cout.width(3);
            if (x == 0)
            {
                std::cout << "| " << arr[x][y] << " | ";
            }
            else
            {
                std::cout << arr[x][y] << " | ";
            }
        }
        std::cout << "\n";
        std::cout << " |______________________|";
        std::cout << "\n";
    }
    std::cout << "\n\n";



    //Task 2
    const int ra = 5, col = 5;
    int count = col, anothercount = 0;
    char starsarr[ra][col], better;


    for (int y = 0; y < ra; y++)
    {
        for (int x = 0; x < col; x++)
        {
            starsarr[y][x] = '*';
        }
    }


    for (int y = 0; y < ra; y++)
    {
        for (int x = 0; x < count; x++)
        {
            better = starsarr[y][x];
            std::cout << better;
        }
        std::cout << "      ";


        for (int i = 0; i < anothercount; i++)
        {
            std::cout << "  ";
        }


        for (int j = 0; j < count; j++)
        {
            std::cout << better;
        }
        anothercount++;


        std::cout << "\n";
        count--;
    }


}