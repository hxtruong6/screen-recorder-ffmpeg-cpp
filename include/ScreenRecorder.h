//
// Created by hxtruong on 1/15/20.
//

#ifndef QTTEST_SCREENRECORDER_H
#define QTTEST_SCREENRECORDER_H

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <math.h>
#include <string.h>
#define __STDC_CONSTANT_MACROS

//FFMPEG LIBRARIES
extern "C"
{
#include "libavcodec/avcodec.h"
#include "libavcodec/avfft.h"

#include "libavdevice/avdevice.h"

#include "libavfilter/avfilter.h"
#include "libavfilter/avfiltergraph.h"
#include "libavfilter/buffersink.h"
#include "libavfilter/buffersrc.h"

#include "libavformat/avformat.h"
#include "libavformat/avio.h"

// libav resample


#include "libavutil/opt.h"
#include "libavutil/common.h"
#include "libavutil/channel_layout.h"
#include "libavutil/imgutils.h"
#include "libavutil/mathematics.h"
#include "libavutil/samplefmt.h"
#include "libavutil/time.h"
#include "libavutil/opt.h"
#include "libavutil/pixdesc.h"
#include "libavutil/file.h"

// lib swresample

#include "libswscale/swscale.h"

}

using namespace std;

class ScreenRecorder {
private:
    AVInputFormat *inputFormat;
    AVOutputFormat *outputFormat;

    AVCodecContext *codecContext;
    AVCodecParameters  *codecParameters;

    AVFormatContext *formatContext;

    AVFrame *frame;
    AVFrame *outFrame;

    AVCodec *codec;
    AVCodec *outCodec;

    AVPacket *avPacket;

    AVDictionary *options;

    AVOutputFormat *outAVOutputFormat;
    AVFormatContext *outAVFormatContext;
    AVCodecContext *outAVCodecContext;

    AVStream *video_st;
    AVFrame *outAVFrame;

    const char *dev_name;
    const char *output_file;

    double video_pts;

    int out_size;
    int codec_id;
    int value;
    int VideoStreamIndx;

public:

    ScreenRecorder();

    ~ScreenRecorder();

    /* function to initiate communication with display library */
    bool RegisterDevice();
    int InitOutputFile();
    int CaptureVideoFrames();

    void HandleAVError(int err, string msg);

};

#endif //QTTEST_SCREENRECORDER_H
