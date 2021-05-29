#include <stdbool.h>

bool checkStraightLine(int **coordinates, int coordinatesSize, int* coordinatesColSize)
{
    int i = 1;
    int diferent[] = {(coordinates[1][0] - coordinates[0][0])  , (coordinates[1][1] - coordinates[0][1])};

    while (i != coordinatesSize) {
        if (((coordinates[i][0] - coordinates[i - 1][0])) != diferent[0])
            return (false);
        if ((coordinates[i][1] - coordinates[i][1]) != diferent[1])
            return (false);
        i++;
    }
    return (true);
}	