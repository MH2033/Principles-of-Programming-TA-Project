#define LEN 100
extern int x_p_x,x_p_y,flagx,flagy,game[LEN][LEN];
int moveco(int i,int j) {
    int mx, my,c2;
    if ((mx = i - x_p_x) < 0 && flagx == 0) {
        flagy = 0;
        if(game[x_p_x-1][x_p_y] == 0 || game[x_p_x-1][x_p_y] == 1 || game[x_p_x-1][x_p_y] == 5)
            c2 = 'i';
        else if((my = j - x_p_y) == 0 && (game[x_p_x][x_p_y -1] == 0 ||game[x_p_x][x_p_y -1] == 5 ||game[x_p_x][x_p_y -1] == 1)){
            j--;
        }else if((my = j - x_p_y) <0){
            flagy = 1;
            return 'j';
        }else if((my = j - x_p_y) == 0 && (game[x_p_x][x_p_y +1] == 0 ||game[x_p_x][x_p_y +1] == 5 ||game[x_p_x][x_p_y +1] == 1)){
            j++;
        }else if((my = j - x_p_y) >0){
            flagy = 1;
            return 'l';
        }else{
            flagx = 1;
            return 'k';
        }
    } else if ((mx = i - x_p_x) > 0 && flagx == 0) {
        flagy = 0;
        if(game[x_p_x+1][x_p_y] == 0 || game[x_p_x+1][x_p_y] == 1 || game[x_p_x+1][x_p_y] == 5)
            c2 = 'k';
        else if((my = j - x_p_y) == 0 && (game[x_p_x][x_p_y -1] == 0 ||game[x_p_x][x_p_y -1] == 5 ||game[x_p_x][x_p_y -1] == 1)){
            j--;
        }else if((my = j - x_p_y) <0){
            flagy = 1;
            return 'j';
        }else if((my = j - x_p_y) == 0 && (game[x_p_x][x_p_y + 1] == 0 ||game[x_p_x][x_p_y + 1] == 5 ||game[x_p_x][x_p_y+1] == 1) ){
            j++;
        }
        else if((my = j - x_p_y) >0) {
            flagy = 1;
            return 'l';
        }else{
            flagx = 1;
            return 'i';
        }
    }else if ((my = j - x_p_y) < 0 && flagy == 0){
        flagx = 0;
        if(game[x_p_x][x_p_y-1] == 0 || game[x_p_x][x_p_y-1] == 1 || game[x_p_x][x_p_y-1] == 5)
            c2 ='j';
        else if((mx = i-x_p_x) == 0 && (game[x_p_x-1][x_p_y] == 0 ||game[x_p_x-1][x_p_y] == 5 ||game[x_p_x-1][x_p_y] == 1)){
            i--;
        }else if((mx = i - x_p_x) < 0) {
            flagx = 1;
            return 'i';
        }else if((mx = i-x_p_x) == 0 && (game[x_p_x+1][x_p_y] == 0 ||game[x_p_x+1][x_p_y] == 5 ||game[x_p_x+1][x_p_y] == 1)){
            i++;
        }else if((mx = i - x_p_x) > 0){
            flagx = 1;
            return 'k';
        } else {
            flagy = 1;
            return 'l';
        }
    } else if ((my = j - x_p_y) > 0 && flagy == 0) {
        flagx = 0;
        if(game[x_p_x][x_p_y+1] == 0 || game[x_p_x][x_p_y+1] == 1 || game[x_p_x][x_p_y+1] == 5)
            c2 = 'l';
        else if((mx = i-x_p_x) == 0 && (game[x_p_x-1][x_p_y] == 0 ||game[x_p_x-1][x_p_y] == 5 ||game[x_p_x-1][x_p_y] == 1)){
            i--;
        }else if((mx = i-x_p_x) < 0) {
            flagx = 1;
            return 'i';
        }else if((mx = i-x_p_x) == 0 && (game[x_p_x+1][x_p_y] == 0 ||game[x_p_x+1][x_p_y] == 5 ||game[x_p_x+1][x_p_y] == 1)){
            i++;
        }
        else if((mx = i - x_p_x) >0){
            flagx = 1;
            return 'k';
        }else{
            flagy = 1;
            return 'j';
        }
    }
    if( (i - x_p_x) == 0){
        flagy = 0;
    }
    if((j - x_p_y) == 0){
        flagx = 0;
    }
    return c2;
}