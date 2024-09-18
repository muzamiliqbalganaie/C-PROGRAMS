#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursoPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

}
 int main()
{
    gotoxy (30,6);
    printf("MUZAMIL_IQBAL_GANAIE");
    getch();
}
