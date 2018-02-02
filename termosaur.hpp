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

struct Point {
  int x;
  int y;
};

class Termosaur {
  public:
    Termosaur();
    ~Termosaur();

    void start();

  private:
    WINDOW *win;
    Point winSize;
    char *emptyLine;
    char timer;
    bool isJump;
    char jumpTimer;

    void startCurses();
    void stopCurses();
    void draw();
    void drawDino();
    void clear();
};

#endif