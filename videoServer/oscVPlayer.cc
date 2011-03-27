#include <config.h>

#include "oscVPlayer.h"
#include "ofMain.h"



oscVPlayer::oscVPlayer() :
  x(0),
  y(0),
  w(0),
  h(0),
  donereported(false),
  loopflag(OF_LOOP_NONE)
{ }

void oscVPlayer::reset()
{   //defaults to fullscreen
//    if ( ofGetWindowMode()== OF_FULLSCREEN )
//    {
//        w = ofGetScreenWidth(); //ofGetWidth();
//        h = ofGetScreenHeight(); //ofGetHeight();
//    }
//    else
//    {
//        w = ofGetWidth();
//        h = ofGetHeight();
//    }
    x = 0;
    y = 0;
    w = 0;
    h = 0;
    donereported = false;
    loopflag = OF_LOOP_NONE;

    if (isLoaded())
	{
        setFrame(0);
        setUseTexture(1);
        setPaused(0);
        setLoopState(OF_LOOP_NORMAL);
        setSpeed(1);
        setVolume(255);
        stop();
	}
}


void oscVPlayer::setUpVideo(const string& movie)
{
    if (movie != "none")
    {
        if ( loadMovie(movie) )
        {
            printf("loaded movie\n");
            //printf("loaded movie %s \n", movie);
    //        setLoopState(OF_LOOP_NORMAL); //just in case
            //play();
            //donereported = false;
            //printf("loop in setupvideo %i\n", loopflag);
        }
        else
        {
            printf("CANNOT load movie\n");
            //printf("CANNOT load movie %s \n", movie);
        }
    }
    else
    {
        printf("movie parameter is none, cannot load it\n");
    }
}




void oscVPlayer::setLoop()
{
    setLoopState(loopflag); // go back to your state. otherwise play resets it to loop ON
    //printf("loop in %i\n", loopflag);
}

//void oscVPlayer::setPaused(int b)
//{
//    int n = b ? true : false ;
//    ofVideoPlayer::setPaused(n);
//}
//
//void oscVPlayer::setRender(int b)
//{
//    int n = b ? true : false ;
//    ofVideoPlayer::setUseTexture(n);
//}


void oscVPlayer::resetSize()
{
    w = 0;
    h = 0;
}


void oscVPlayer::drawAll()
{
	if (isLoaded())
	{
	    ofSetColor(0xFFFFFF);
	    if (w==0 && h==0)
	    {
	        ofVideoPlayer::draw(x, y);
	    }
	    else
	    {
            ofVideoPlayer::draw(x, y, w, h);
        }
	}
}

//oscVPlayer::~oscVPlayer()
//{
//    //dtor
//}
