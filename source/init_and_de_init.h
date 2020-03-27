// init_and_de_init.h

void init()
{
    allegro_init();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,screen_w,screen_h,0,0); //_WINDOWED
    install_keyboard();
    install_timer();
    install_int_ex(increment_speed, BPS_TO_TIMER(fps));  
}

void de_init()
{
    allegro_exit();
}
