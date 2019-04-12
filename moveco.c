#define LEN 100
extern int x_p_x,x_p_y,flagx_i,flagx_k,flagy_l,flagy_j,game[LEN][LEN];
int moveco(int i,int j) {
    int mx, my,c2;
    if ((mx = i - x_p_x) < 0&& (game[x_p_x-1][x_p_y] == 0 || game[x_p_x-1][x_p_y] == 1 || game[x_p_x-1][x_p_y] == 5)) {
            c2 = 'i';
            flagx_i = 1;
    } else if ((mx = i - x_p_x) > 0 && (game[x_p_x+1][x_p_y] == 0 || game[x_p_x+1][x_p_y] == 1 || game[x_p_x+1][x_p_y] == 5)) {
            c2 = 'k';
    } else if ((my = j - x_p_y) < 0 && (game[x_p_x][x_p_y-1] == 0 || game[x_p_x][x_p_y-1] == 1 || game[x_p_x][x_p_y-1] == 5)){
            c2 ='j';
    } else if ((my = j - x_p_y) > 0 && (game[x_p_x][x_p_y+1] == 0 || game[x_p_x][x_p_y+1] == 1 || game[x_p_x][x_p_y+1] == 5)) {
            c2 = 'l';
    }else if(mx == 0 && (game[x_p_x-1][x_p_y] == 0 || game[x_p_x-1][x_p_y] == 1 || game[x_p_x-1][x_p_y] == 5)){
        return  'i';
    } else if(mx == 0 && (game[x_p_x+1][x_p_y] == 0 || game[x_p_x+1][x_p_y] == 1 || game[x_p_x+1][x_p_y] == 5)){
        return 'k';
    }else if(my == 0 && (game[x_p_x][x_p_y+1] == 0 || game[x_p_x][x_p_y+1] == 1 || game[x_p_x][x_p_y+1] == 5)){
        return 'j';
    }else if(my == 0 && (game[x_p_x][x_p_y-1] == 0 || game[x_p_x][x_p_y-1] == 1 || game[x_p_x][x_p_y-1] == 5)){
        return 'l';
    }
    if((i - x_p_x) == 0){
        flagy_j = 0;
        flagy_l = 0;
    }
    if((j - x_p_y) == 0){
        flagx_i = 0;
        flagx_k = 0;
    }
    return c2;
}