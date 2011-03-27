#include <config.h>

#include "oscVGrabber.h"
#include "ofMain.h"

#include <ofVideoGrabber.h>

oscVGrabber::oscVGrabber(ofVideoGrabber& vg) :
  x(0),
  y(0),
  w(0),
  h(0),
  init(false),
  vGr(vg)
{
//    //defaults to fullscreen w = ofGetWidth(); h = ofGetHeight(); x = 0;
//    y = 0;
}

oscVGrabber::oscVGrabber(const oscVGrabber& old) :
  x(old.x),
  y(old.y),
  w(old.w),
  h(old.h),
  init(old.init),
  vGr(old.vGr)
{ }

oscVGrabber::~oscVGrabber()
{
    //dtor
}

oscVGrabber& oscVGrabber::operator=(const oscVGrabber& old)
{
  x= old.x;
  y= old.y;
  w= old.w;
  h= old.h;
  init= old.init;
  vGr= old.vGr;
  return *this;
}

void oscVGrabber::resetSize()
{
    w = 0;
    h = 0;
}

void oscVGrabber::setup()
{
    init = true;
}

void oscVGrabber::reset()
{
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

    init = false;

    //ofsetUseTexture(1);
}

void oscVGrabber::draw()
{
    if (init==true)
    {
        if (w==0 && h==0)
        {
            vGr.draw(x,y);
        }
        else
        {
            vGr.draw(x,y,w,h);
        }
    }
}



void oscVGrabber::setRender(int b)
{
    init = b ? true : false ;
    //ofVideoPlayer::setUseTexture(n);
}



