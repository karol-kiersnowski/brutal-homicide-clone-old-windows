// display.h

////////////////////////////////////////////////////////////////////////////////
// displaying map //////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void display_map(BITMAP * & buffer, BITMAP * & tiles)
{
	for (int y = 0; y < map_H; y++)
    {
		for (int x = 0; x < map_W; x++)
        {
			if (map[y][x] == 0)   {blit (tiles, buffer, 0, 0, (x*tile_w)-(scroll_x), (y*tile_h)-(scroll_y), tile_w, tile_h);}
			if (map[y][x] == 1)   {blit (tiles, buffer, 0, 32, (x*tile_w)-(scroll_x), (y*tile_h)-(scroll_y), tile_w, tile_h);}
			if (map[y][x] == 2)   {blit (tiles, buffer, 32, 32, (x*tile_w)-(scroll_x), (y*tile_h)-(scroll_y), tile_w, tile_h);}
			if (map[y][x] == 3)   {blit (tiles, buffer, 64, 32, (x*tile_w)-(scroll_x), (y*tile_h)-(scroll_y), tile_w, tile_h);}
            if (map[y][x] == 100) {blit (tiles, buffer, 64, 0, (x*tile_w)-(scroll_x), (y*tile_h)-(scroll_y), tile_w, tile_h);}
            if (map[y][x] == 110) {blit (tiles, buffer, 128, 0, (x*tile_w)-(scroll_x), (y*tile_h)-(scroll_y), tile_w, tile_h);}
            if (map[y][x] == 120) {blit (tiles, buffer, 96, 0, (x*tile_w)-(scroll_x), (y*tile_h)-(scroll_y), tile_w, tile_h);}
            if (map[y][x] == 121) {blit (tiles, buffer, 160, 0, (x*tile_w)-(scroll_x), (y*tile_h)-(scroll_y), tile_w, tile_h);}
            if (map[y][x] == 122) {blit (tiles, buffer, 192, 0, (x*tile_w)-(scroll_x), (y*tile_h)-(scroll_y), tile_w, tile_h);}
            if (map[y][x] == 123) {blit (tiles, buffer, 224, 0, (x*tile_w)-(scroll_x), (y*tile_h)-(scroll_y), tile_w, tile_h);}
            if (map[y][x] == 200) {blit (tiles, buffer, 32, 0, (x*tile_w)-(scroll_x), (y*tile_h)-(scroll_y), tile_w, tile_h);}
        }
    }
}

////////////////////////////////////////////////////////////////////////////////
// displaying player ///////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

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

////////////////////////////////////////////////////////////////////////////////
// displaying coords and stuff /////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void display_coords_and_stuff(BITMAP * & buffer)
{
	textprintf_ex(buffer, font, 440,  5, makecol( 255, 255, 128 ), -1, "MAP:    X %d Y %d", map_X, map_Y );
    textprintf_ex(buffer, font, 440, 15, makecol( 255, 255, 128 ), -1, "map:    x %d y %d", map_x, map_y );
    textprintf_ex(buffer, font, 440, 25, makecol( 255, 255, 128 ), -1, "screen: x %d y %d", screen_x, screen_y );
    textprintf_ex(buffer, font, 440, 35, makecol( 255, 255, 128 ), -1, "scroll: x %d y %d", scroll_x, scroll_y );
    textprintf_ex(buffer, font, 440, 45, makecol( 255, 255, 128 ), -1, "frame: %d", frame );
    textprintf_ex(buffer, font, 440, 205, makecol( 255, 255, 128 ), -1, "MAP:    X %d Y %d", map_X1, map_Y1 );
    textprintf_ex(buffer, font, 440, 215, makecol( 255, 255, 128 ), -1, "map:    x %d y %d", map_x1, map_y1 );
    textprintf_ex(buffer, font, 440, 225, makecol( 255, 255, 128 ), -1, "collison: %d", collision );

    if 		(direction == 1) textprintf_ex(buffer, font, 440, 95, makecol( 255, 255, 128 ), -1, "direction: %d (UP)", direction );
    else if (direction == 2) textprintf_ex(buffer, font, 440, 95, makecol( 255, 255, 128 ), -1, "direction: %d (UP-RIGHT)", direction );
    else if (direction == 3) textprintf_ex(buffer, font, 440, 95, makecol( 255, 255, 128 ), -1, "direction: %d (RIGHT)", direction );
    else if (direction == 4) textprintf_ex(buffer, font, 440, 95, makecol( 255, 255, 128 ), -1, "direction: %d (RIGHT-DOWN)", direction );
    else if (direction == 5) textprintf_ex(buffer, font, 440, 95, makecol( 255, 255, 128 ), -1, "direction: %d (DOWN)", direction );
    else if (direction == 6) textprintf_ex(buffer, font, 440, 95, makecol( 255, 255, 128 ), -1, "direction: %d (DOWN-LEFT)", direction );
    else if (direction == 7) textprintf_ex(buffer, font, 440, 95, makecol( 255, 255, 128 ), -1, "direction: %d (LEFT)", direction );
    else if (direction == 8) textprintf_ex(buffer, font, 440, 95, makecol( 255, 255, 128 ), -1, "direction: %d (LEFT-UP)", direction );
	if 		(edge == 1) textprintf_ex(buffer, font, 440, 105, makecol( 255, 255, 128 ), -1, "edge of wall %d (UP)", edge );
    else if (edge == 3) textprintf_ex(buffer, font, 440, 105, makecol( 255, 255, 128 ), -1, "edge of wall %d (RIGHT)", edge );
    else if (edge == 5) textprintf_ex(buffer, font, 440, 105, makecol( 255, 255, 128 ), -1, "edge of wall %d (DOWN)", edge );
    else if (edge == 7) textprintf_ex(buffer, font, 440, 105, makecol( 255, 255, 128 ), -1, "edge of wall %d (LEFT)", edge );

    textprintf_ex(buffer, font, 440, 115, makecol( 255, 255, 128 ), -1, "map[1][5]: %d", map[1][5] );
    textprintf_ex(buffer, font, 5, 440, makecol( 255, 255, 128 ), -1, "ammo: %d", ammo );
    textprintf_ex(buffer, font, 5, 450, makecol( 255, 255, 128 ), -1, "grenades: %d", grenades );
    textprintf_ex(buffer, font, 5, 460, makecol( 255, 255, 128 ), -1, "energy: %d", energy );
}
