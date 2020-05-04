#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include<time.h>
#include "main.h"
#include "status.h"

#define GRAVITY 0.0918f

void loadGame(GameState *game)
{
    SDL_Surface *surface = NULL;
    surface = IMG_Load("walk0.png");
    if(surface == NULL)
    {
        printf("Suck");
        SDL_Quit();
        exit(1);
    }
    game->manFrames[0] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("walk1.png");
    game->manFrames[1] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("walk2.png");
    game->manFrames[2] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("walk3.png");
    game->manFrames[3] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("walk4.png");
    game->manFrames[4] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("walk5.png");
    game->manFrames[5] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("idle1.png");
    game->manFrames[6] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("idle2.png");
    game->manFrames[7] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("idle3.png");
    game->manFrames[8] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("idle4.png");
    game->manFrames[9] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("idle5.png");
    game->manFrames[10] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("idle6.png");
    game->manFrames[11] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("idle7.png");
    game->manFrames[12] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("idle8.png");
    game->manFrames[13] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("jump1.png");
    game->manFrames[14] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("jump2.png");
    game->manFrames[15] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("jump5.png");
    game->manFrames[16] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("jump6.png");
    game->manFrames[17] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("jump7.png");
    game->manFrames[18] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("beam1.png");
    game->manFrames[19] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("beam2.png");
    game->manFrames[20] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("beam3.png");
    game->manFrames[21] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("thunder1.png");
    game->manFrames[22] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("thunder2.png");
    game->manFrames[23] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("thunder3.png");
    game->manFrames[24] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("thunder4.png");
    game->manFrames[25] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("thunder5.png");
    game->manFrames[26] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("thunder6.png");
    game->manFrames[27] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("railgun1.png");
    game->manFrames[28] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("railgun2.png");
    game->manFrames[29] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("railgun3.png");
    game->manFrames[30] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("railgun4.png");
    game->manFrames[31] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("railgun5.png");
    game->manFrames[32] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("railgun6.png");
    game->manFrames[33] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("railgun7.png");
    game->manFrames[34] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("railgun8.png");
    game->manFrames[35] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("railgun9.png");
    game->manFrames[36] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("strike1.png");
    game->manFrames[37] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("strike2.png");
    game->manFrames[38] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("strike2.png");
    game->manFrames[39] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("strike5.png");
    game->manFrames[40] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("strike4.png");
    game->manFrames[41] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("dead1.png");
    game->manFrames[42] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("dead2.png");
    game->manFrames[43] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("dead3.png");
    game->manFrames[44] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("dead4.png");
    game->manFrames[45] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);


    surface = IMG_Load("beam.png");
    game->beam[0] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);




    surface = IMG_Load("ifrit1.png");
    game->bird[0] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("ifrit2.png");
    game->bird[1] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("ifrit3.png");
    game->bird[2] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("ifrit4.png");
    game->bird[3] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("ifrit5.png");
    game->bird[4] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("ifrit6.png");
    game->bird[5] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("ifrit7.png");
    game->bird[6] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("ifrit8.png");
    game->bird[7] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("ifrit9.png");
    game->bird[8] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("ifrit10.png");
    game->bird[9] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("ifrit11.png");
    game->bird[10] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("ifrit12.png");
    game->bird[11] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("warp1.png");
    game->bird[12] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("warp2.png");
    game->bird[13] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("warp3.png");
    game->bird[14] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("warp4.png");
    game->bird[15] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("warp5.png");
    game->bird[16] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("atk1.png");
    game->attack[0] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("atk2.png");
    game->attack[1] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("fire1.png");
    game->fire[0] = SDL_CreateTextureFromSurface(game->renderer, surface);
    if(surface == NULL)
    {
        printf("Suck");
        SDL_Quit();
        exit(1);
    }
    SDL_FreeSurface(surface);
    surface = IMG_Load("fire2.png");
    game->fire[1] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("fire3.png");
    game->fire[2] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("fire4.png");
    game->fire[3] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("fire5.png");
    game->fire[4] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("fire6.png");
    game->fire[5] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);


    surface = IMG_Load("BG.png");
    game->bg = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("brick.png");
    game->brick = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    //load fonts
    game->font = TTF_OpenFont("OpenSans-Bold.ttf", 96);
    if(!game->font)
    {
        printf("can't find font you dumbass");
        SDL_Quit();
        exit(1);
    }

    game->label = NULL;

    game->man.x = 320-40;
    game->man.y = 240-40;
    game->man.dx = 0;
    game->man.dy = 0;
    game->man.onLedge = 0;
    game->man.animFrame = 7;
    game->man.facingLeft = 1;
    game->birds.enemyFrame = 0;
    game->man.action = 0;
    game->man.lives = 8;
    game->man.isDead = 0;
    game->statusState = STATUS_STATE_LIVES;
    game->countani = 0;

    game->attacks[0].x = 1440;
    game->attacks[0].y = 720;
    game->attacks[1].x = 1440;
    game->attacks[1].y = 720;
    game->attacks[0].normatk = 0;
    game->attacks[1].normatk = 0;
    game->attacks2[0].dx = 190;
    game->rota = 0;

    init_status_lives(game);

    game->time = 0;

    //init bird
    game->birds.x = (random()%900)+300;
    int ran = random()%700;
    if(ran+200 >= 400 )
    {
        ran = 400;
    }
    game->birds.y = ran;


    //init ledges
    game->ledges[0].w = 1590;
    game->ledges[0].h = 70;
    game->ledges[0].x = -50;
    game->ledges[0].y = 600;

    game->ledges[2].w = 432;
    game->ledges[2].h = 70;
    game->ledges[2].x = -60;
    game->ledges[2].y = 280;


}
Mattack1 *beams[MAX_BEAM] = { NULL };
void addBeam(float x, float y, float dx)
{
    int found = -1;
    for(int i = 0; i < MAX_BEAM; i++)
    {
        if(beams[i] == NULL)
        {
            found = i;
            break;
        }
    }
    if(found >= 0)
    {
        int i = found;
        beams[i] = malloc(sizeof(Mattack1));
        beams[i]->x = x;
        beams[i]->y = y;
        beams[i]->dx = dx;
    }
}

