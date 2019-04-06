void game_map_making(char game_map [][100],int x,int y){
    int i,j;
    for (i = 0; i < x; i++) {
        for (j = 0; j < y;j++) {
            game_map[i][j] = ' ';
        }
    }
    game_map[i+1][j+1] = '\0';
}