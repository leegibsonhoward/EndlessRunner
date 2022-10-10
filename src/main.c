#include <stdio.h>
#include "SDL2/SDL.h"

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 320
int main(int argc, char **argv)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = SDL_CreateWindow(
        "EndlessRunner",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        WINDOW_WIDTH, WINDOW_HEIGHT,
        SDL_WINDOW_SHOWN);

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_TEXTUREACCESS_TARGET);
    while (1)
    {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
        SDL_RenderClear(renderer);
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);
        SDL_Rect r;
        // draw rect in middle of screen
        r.x = WINDOW_WIDTH / 2 - 20;
        r.y = WINDOW_HEIGHT / 2 - 20;
        r.w = 40;
        r.h = 40;
        SDL_RenderDrawRect(renderer, &r);
        SDL_RenderPresent(renderer);
    }

    SDL_DestroyWindow(window);
    
    return 0;

}
