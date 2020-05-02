#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include<time.h>
#include "main.h"

void init_status_lives(GameState *game)
{
    SDL_Color white = {255, 255, 255, 255};

    SDL_Surface *tmp = TTF_RenderText_Blended(game->font, "FIGHT!!", white);
    game->labelW = tmp->w;
    game->labelH = tmp->h;
    game->label = SDL_CreateTextureFromSurface(game->renderer, tmp);
    SDL_FreeSurface(tmp);
}
void draw_status_lives(GameState *game)
{
    SDL_SetRenderDrawColor(game->renderer, 0, 0, 0, 255);

    SDL_RenderClear(game->renderer);

    SDL_SetRenderDrawColor(game->renderer, 255, 255, 255, 255);
    SDL_Rect textRect = {720-game->labelW/2, 360-game->labelH, game->labelW, game->labelH};
    SDL_RenderCopy(game->renderer, game->label, NULL, &textRect);
}
void shutdown_status_lives(GameState *game)
{
    SDL_DestroyTexture(game->label);
    game->label = NULL;
}
