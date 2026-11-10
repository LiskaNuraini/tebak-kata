#include <ncurses.h>

int main() {

    initscr();

    printw("hallo");

    refresh();

    getch();

    endwin();
    
    return 0;
}