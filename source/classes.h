class CWorld
{
public:
    static const int tile_w = 32;
    static const int tile_h = 32;
    static const int screen_w = 640;
    static const int screen_h = 480;
    static const int screen_W = screen_w / tile_w; //20 (640x480)
    static const int screen_H = screen_h / tile_h; //15 (640x480)
    int map_W;
    int map_H;
};
