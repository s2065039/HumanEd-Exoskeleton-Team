// Copyright 2014-2019 Josh Pieper, jjp@pobox.com.  All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <cmath>

#ifndef M_PI
#define M_PI (3.1415926535897932384626433832795028841971693993751058209)
#define M_PI_2 (1.5707963267948966)
#endif

namespace fw {

inline float WrapNegPiToPi(float value) {
  if (value >= static_cast<float>(-M_PI) &&
      value <= static_cast<float>(M_PI)) { return value; }
  if (value > 0.0f) {
    return std::fmod(value + static_cast<float>(M_PI),
                     static_cast<float>(2 * M_PI)) - static_cast<float>(M_PI);
  } else {
    return std::fmod(value - static_cast<float>(M_PI),
                     static_cast<float>(2 * M_PI)) + static_cast<float>(M_PI);
  }
}

inline float Radians(float value) {
  return static_cast<float>(M_PI) * value / 180.0f;
}

inline float Degrees(float value) {
  return 180.0f * value / static_cast<float>(M_PI);
}

}
