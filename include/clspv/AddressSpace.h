// Copyright 2017 The Clspv Authors. All rights reserved.
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

namespace clspv {
namespace AddressSpace {
enum Type {
  Private = 0,       // OpenCL private memory.
  Global,            // OpenCL global memory.
  Constant,          // OpenCL constant memory.
  Local,             // OpenCL local memory.
  Input,             // Vulkan input memory.
  UniformConstant,   // Vulkan uniform memory.
  ModuleScopePrivate // Vulkan private memory.
};
}
}