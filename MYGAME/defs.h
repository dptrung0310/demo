#ifndef _DEFS__H
#define _DEFS__H

const int SCREEN_WIDTH = 960;
const int SCREEN_HEIGHT = 480;
const char* WINDOW_TITLE = "Hello World!";
#define speed 5
#define SPEED_FALL 2
#define BACKGROUND_IMG "img\\forest.png"
const char*  BIRD_SPRITE_FILE = "img\\bird.png";
const int BIRD_CLIPS[][4] = {
    {0, 0, 182, 168},
    {181, 0, 182, 168},
    {364, 0, 182, 168},
    {547, 0, 182, 168},
    {728, 0, 182, 168},

    {0, 170, 182, 168},
    {181, 170, 182, 168},
    {364, 170, 182, 168},
    {547, 170, 182, 168},
    {728, 170, 182, 168},

    {0, 340, 182, 168},
    {181, 340, 182, 168},
    {364, 340, 182, 168},
    {547, 340, 182, 168},
};
const int BIRD_FRAMES = sizeof(BIRD_CLIPS)/sizeof(int)/4;

const char* HERO = "img\\Run-Sheet.png";
const int HERO_CLIPS[][4] = {
    {0,0,80,80},
    {80,0,80,80},
    {160,0,80,80},
    {240,0,80,80},
    {320,0,80,80},
    {400,0,80,80},
    {480,0,80,80},
    {560,0,80,80},
};
const int HERO_FRAMES= sizeof(HERO_CLIPS)/sizeof(int)/4;
#endif
