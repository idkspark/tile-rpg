#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 9;
const int COLUMNS = 9;
void generateWorld(int world[ROWS][COLUMNS]);
void renderWorld(int world[ROWS][COLUMNS]);

int main()
{
    int world[ROWS][COLUMNS];
    generateWorld(world);
    renderWorld(world);
    return 0;
}

void generateWorld(int world[ROWS][COLUMNS])
{
    srand(static_cast<unsigned int>(time(0)));

    int randomNumber, unit;

    for (int i = 0; i < ROWS; ++i)
    {

        for (int j = 0; j < COLUMNS; ++j)
        {
            randomNumber = rand();
            unit = (randomNumber % 6);
            world[i][j] = unit;
        }
    }
}

void renderWorld(int world[ROWS][COLUMNS])
{

    for (int i = 0; i < ROWS; ++i)
    {

        for (int j = 0; j < COLUMNS; ++j)
        {
            cout << world[i][j] << " ";
        }
    }
}
