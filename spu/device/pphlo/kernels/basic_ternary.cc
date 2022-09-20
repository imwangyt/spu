// Copyright 2022 Ant Group Co., Ltd.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "spu/device/pphlo/kernels/basic_ternary.h"

#include "spu/hal/polymorphic.h"

namespace spu::device::pphlo::kernel {

hal::Value Select(HalContext *ctx, const hal::Value &pred,
                  const hal::Value &on_true, const hal::Value &on_false) {
  return hal::select(ctx, pred, on_true, on_false);
}

hal::Value Clamp(HalContext *ctx, const hal::Value &operand,
                 const hal::Value &min, const hal::Value &max) {
  return hal::clamp(ctx, min, operand, max);
}
} // namespace spu::device::pphlo::kernel