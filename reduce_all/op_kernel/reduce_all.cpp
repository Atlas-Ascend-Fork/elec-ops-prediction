// Copyright 2026 Electrical Engineering SIG - CANN Community
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

using namespace optiling;

template <uint32_t schMode>
__global__ __aicore__ void reduce_all(GM_ADDR self, GM_ADDR out, GM_ADDR workspace, GM_ADDR tiling)
{
    REGISTER_TILING_DEFAULT(ReduceAllTilingData);
    GET_TILING_DATA_WITH_STRUCT(ReduceAllTilingData, tilingData, tiling);

    NsReduceAll::KernelReduceAll op;
    op.Init(self, out, workspace, &tilingData);
    op.Process();
}