// draw_player.h

void display_player(BITMAP * & buffer, BITMAP * & player)
{
	if (move == false)
	{
		if (direction == up) {masked_blit( player, buffer, 1,1, screen_x, screen_y, 23, 14);}
        else if (direction == down) {masked_blit( player, buffer, 25,1, screen_x, screen_y, 23, 14);}
        else if (direction == left) {masked_blit( player, buffer, 49,1, screen_x, screen_y, 14, 23);}
        else if (direction == right) {masked_blit( player, buffer, 76,1, screen_x, screen_y, 14, 23);}
	}
	else if (move == true)
    {
		if (direction == up)
		{
			if( frame<20) { masked_blit( player, buffer, 1,1, screen_x, screen_y, 23, 14);}
            else if( frame>=20 && frame<40) { masked_blit( player, buffer, 1,16, screen_x, screen_y, 20, 18);}
            else if( frame>=40 && frame<60) { masked_blit( player, buffer, 1,35, screen_x, screen_y, 20, 24);}
            else if( frame>=60 && frame<80) { masked_blit( player, buffer, 1,60, screen_x, screen_y, 20, 17);}
            else if( frame>=80 && frame<100) { masked_blit( player, buffer, 1,80, screen_x, screen_y, 20, 20);} 
		}
		else if (direction == up_right)
		{
			if( frame<20) { masked_blit( player, buffer, 1,1, screen_x, screen_y, 23, 14);}
            else if( frame>=20 && frame<40) { masked_blit( player, buffer, 1,16, screen_x, screen_y, 20, 18);}
            else if( frame>=40 && frame<60) { masked_blit( player, buffer, 1,35, screen_x, screen_y, 20, 24);}
            else if( frame>=60 && frame<80) { masked_blit( player, buffer, 1,60, screen_x, screen_y, 20, 17);}
            else if( frame>=80 && frame<100) { masked_blit( player, buffer, 1,80, screen_x, screen_y, 20, 20);} 
		}
		else if (direction == right)
		{
			if( frame<20) {masked_blit( player, buffer, 76,1, screen_x, screen_y, 14, 23);}
            else if( frame>=20 && frame<40) {masked_blit( player, buffer, 76,25, screen_x, screen_y, 18, 20);}
        	else if( frame>=40 && frame<60) {masked_blit( player, buffer, 76,46, screen_x, screen_y, 24, 20);}
            else if( frame>=60 && frame<80) {masked_blit( player, buffer, 76,67, screen_x, screen_y, 17, 20);}
            else if( frame>=80 && frame<100) {masked_blit( player, buffer, 76,88, screen_x, screen_y, 26, 20);} 
		}
		else if (direction == right_down)
		{
			if( frame<20) {masked_blit( player, buffer, 76,1, screen_x, screen_y, 14, 23);}
            else if( frame>=20 && frame<40) {masked_blit( player, buffer, 76,25, screen_x, screen_y, 18, 20);}
        	else if( frame>=40 && frame<60) {masked_blit( player, buffer, 76,46, screen_x, screen_y, 24, 20);}
            else if( frame>=60 && frame<80) {masked_blit( player, buffer, 76,67, screen_x, screen_y, 17, 20);}
            else if( frame>=80 && frame<100) {masked_blit( player, buffer, 76,88, screen_x, screen_y, 26, 20);} 
		}
		else if (direction == down)
		{
			if( frame<20) { masked_blit( player, buffer, 25,1, screen_x, screen_y, 23, 14);}
            else if( frame>=20 && frame<40) { masked_blit( player, buffer, 25,16, screen_x, screen_y, 20, 18);}
            else if( frame>=40 && frame<60) { masked_blit( player, buffer, 25,35, screen_x, screen_y, 20, 24);}
            else if( frame>=60 && frame<80) { masked_blit( player, buffer, 25,60, screen_x, screen_y, 20, 17);}
            else if( frame>=80 && frame<100) { masked_blit( player, buffer, 25,80, screen_x, screen_y, 20, 20);} 
		}
		else if (direction == down_left)
		{
			if( frame<20) { masked_blit( player, buffer, 25,1, screen_x, screen_y, 23, 14);}
            else if( frame>=20 && frame<40) { masked_blit( player, buffer, 25,16, screen_x, screen_y, 20, 18);}
            else if( frame>=40 && frame<60) { masked_blit( player, buffer, 25,35, screen_x, screen_y, 20, 24);}
            else if( frame>=60 && frame<80) { masked_blit( player, buffer, 25,60, screen_x, screen_y, 20, 17);}
            else if( frame>=80 && frame<100) { masked_blit( player, buffer, 25,80, screen_x, screen_y, 20, 20);} 
		}
		else if (direction == left)
		{
			if( frame<20) {masked_blit( player, buffer, 49,1, screen_x, screen_y, 14, 23);}
        	else if( frame>=20 && frame<40) {masked_blit( player, buffer, 49,25, screen_x, screen_y, 18, 20);}
            else if( frame>=40 && frame<60) {masked_blit( player, buffer, 49,46, screen_x, screen_y, 24, 20);}
            else if( frame>=60 && frame<80) {masked_blit( player, buffer, 49,67, screen_x, screen_y, 17, 20);}
            else if( frame>=80 && frame<100) {masked_blit( player, buffer, 49,88, screen_x, screen_y, 26, 20);} 
		}
		else if (direction == left_up)
		{
			if( frame<20) {masked_blit( player, buffer, 49,1, screen_x, screen_y, 14, 23);}
        	else if( frame>=20 && frame<40) {masked_blit( player, buffer, 49,25, screen_x, screen_y, 18, 20);}
            else if( frame>=40 && frame<60) {masked_blit( player, buffer, 49,46, screen_x, screen_y, 24, 20);}
            else if( frame>=60 && frame<80) {masked_blit( player, buffer, 49,67, screen_x, screen_y, 17, 20);}
            else if( frame>=80 && frame<100) {masked_blit( player, buffer, 49,88, screen_x, screen_y, 26, 20);} 
		}
	}
}
