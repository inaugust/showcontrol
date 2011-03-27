ACLOCAL_AMFLAGS = -I m4 --force

noinst_HEADERS= \
		videoServer/oscImage.h \
		videoServer/oscVGrabber.h \
		videoServer/oscVPlayer.h \
		videoServer/videoServer.h

sbin_PROGRAMS=videoServer/videoServer
videoServer_videoServer_LDFLAGS= \
				 ${AM_LDFLAGS} \
				 ${openframeworks_LIBS} \
				 ${opencv_LIBS} \
				 -ludev \
				 -lofxOsc \
				 -loscpack \
				 -lofxXmlSettings \
				 -lofxOpenCv

videoServer_videoServer_CXXFLAGS= \
				  ${AM_CXXFLAGS} \
				  ${opencv_CFLAGS} \
				  ${openframeworks_CFLAGS} \
				  -isystem /usr/local/include/openframeworks/openFrameworks/addons/ofxOsc \
				  -isystem /usr/local/include/openframeworks/openFrameworks/addons/ofxXmlSettings \
				  -isystem /usr/local/include/openframeworks/openFrameworks/addons/ofxOpenCv
videoServer_videoServer_SOURCES= \
				 videoServer/main.cc \
				 videoServer/oscImage.cc \
				 videoServer/oscVGrabber.cc \
				 videoServer/oscVPlayer.cc \
				 videoServer/videoServer.cc

