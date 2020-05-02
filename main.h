#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#define STATUS_STATE_LIVES 0
#define STATUS_STATE_GAME 1
#define STATUS_STATE_GAMEOVER 8

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include<time.h>
#include<SDL2/SDL_ttf.h>
typedef struct
{
    float x, y;
    float dx, dy;
    short lives;
    char *name;
    int onLedge, isDead;
    int animFrame, facingLeft, action;
}Man;

typedef struct
{
    int x, y;
    short lives;
    char *enemy;
    int enemyFrame, isDead;

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
    SDL_Texture *manFrames[46];
    SDL_Texture *brick;
    SDL_Texture *thunder[3];
    SDL_Texture *beam[2];
    SDL_Texture *strike[2];
    SDL_Texture *railgun[4];
    SDL_Texture *label;
    int labelW, labelH;
    int countani;

    TTF_Font *font;

    int time;
    int statusState;
    SDL_Renderer *renderer;
}GameState;
#endif // MAIN_H_INCLUDED
