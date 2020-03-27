// game.h

void game()
{
    BITMAP *buffer = create_bitmap (map_w, map_h);
    BITMAP *bg = create_bitmap (map_w, map_h);
    BITMAP *tiles = load_bmp ("../graphics/tiles.bmp", default_palette);
    BITMAP *player = load_bmp ("../graphics/player.bmp", default_palette);

    while (!key[KEY_ESC])
    {
        while(speed > 0)
        {
			speed--;
            frame++;
            if (frame > 100) frame = 0;
		}
		calculate_coords_and_stuff();
        check_stuff();
        check_gates();
    	check_collision();
    	check_key();
        display_map (buffer, tiles);
        display_player(buffer, player);
        display_coords_and_stuff(buffer);
        blit(buffer, screen, 0,0,0,0, map_w,map_h);
        //rest(1);
    }
    remove_int( increment_speed);
    destroy_bitmap(buffer);
    destroy_bitmap(bg);
    destroy_bitmap(tiles);
    destroy_bitmap(player);
}
