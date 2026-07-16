#define MAXROW 20
#define MAXCOL 60

typedef enum state { DEAD, ALIVE } State;
typedef State Grid[MAXROW + 2][MAXCOL + 2];

// copy updated grid (newmap) into map
void copyMap(Grid map, Grid newmap);

// will ask the user if they want to go to the next generation
bool userSaysYes(void);

// initialize the grid and input initial configuration
void init(Grid map);

// counts the number of occuped cells adjacent to row, col
int neighborCount(Grid map, int row, int col);

// outputs the map to the terminal
void writeMap(Grid map);
