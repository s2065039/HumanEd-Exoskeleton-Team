// Copyright 2020 Josh Pieper, jjp@pobox.com.
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

#include <array>
#include <cstdint>

#include "mjlib/base/visitor.h"

namespace fw {

struct GitInfo {
  GitInfo();

  std::array<uint8_t, 20> hash = {{}};
  bool dirty = false;

  template <typename Archive>
  void Serialize(Archive* a) {
    a->Visit(MJ_NVP(hash));
    a->Visit(MJ_NVP(dirty));
  }
};

extern char kGitHash[41];
extern char kGitDirty[10];

}
