#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include<time.h>
#include<SDL2/SDL_ttf.h>
typedef struct
{
    float x, y;
    float dx, dy;
    short life;
    char *name;
    int onLedge;
    int animFrame, facingLeft, action;
}Man;

typedef struct
{
    int x, y;
    short life;
    char *enemy;
    int enemyFrame;

}Bird;

typedef struct
{
    int x, y, w, h;
}Attack;

typedef struct
{
    int x, y, w, h;
}Ledge;

typedef struct
{
    Man man;
    Attack attacks[3];

    Bird birds;
    Ledge ledges[4];

    SDL_Texture *attack[2];
    SDL_Texture *bird[17];
    SDL_Texture *bg;
    SDL_Texture *manFrames[42];
    SDL_Texture *brick;
    SDL_Texture *thunder[3];
    SDL_Texture *beam[2];
    SDL_Texture *strike[2];
    SDL_Texture *railgun[4];
    SDL_Texture *label;

    TTF_Font *font;

    int time;
    SDL_Renderer *renderer;
}GameState;
#endif // MAIN_H_INCLUDED
