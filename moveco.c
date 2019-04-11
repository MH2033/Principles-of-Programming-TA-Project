#define LEN 100
extern int x_p_x,x_p_y,game[LEN][LEN];
int moveco(int i,int j) {
    int mx, my,c2;
    if ((mx = i - x_p_x) < 0) {
        if(game[x_p_x-1][x_p_y] == 0 || game[x_p_x-1][x_p_y] == 1 || game[x_p_x-1][x_p_y] == 5)
            c2 = 'i';
    } else if ((mx = i - x_p_x) > 0) {
        if(game[x_p_x+1][x_p_y] == 0 || game[x_p_x+1][x_p_y] == 1 || game[x_p_x+1][x_p_y] == 5)
                c2 = 'k';
    }
    if ((my = j - x_p_y) < 0) {
        if(game[x_p_x][x_p_y-1] == 0 || game[x_p_x][x_p_y-1] == 1 || game[x_p_x][x_p_y-1] == 5)
            c2 ='j';
    } else if ((my = j - x_p_y) > 0) {
        if(game[x_p_x][x_p_y+1] == 0 || game[x_p_x][x_p_y+1] == 1 || game[x_p_x][x_p_y+1] == 5)
            c2 = 'l';
    }
    return c2;
}