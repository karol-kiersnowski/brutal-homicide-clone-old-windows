// check_key.h

void check_key ()
{
	if( key[KEY_UP] && key[KEY_RIGHT])
    {
		move = true;
        direction = up_right;
		go_up();
        go_right();
    }
    else if( key[KEY_RIGHT] && key[KEY_DOWN])
    {
		move = true;
		direction = right_down;
        go_right();
        go_down();
    }
    else if( key[KEY_DOWN] && key[KEY_LEFT])
	{
		move = true;
		direction = down_left;
        go_down();
        go_left();
    }
    else if( key[KEY_LEFT] && key[KEY_UP])
    {
		move = true;
		direction = left_up;
        go_left();
        go_up();
    }
    else if (key[KEY_UP] && (collision == false || edge == up_edge || edge == left_edge || edge == right_edge))
	{
		move = true;
		direction = up;
		edge = down_edge;
        go_up();
    }
    else if( key[KEY_RIGHT] && (collision == false || edge == right_edge))
	{
		move = true;
		direction = right;
		edge = left_edge;
        go_right();
    }
    else if( key[KEY_DOWN] && (collision == false || edge == down_edge || edge == left_edge || edge == right_edge))
    {
		move = true;
		direction = down;
		edge = up_edge;
        go_down();
    }
    else if( key[KEY_LEFT] && (collision == false || edge == left_edge))
	{
		move = true;
		direction = left;
		edge = right_edge;
        go_left();
    }
    else if( key[KEY_SPACE] )
	{
		
    }
	else {move = false;}
}
