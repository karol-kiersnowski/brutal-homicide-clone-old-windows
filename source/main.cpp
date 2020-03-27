#include <allegro.h>
#include "global_variables.h"
#include "classes.h"
#include "CPlayer.h"
#include "map.h"
#include "functions.h"
#include "calculate.h"
#include "go.h"
#include "check.h"
#include "display.h"
#include "game.h"

int main(int argc, char *argv[])
{
    // INIT /////////////////////////////////////
    allegro_init();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,screen_w,screen_h,0,0); //_WINDOWED
    install_keyboard();
    install_timer();
    install_int_ex(increment_speed, BPS_TO_TIMER(fps));
    //CPlayer a;
    // GAME /////////////////////////////////////
    game();

    // DE INIT //////////////////////////////////
    allegro_exit();
    return 0;
}
END_OF_MAIN();
