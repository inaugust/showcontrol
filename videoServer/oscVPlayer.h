#pragma once

#include <ofVideoPlayer.h>

class oscVPlayer :
  public ofVideoPlayer
{
    public:
        oscVPlayer();
        //virtual ~oscVPlayer();

        void drawAll();
        void reset();
        void resetSize();

        void setUpVideo(const std::string& movie);
        //void setUpVideo(string movie, int x, int y, int w, int h, float _speed);

        void setLoop();
        //void setPaused(int b);
        //void setRender(int b);
        //void setZ(int z);

        int x,y,w,h;
        bool donereported;
        ofLoopType loopflag; // 0 or 1

    protected:
    private:
};
