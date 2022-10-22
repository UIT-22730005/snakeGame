#include <iostream>

using namespace std;

struct Point{
    int x,y;
};

void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }

int main()
{
   

    return 0;
}

