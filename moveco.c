#define LEN 100
extern int x_p_x,x_p_y,flagx_i,flagx_k,flagy_l,flagy_j,game[LEN][LEN];
int moveco(int i,int j) {
    int mx, my,c2;
    if ((mx = i - x_p_x) < 0&&flagx_i ==0 && (game[x_p_x-1][x_p_y] == 0 || game[x_p_x-1][x_p_y] == 1 || game[x_p_x-1][x_p_y] == 5)) {
        c2 = 'i';
        flagx_k = 1;
        flagy_j = 0;
        flagy_l = 0;
    } else if ((mx = i - x_p_x) > 0&& flagx_k == 0 && (game[x_p_x+1][x_p_y] == 0 || game[x_p_x+1][x_p_y] == 1 || game[x_p_x+1][x_p_y] == 5)) {
        c2 = 'k';
        flagx_i = 1;
        flagy_j = 0;
        flagy_l = 0;
    } else if ((my = j - x_p_y) < 0&& flagy_j == 0 && (game[x_p_x][x_p_y-1] == 0 || game[x_p_x][x_p_y-1] == 1 || game[x_p_x][x_p_y-1] == 5)){
        c2 ='j';
        flagx_i = 0;
        flagx_k = 0;
        flagy_l = 1;
    } else if ((my = j - x_p_y) > 0&& flagy_l ==0 && (game[x_p_x][x_p_y+1] == 0 || game[x_p_x][x_p_y+1] == 1 || game[x_p_x][x_p_y+1] == 5)) {
        c2 = 'l';
        flagx_i = 0;
        flagx_k = 0;
        flagy_j = 1;
    } else if(mx == 0&& flagx_i ==0 && (game[x_p_x-1][x_p_y] == 0 || game[x_p_x-1][x_p_y] == 1 || game[x_p_x-1][x_p_y] == 5)){
        flagx_k = 1;
        flagy_j = 0;
        flagy_l = 0;
        c2 ='i';
    } else if(mx == 0&& flagx_k ==0 && (game[x_p_x+1][x_p_y] == 0 || game[x_p_x+1][x_p_y] == 1 || game[x_p_x+1][x_p_y] == 5)){
        flagx_i = 1;
        flagy_j = 0;
        flagy_l = 0;
        c2 ='k';
    } else if(my == 0&& flagy_l ==0 && (game[x_p_x][x_p_y+1] == 0 || game[x_p_x][x_p_y+1] == 1 || game[x_p_x][x_p_y+1] == 5)){
        flagy_j = 1;
        flagx_i = 0;
        flagx_k = 0;
        c2 ='l';
    } else if(my == 0&& flagy_j ==0 && (game[x_p_x][x_p_y-1] == 0 || game[x_p_x][x_p_y-1] == 1 || game[x_p_x][x_p_y-1] == 5)){
        flagy_l = 1;
        flagx_i = 0;
        flagx_k = 0;
        c2 ='j';
    }else if(game[x_p_x][x_p_y-1] == 0 || game[x_p_x][x_p_y-1] == 1 || game[x_p_x][x_p_y-1] == 5){
        c2 = 'j';
        flagy_j = 0;
        flagy_l = 1;
        flagx_i = 0;
        flagx_k = 0;
    }else if(game[x_p_x][x_p_y+1] == 0 || game[x_p_x][x_p_y+1] == 1 || game[x_p_x][x_p_y+1] == 5){
        c2 = 'l';
        flagy_j = 1;
        flagx_i = 0;
        flagx_k = 0;
        flagy_l = 0;
    }else if(game[x_p_x+1][x_p_y] == 0 || game[x_p_x+1][x_p_y] == 1 || game[x_p_x+1][x_p_y] == 5){
        flagx_i = 1;
        flagy_j = 0;
        flagy_l = 0;
        flagx_k = 0;
        c2 = 'k';
    }else if(game[x_p_x-1][x_p_y] == 0 || game[x_p_x-1][x_p_y] == 1 || game[x_p_x-1][x_p_y] == 5){
        flagx_i = 1;
        flagy_j = 0;
        flagy_l = 0;
        flagx_i = 0;
        c2 = 'k';
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