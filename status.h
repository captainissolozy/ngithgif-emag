#ifndef STATUS_H_INCLUDED
#define STATUS_H_INCLUDED

void init_status_lives(GameState *game);
void draw_status_lives(GameState *game);
void shutdown_status_lives(GameState *game);
void init_status_win(GameState *game);
void init_status_die(GameState *game);
void draw_status_die(GameState *game);
void draw_status_win(GameState *game);
#endif // STATUS_H_INCLUDED
