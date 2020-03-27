// calculate.h
void calculate_coords_and_stuff()
{
	map_x1 = map_x + player_w;
	map_y1 = map_y + player_h;
	map_X = map_x / 32;
    map_Y = map_y / 32;
    map_X1 = map_x1 / 32;
    map_Y1 = map_y1 / 32;

    ammo = (ammo_2x3 * 50);
    grenades = grenade_2x4 + grenade_3x3 + grenade_3x4;
    energy = 50 + (first_aid_3x1 * 25);
    if (energy >= 100) energy = 100;
}
