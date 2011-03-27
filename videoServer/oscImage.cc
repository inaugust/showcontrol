#include <config.h>

#include "oscImage.h"
#include "ofMain.h"



oscImage::oscImage() :
  x(0),
  y(0),
  w(ofGetWidth()),
  h(ofGetHeight()),
  bLoaded(false),
  alpha(false)
{
    reset();
}


void oscImage::reset()
{
    x = 0;
    y = 0;
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
    w = 0;
    h = 0;
    bLoaded = false;
    alpha = false;

    if (bLoaded )
        setUseTexture(1);
}


void oscImage::setup(string file)
{
    if (file != "none")
    {
        if ( loadImage(file) )
        {
            printf("loaded image\n");
            bLoaded = true;
        }
        else
        {
            bLoaded = false;
            printf("CANNOT load image\n");
        }
    }
    else
    {
        printf("oscImage::setup -> file parameter is none, cannot load it\n");
    }
}


void oscImage::resetSize()
{
    w = 0;
    h = 0;
}




void oscImage::drawAll()
{
	if (bLoaded)
	{
//	    if (alpha)
//	    {
            if (alpha) ofEnableAlphaBlending();

            if (w==0 && h==0)
            {
                ofImage::draw(x, y);
            }
            else
            {
                ofImage::draw(x, y, w, h);
            }

            if (alpha) ofDisableAlphaBlending();
//        } else {
//            ofImage::draw(x, y, w, h);
//        }
	}
}


//oscVPlayer::~oscVPlayer()
//{
//    //dtor
//}
