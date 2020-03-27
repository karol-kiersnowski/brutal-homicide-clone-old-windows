#include "CPlayer.h"
#include "CWorld.h"
void CPlayer::go_up()
{
		map_y = map_y - add;
    	if (map_y <= (screen_h/2)-1) screen_y = screen_y - add;
    	else if (map_y >= (map_h-screen_h/2)-1) screen_y = screen_y - add;
    	else scroll_y = scroll_y - add;
}
void CPlayer::go_down()
{
		map_y = map_y + add;
    	if (map_y <= (screen_h/2)) screen_y = screen_y + add;
    	else if (map_y >= (map_h - screen_h / 2)) screen_y = screen_y + add;
    	else scroll_y = scroll_y + add;
}
void CPlayer::go_left()
{
		map_x = map_x - add;
    	if (map_x <= (screen_w/2)-1) screen_x = screen_x - add;
    	else if (map_x >= (map_w-screen_w/2)-1) screen_x = screen_x - add;
    	else scroll_x = scroll_x - add;
}
void CPlayer::go_right()
{
		map_x = map_x + add;
    	if (map_x <= (screen_w/2)) screen_x = screen_x + add;
    	else if (map_x >= (map_w - screen_w / 2)) screen_x = screen_x + add;
    	else scroll_x = scroll_x + add;
}
