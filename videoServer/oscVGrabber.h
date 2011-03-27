#pragma once

class ofVideoGrabber;

class oscVGrabber /*: public ofVideoGrabber */
{
public:
  explicit oscVGrabber(ofVideoGrabber& vg);
  oscVGrabber(const oscVGrabber& old);
  oscVGrabber& operator=(const oscVGrabber&);
  virtual ~oscVGrabber();

  void draw();
  void setup();
  void setRender(int b);
  void resetSize();

  void reset();

  int x,y,w,h;
  bool init;

private:
  oscVGrabber();
  ofVideoGrabber& vGr;
};
