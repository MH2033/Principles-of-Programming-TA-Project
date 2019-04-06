void game_map_making(char game_map [][100],int x,int y){
    int i,j;
    for (i = 0; i < x; i++) {
        for (j = 0; j < y;j++) {
            if(i ==0 || j == 0 || i== x-1 || j == y-1){
                game_map[i][j] = '!';
            } else {
                game_map[i][j] = ' ';
            }
        }
    }
}