void removeBeam(int i)
{
    if(beams[i])
    {
        free(beams[i]);
        beams[i] = NULL;
    }
}
void process(GameState *game)
{
    game->time++;
    int check = 0;

    if(game->time > 1000 && check == 0)
    {
        shutdown_status_lives(game);
        game->statusState = STATUS_STATE_GAME;
        game->time = 0;
        check = 1;
    }

    if(game->statusState == STATUS_STATE_GAME && (game->man.isDead <= 2000 || game->birds.isDead <= 5000))
    {
        Man *man = &game->man;
        Bird *birds = &game->birds;
        man->x += man->dx;
        man->y += man->dy;

        man->dy += GRAVITY;

        if(man->dx == 0 && man->action == 1)
        {
            if(game->time %50 == 0)
            {
                if(man->animFrame == 19)
                {
                    man->animFrame = 20;
                }
                else if(man->animFrame == 20)
                {
                    man->animFrame = 21;
                    man->action = 0;
                }
                else
                    {man->animFrame = 19;}

            }
        }else if(man->dx == 0 && man->action == 2)
        {
        if(game->time % 50 == 0)
        {
            if(man->animFrame == 22)
            {
                man->animFrame = 23;
            }
            else if(man->animFrame == 23)
            {
                man->animFrame = 24;
            }
            else if(man->animFrame == 24)
            {
                man->animFrame = 25;
            }
            else if(man->animFrame == 25)
            {
                man->animFrame = 26;
            }
            else if(man->animFrame == 26)
            {
                man->animFrame = 27;
                man->action = 0;
            }
            else
                {man->animFrame = 22;}
        }
    }else if(man->dx == 0 && man->action == 3)
        {
        if(game->time % 50 == 0)
        {
            if(man->animFrame == 28)
            {
                man->animFrame = 29;
            }
            else if(man->animFrame == 29)
            {
                man->animFrame = 30;
            }
            else if(man->animFrame == 30)
            {
                man->animFrame = 31;
            }
            else if(man->animFrame == 31)
            {
                man->animFrame = 32;
            }
            else if(man->animFrame == 32)
            {
                man->animFrame = 33;
            }
            else if(man->animFrame == 33)
            {
                man->animFrame = 34;
            }
            else if(man->animFrame == 34)
            {
                man->animFrame = 35;
            }
            else if(man->animFrame == 35)
            {
                man->animFrame = 36;
                man->action = 0;
            }
            else
                {man->animFrame = 28;}
        }
    }else if(man->dx == 0 && man->action == 4)
        {
        if(game->time % 40 == 0)
        {
            if(man->animFrame == 37)
            {
                man->animFrame = 38;
            }
            else if(man->animFrame == 38)
            {
                man->animFrame = 39;
            }
            else if(man->animFrame == 39)
            {
                man->animFrame = 40;
            }
            else if(man->animFrame == 40)
            {
                man->animFrame = 41;
            }
            else if(man->animFrame == 41)
            {
                man->animFrame = 37;
                man->action = 0;
            }
            else
                {man->animFrame = 37;}
        }
    }

        if(man->dx != 0 && man->onLedge && man->action == 0)
        {
        if(game->time % 30 == 0)
        {
            if(man->animFrame == 0)
            {
                man->animFrame = 1;
            }
            else if(man->animFrame == 1)
            {
                man->animFrame = 2;
            }
            else if(man->animFrame == 2)
            {
                man->animFrame = 3;
            }
            else if(man->animFrame == 3)
            {
                man->animFrame = 4;
            }
            else if(man->animFrame == 4)
            {
                man->animFrame = 5;
            }
            else
            {
                man->animFrame = 0;
            }
        }

    }else if(man->dx == 0 && man->onLedge && man->action == 0)
        {
        if(game->time % 30 == 0)
        {
            if(man->animFrame == 6)
            {
                man->animFrame = 7;
            }
            else if(man->animFrame == 7)
            {
                man->animFrame = 8;
            }
            else if(man->animFrame == 8)
            {
                man->animFrame = 9;
            }
            else if(man->animFrame == 9)
            {
                man->animFrame = 10;
            }
            else if(man->animFrame == 10)
            {
                man->animFrame = 11;
            }
            else if(man->animFrame == 11)
            {
                man->animFrame = 12;
            }
            else if(man->animFrame == 12)
            {
                man->animFrame = 13;
            }
            else
            {man->animFrame = 6;}
        }
        }else if(man->dy != 0 && man->action == 0)
        {
        if(game->time % 45 == 0)
        {
            if(man->animFrame == 14)
            {
                man->animFrame = 15;
            }
            else if(man->animFrame == 15)
            {
                man->animFrame = 16;
            }
            else if(man->animFrame == 16)
            {
                man->animFrame = 17;
            }
            else if(man->animFrame == 17)
            {
                man->animFrame = 18;
            }
            else
            {man->animFrame = 14;}
        }
        }

        //reset game time
        if(game->time > 1005)
        {
            SDL_DestroyTexture(game->attack[0]);
            SDL_DestroyTexture(game->attack[1]);
            for(int i = 0; i<6;i++)
            {
                SDL_DestroyTexture(game->fire[i]);
            }
            game->time = 1;
            game->rota = 0;
        }
        if(game->time % 1000 == 0)
        {
        game->birds.x = (random()%900)+350;
        int ran = random()%700;
        if(ran+200 >= 400 )
        {
            ran = 400;
        }
        game->birds.y = ran;

    }
        else if(game->time % 850 == 0 || game->time % 880 == 0 || game->time % 910 == 0 || game->time % 940 == 0 || game->time % 970 == 0)
        {
        if(birds->enemyFrame == 12)
        {
            birds->enemyFrame = 13;
        }
        else if(birds->enemyFrame == 13)
        {
            birds->enemyFrame = 14;
        }
        else if(birds->enemyFrame == 14)
        {
            birds->enemyFrame = 15;
        }
        else if(birds->enemyFrame == 15)
        {
            birds->enemyFrame = 16;
        }
        else
        {
            birds->enemyFrame = 12;
        }
    }
        else if(game->time % 30 == 0 && game->time % 1000 != 0 && game->time < 850)

        {
            if(birds->enemyFrame == 0)
            {
                birds->enemyFrame = 1;
            }
            else if(birds->enemyFrame == 1)
            {
                birds->enemyFrame = 2;
            }
            else if(birds->enemyFrame == 2)
            {
                birds->enemyFrame = 3;
            }
            else if(birds->enemyFrame == 3)
            {
                birds->enemyFrame = 4;
            }
            else if(birds->enemyFrame == 4)
            {
                birds->enemyFrame = 5;
            }
            else if(birds->enemyFrame == 5)
            {
                birds->enemyFrame = 6;
            }
            else if(birds->enemyFrame == 6)
            {
                birds->enemyFrame = 7;
            }
            else if(birds->enemyFrame == 7)
            {
                birds->enemyFrame = 8;
            }
            else if(birds->enemyFrame == 8)
            {
                birds->enemyFrame = 9;
            }
            else if(birds->enemyFrame == 9)
            {
                birds->enemyFrame = 10;
            }
            else if(birds->enemyFrame == 10)
            {
                birds->enemyFrame = 11;
            }
            else
            {
                birds->enemyFrame = 0;
            }
        }
        if(game->time%70 == 0)
        {
            if(game->attacks[0].normatk == 0)
            {
                game->attacks[0].normatk = 1;
                game->attacks[1].normatk = 1;
            }else
            {
                game->attacks[0].normatk = 0;
                game->attacks[1].normatk = 0;
            }
        }
        if(game->time == 480)
        {
            game->attacks[0].x = game->man.x+random()%120+100;
            game->attacks[0].y = game->man.y;
            game->attacks[1].x = game->man.x-random()%150-100;
            game->attacks[1].y = game->man.y;
        }else if(game->time < 480)
        {
            game->attacks[0].x = 1440;
            game->attacks[0].y = 720;
            game->attacks[1].x = 1440;
            game->attacks[1].y = 720;
        }
        if(game->time%50 == 0)
        {
            if(game->attacks2[0].atkFrame == 0)
            {
                game->attacks2[0].atkFrame = 1;
            }else if(game->attacks2[0].atkFrame == 1)
            {
                game->attacks2[0].atkFrame = 2;
            }else if(game->attacks2[0].atkFrame == 2)
            {
                game->attacks2[0].atkFrame = 3;
            }else if(game->attacks2[0].atkFrame == 3)
            {
                game->attacks2[0].atkFrame = 4;
            }else if(game->attacks2[0].atkFrame == 4)
            {
                game->attacks2[0].atkFrame = 5;
            }
            else
            {
                game->attacks2[0].atkFrame = 0;
            }
        }
    }
    else if(game->man.isDead > 2000 && game->countani == 0)
    {
        Man *man = &game->man;
        man->x += man->dx;
        if(game->time %50 == 0)
        {
            if(man->animFrame == 42)
            {
                man->animFrame = 43;
                man->dx = -3;
            }
            else if(man->animFrame == 43)
            {
                man->animFrame = 44;
            }
            else if(man->animFrame == 44)
            {
                man->animFrame = 45;
                game->countani = 1;
            }
            else
            {
                man->animFrame = 42;
            }

        }
    }
}
int collide2d(float x1, float y1, float x2, float y2, float wt1, float ht1, float wt2, float ht2)
{
    return (!((x1  > (x2+wt2)) || (x2 > (x1+wt1)) || (y1 > (y2+ht2)) || (y2 > (y1+ht1))));
}

