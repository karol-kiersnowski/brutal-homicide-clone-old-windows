// functions.h

void init();
void de_init();
void game();
void go_up();
void go_down();
void go_left();
void go_right();
void calculate_coords_and_stuff();
void check_key();
void check_stuff();
void check_gates();
void check_collision();
void display_map(BITMAP * & bg, BITMAP * & tiles);
void display_coords_and_stuff(BITMAP * & buffer);
void display_player(BITMAP * & buffer, BITMAP * & player);


void increment_speed() { speed++; }
END_OF_FUNCTION(increment_speed);
LOCK_VARIABLE(speed);
LOCK_FUNCTION(increment_speed);
