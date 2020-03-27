#ifndef CPLAYER_H
#define CPLAYER_H
// CPlayer.h
class CPlayer
{
public:
    int map_X;
    int map_Y;
    int map_x;
    int map_y;
    int screen_x;
    int screen_y;
    int scroll_x;
    int scroll_y;
    int add;
    void go_up();
    void go_down();
    void go_left();
    void go_right();
};

#endif