void collisionDetect(GameState *game)
{
    //ifrit collision
    if(collide2d(game->man.x, game->man.y, game->birds.x, game->birds.y, 41, 111, 50, 100))
    {
        game->man.isDead++;

    }
    //enemy attack coliision;


    if(collide2d(game->man.x, game->man.y, game->attacks[0].x, game->attacks[0].y, 41, 111, 75, 85))
    {
        game->man.isDead++;
    }

    if(collide2d(game->man.x, game->man.y, game->attacks[1].x, game->attacks[1].y, 41, 111, 75, 85))
    {
        game->man.isDead++;
    }
    if(collide2d(game->man.x, game->man.y, game->birds.x-game->attacks2[0].dx, game->birds.y+(40+game->attacks2[0].y), 41, 111, 200, 71) && game->time > 250&&game->statusState == STATUS_STATE_GAME)
    {
        game->man.isDead++;
        printf("   %d\n", game->man.isDead);
    }
    if(collide2d(game->man.x, game->man.y, game->birds.x+game->attacks2[0].dx, game->birds.y+(40), 41, 111, 200, 71) && game->time > 250 && game->statusState == STATUS_STATE_GAME)
    {
        game->man.isDead++;
        printf("%d\n", game->man.isDead);
    }


    //ledge collision
    for(int i =0; i < 4; i++)
    {
        float mw = 41, mh = 181;
        float mx = game->man.x, my = game->man.y;
        float bx = game->ledges[i].x, by = game->ledges[i].y, bw = game->ledges[i].w, bh = game->ledges[i].h;

        if(mx+mw/2 > bx && mx+mw/2<bx+bw)
        {
            //head collide
            if(my < by+bh && my>by && game->man.dy < 0)
            {
                game->man.y = by+bh;
                my = by+bh;

                //stop velo
                game->man.dy = 0;
                game->man.onLedge = 1;
            }
        }
        if(mw+mw > bx && mx<bx+bw)
        {
            if(my+mh > by && my < by && game->man.dy >= 0)
            {
                game->man.y = by-mh;
                my = by-mh;
                //landed
                game->man.dy = 0;
                game->man.onLedge = 1;
            }
        }
        if(my+mh > by && my<by+bh)
        {
            //right edge
            if(mx < bx+bw && mx+mw > bx+bw && game->man.dx < 0)
            {
                //correct posi
                game->man.x = bx+bw;
                mx = bx+bw;
                //stop velo
                game->man.dx = 0;
            }
            //left edge
            else if(mx+mw > bx && mx < bx && game->man.dx > 0)
            {
                // correct posi
                game->man.x = bx-mw;
                //stop velo
                game->man.dx = 0;
            }
        }
    }
}

