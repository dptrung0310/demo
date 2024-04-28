#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include "graphics.h"
#include "defs.h"

using namespace std;

int main(int argc, char *argv[])
{
    Graphics graphics;
    graphics.init();

    ScrollingBackground background;
    background.setTexture(graphics.loadTexture(BACKGROUND_IMG));

    Sprite hero;
    SDL_Texture* heroTexture = graphics.loadTexture(HERO);
    hero.init(heroTexture, HERO_FRAMES, HERO_CLIPS);

    int x=5;
    int y=5;
    bool quit = false;
    SDL_Event e;
    while( !quit ) {
        while( SDL_PollEvent( &e ) != 0 ) {
            if( e.type == SDL_QUIT ) quit = true;
        }
        background.scroll(1);
        graphics.renderbackgr(background);

        const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);

        hero.tick();
        graphics.move(x,y,hero,currentKeyStates);

        //graphics.render(150, 100, bird);

        graphics.presentScene();
        SDL_Delay(1);
    }

    SDL_DestroyTexture( heroTexture ); heroTexture = nullptr;
    SDL_DestroyTexture( background.texture );
    graphics.quit();
    return 0;
}
