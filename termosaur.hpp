/**
 *
 *  A terminal game:
 *
 *   | |_ ___ _ __ _ __ ___   ___  ___  __ _ _   _ _ __
 *   | __/ _ \ '__| '_ ` _ \ / _ \/ __|/ _` | | | | '__|
 *   | ||  __/ |  | | | | | | (_) \__ \ (_| | |_| | |
 *    \__\___|_|  |_| |_| |_|\___/|___/\__,_|\__,_|_|
 *
 *
 * Home
 *    https://github.com/b37t1td/termosaur
 *
 * Author
 *    Lady Int3gra
 *
 * Made with
 *    Love
 *
 *                     GNU GENERAL PUBLIC LICENSE
 *                        Version 3, 29 June 2007
 *
 *  Copyright (C) Lady Int3gra <https://github.io/int3gra>
 *
 *  Everyone is permitted to copy and distribute verbatim copies
 *  of this license document, but changing it is not allowed.
 *
 */

#ifndef _TERMOSAUR_H
#define _TERMOSAUR_H

#define FPS_TIMEOUT 60
#define TIMER_RANGE 4

enum GAME_STATE_TABLE {
  GAME_STARTED,
  GAME_OVER,
  GAME_AI
};

struct Point {
  int x;
  int y;
};

struct Score {
  int time;
  int passed;
};

class Termosaur {
  public:
    Termosaur();
    ~Termosaur();

    void start();

  private:
    Point winSize;
    Score score;
    char *emptyLine;
    char timer;
    char debounceTimer;
    char jumpTimer;
    bool isJump;
    int bushPos;
    char gameState;

    void startCurses();
    void stopCurses();
    void draw();
    void drawDino();
    void drawTerrain();
    void drawBush();
    void drawScore();
    void clear();

    void gameOver();
    void aiGame();
    void startGame();

    void jump();
};

#endif