int processEvent(SDL_Window *window, GameState *game)
{
    int done = 0;
    SDL_Event event;
     while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
            case SDL_WINDOWEVENT_CLOSE:
            {
                if (window)
                {
                    SDL_DestroyWindow(window);
                    window = NULL;
                    done = 1;
                }
            }
            break;
            case SDL_KEYDOWN:
            {
                switch (event.key.keysym.sym)
                {
                case SDLK_ESCAPE:
                    done = 1;
                break;
                case SDLK_UP:
                    if(game->man.onLedge)
                    {
                        game->man.dy = -4;
                        game->man.onLedge = 0;
                    }
                break;
                case SDLK_DOWN:
                    game->man.dy = +6;
                break;
                case SDLK_q:
                    game->man.dx =0;
                    game->man.action = 1;
                break;
                case SDLK_w:
                    game->man.dx = 0;
                    game->man.action = 2;
                break;
                case SDLK_e:
                    game->man.dx = 0;
                    game->man.action = 3;
                break;
                case SDLK_r:
                    game->man.dx = 0;
                    game->man.action = 4;
                break;
                }
            }
            break;
            case SDL_QUIT:
                done = 1;
            break;
            }
        }
    const Uint8 *state = SDL_GetKeyboardState(NULL);
    if(state[SDL_SCANCODE_UP])
    {
        game->man.dy -= 0.06f;
    }
    if (state[SDL_SCANCODE_LEFT])
    {
        game->man.dx -= 0.1;
        if(game->man.dx < -3)
        {
            game->man.dx = -3;
        }
        game->man.facingLeft = 0;
        game->man.action = 0;
    }
    else if (state[SDL_SCANCODE_RIGHT])
    {
        game->man.dx += 0.1;
        if(game->man.dx > 3)
        {
            game->man.dx = 3;
        }
        game->man.facingLeft = 1;
        game->man.action = 0;
    }else if(state[SDL_SCANCODE_DOWN])
    {
        game->man.dx = 0;
    }
    else
    {
        game->man.dx *= 0.9f;
        if(fabsf(game->man.dx) < 0.1f)
        {
            game->man.dx = 0;
        }
    }

    return done;
}
void doRender(SDL_Renderer *renderer, GameState *game)
{
    if(game->statusState == STATUS_STATE_LIVES)
    {
        draw_status_lives(game);
    }else if(game->statusState == STATUS_STATE_GAME)
{
    SDL_RenderClear(renderer);
    //bacgGround
    SDL_Rect bgRect = {0, 0, 1440, 720};
    SDL_RenderCopy(renderer, game->bg, NULL, &bgRect);
    SDL_Rect bgRect1 = {0, -720, 1440, 720};
    SDL_RenderCopy(renderer, game->bg, NULL, &bgRect1);
    SDL_Rect bgRect2 = {0, -1440, 1440, 720};
    SDL_RenderCopy(renderer, game->bg, NULL, &bgRect2);

    //ledge
    SDL_Rect ledgerect = {game->ledges[0].x, game->ledges[0].y, game->ledges[0].w, game->ledges[0].h};
    SDL_RenderCopy(renderer, game->brick, NULL, &ledgerect);
    SDL_Rect ledgerect2 = {game->ledges[2].x, game->ledges[2].y, game->ledges[2].w, game->ledges[2].h};
    SDL_RenderCopy(renderer, game->brick, NULL, &ledgerect2);


    int index = game->man.animFrame;
    int i = 1, j = 1;
    if(index == 1 || index == 2 || index == 4 || index == 5 || index >=6)
    {
        i=2;
    }else if(index == 16)
    {
        i=0.77;
    }
    else
    {
        i = 1;
        j = 1;
    }
    //Character
    SDL_Rect rect1 = {game->man.x, game->man.y, i*45, j*180};
    SDL_RenderCopyEx(renderer, game->manFrames[game->man.animFrame], NULL, &rect1, 0, NULL, (game->man.facingLeft==0));



    //IFRIT
    SDL_Rect birdRect = {game->birds.x, game->birds.y, 101, 210};
    SDL_RenderCopy(renderer, game->bird[game->birds.enemyFrame], NULL, &birdRect);

    //attack render
    if(game->time > 550 && game->time <= 1000)
    {
        game->rota+=8;
        game->rota = game->rota%360;
        SDL_Rect Rectatk1 = {game->attacks[0].x, game->attacks[0].y, 75, 85};
        SDL_RenderCopyEx(renderer, game->attack[game->attacks[1].normatk], NULL, &Rectatk1, game->rota, NULL, 1);

        SDL_Rect Rectatk2 = {game->attacks[1].x, game->attacks[1].y, 75, 85};
        SDL_RenderCopyEx(renderer, game->attack[game->attacks[0].normatk], NULL, &Rectatk2, -game->rota, NULL, 0);
        if(game->time >= 780)
        {
            game->attacks[0].x++;
            game->attacks[1].x-2;
        }
        else
        {
            game->attacks[0].x--;
            game->attacks[1].x++;
            game->attacks[1].y--;
        }
        if(game->man.facingLeft == 1)
        {
            game->attacks[0].y++;
        }else
        {
            game->attacks[1].y++;
        }
    }

    if(game->time <= 950 && game->time >= 250)
    {
        SDL_Rect Rectatk3 = {game->birds.x-game->attacks2[0].dx, game->birds.y+(40+game->attacks2[0].y), 250, 71};
        SDL_RenderCopyEx(renderer, game->fire[game->attacks2[0].atkFrame], NULL, &Rectatk3, 0, NULL, 0);
        SDL_Rect Rectatk4 = {game->birds.x+game->attacks2[0].dx, game->birds.y+(40), 250, 71};
        SDL_RenderCopyEx(renderer, game->fire[game->attacks2[0].atkFrame], NULL, &Rectatk4, 0, NULL, 1);
        game->attacks2[0].dx +=2;
        if(game->birds.y +(40+game->attacks2[0].y) > game->man.y)
        {
            game->attacks2[0].y-=1;
        }else if(game->birds.y +(40+game->attacks2[0].y) < game->man.y)
        {
            game->attacks2[0].y+=1;
        }
    }else if(game->time == 1000)
    {
        game->attacks2[0].dx = 190;
        game->attacks2[0].y = 0;
    }
}

    SDL_RenderPresent(renderer);
}

int main(int argc, char *argv[]) {
    int done = 0;
    GameState gameState;
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;

    Man man;

    SDL_Init(SDL_INIT_VIDEO);
    srandom((int)time(NULL));

    window = SDL_CreateWindow("Dungeon Attack",
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              1440,
                              720,
                              0
    );

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    gameState.renderer = renderer;

    TTF_Init();//init font

    loadGame(&gameState);

    while (!done)
    {
        done = processEvent(window, &gameState);
        process(&gameState);
        collisionDetect(&gameState);
        doRender(renderer, &gameState);
    }

    if(gameState.label != NULL)
    {
        SDL_DestroyTexture(gameState.label);
    }
    SDL_DestroyTexture(gameState.brick);
    SDL_DestroyTexture(gameState.attack[0]);
    SDL_DestroyTexture(gameState.attack[1]);
    SDL_DestroyTexture(gameState.manFrames[0]);
    SDL_DestroyTexture(gameState.bg);
    SDL_DestroyTexture(gameState.bird);
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    TTF_CloseFont(gameState.font);
    IMG_Quit();
    SDL_Quit();
    TTF_Quit();
    return 0;
}
