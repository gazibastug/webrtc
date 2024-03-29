/*
 *  Copyright 2016 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#include "api/media_types.h"

#include "api/media_stream_interface.h"
#include "rtc_base/checks.h"

namespace {
static const char* kMediaTypeData = "data";
}  // namespace

namespace cricket {

std::string MediaTypeToString(MediaType type) {
  switch (type) {
    case MEDIA_TYPE_AUDIO:
      return webrtc::MediaStreamTrackInterface::kAudioKind;
    case MEDIA_TYPE_VIDEO:
      return webrtc::MediaStreamTrackInterface::kVideoKind;
    case MEDIA_TYPE_DATA:
      return kMediaTypeData;
  }
  FATAL();
  // Not reachable; avoids compile warning.
  return "";
}

}  // namespace cricket
