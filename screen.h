#ifndef _SCREEN_H
#define _SCREEN_H

#include "oglsdl.h"

#include <stdio.h>

class Screen
{
public:
    
    int mWidth;
    int mHeight;
    int mBpp;
    int mFlags;
    int mFullScreen;

    SDL_Renderer* mRenderer;
    SDL_RendererInfo* mInfo;
    SDL_Window *mWindow;

    Screen();
    ~Screen();
    Screen(int pWidth, int pHeight, int pBpp, int pFlags);
    int init();
    void clear();
    void update();
    void print_info();
};

#endif
