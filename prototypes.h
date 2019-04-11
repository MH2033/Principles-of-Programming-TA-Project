//
// Created by MH on 3/17/2019.
//

#ifndef P_O_P_G_PROJECT_PROTOTYPES_H
#define P_O_P_G_PROJECT_PROTOTYPES_H
#define LEN 100
void read_from_file(char file_data[], char file_name[]);
void load_config(const char config[]);
void delay(int x);
int  welcome_screen(void);
void hidecursor(void);
void game_map_making(void);
void rand1(int n,int l);//baray aval bazi k bayad rand ziadi bgirim
void mode_1(void);
void mode_2(void);
int  FindPath(int);
void print_map(void);
void move_up(int x_p_x ,int x_p_y,int l,int score[],int i);
void move_down(int x_p_x ,int x_p_y,int l,int score[],int i);
void move_right(int x_p_x ,int x_p_y,int l,int score[],int i);
void move_left(int x_p_x ,int x_p_y,int l,int score[],int i);
void move(int move_o,int move_x);
void win(void);
int moveco(int i,int j);

#endif //P_O_P_G_PROJECT_PROTOTYPES_H
