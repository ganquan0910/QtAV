/******************************************************************************
    QtAV:  Media play library based on Qt and FFmpeg
    Copyright (C) 2013-2014 Wang Bin <wbsecg1@gmail.com>

*   This file is part of QtAV

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
******************************************************************************/

#ifndef QTAV_VIDEODECODERFFMPEGHW_H
#define QTAV_VIDEODECODERFFMPEGHW_H

#include "VideoDecoderFFmpegBase.h"

namespace QtAV {

class VideoDecoderFFmpegHWPrivate;
class VideoDecoderFFmpegHW : public VideoDecoderFFmpegBase
{
    Q_DISABLE_COPY(VideoDecoderFFmpegHW)
    DPTR_DECLARE_PRIVATE(VideoDecoderFFmpegHW)
public:
    virtual bool prepare() Q_DECL_OVERRIDE;
protected:
    VideoDecoderFFmpegHW(VideoDecoderFFmpegHWPrivate &d);
private:
    VideoDecoderFFmpegHW();
};

} //namespace QtAV

#endif // QTAV_VIDEODECODERFFMPEGHW_H
