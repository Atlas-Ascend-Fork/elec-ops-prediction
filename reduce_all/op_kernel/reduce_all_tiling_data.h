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

namespace optiling {

// 常量定义
constexpr uint32_t BUFFER_NUM = 2;          // double buffer
// constexpr uint32_t UB_BUFFER_FACTOR = 4;    // UB布局 每个元素 input 占一个字节，开double buffer  workBuffer 占两个字节
constexpr uint32_t UB_BUFFER_FACTOR = 6;    // UB布局 每个元素 input 占一个字节，开double buffer  workBuffer 占两个字节   tmpBuffer 占两个字节
constexpr uint32_t FIXED_EXPENSES = 128;    // 固定开销 128 字节
constexpr uint32_t MIN_TILE_SIZE = 256;     // 最小 tile 大小 256 字节
constexpr uint32_t BLOCK_SIZE = 32;         // dataBlock 32 字节对齐
constexpr uint32_t MAX_DIMS = 8;            // 最大支持 8 维规约

// 规约模式
constexpr uint32_t MODE_FULL_REDUCE = 0;
constexpr uint32_t MODE_KR = 1;
constexpr uint32_t MODE_RK = 2;
constexpr uint32_t MODE_RKR = 3;
constexpr uint32_t MODE_KRK = 4;
constexpr uint32_t MODE_GENERAL = 5;

struct ReduceAllTilingData {
    uint64_t totalInputSize;
    uint64_t totalOutputSize;
    uint64_t workGmSize;
    uint32_t fusedDimCount;
    uint32_t reduceMode;
    uint32_t ubSize;
    uint32_t tileSize;
    uint32_t coreNum;
    uint64_t elementsPerCore;
    uint32_t largeCoreCount;
    uint32_t fusedDims[MAX_DIMS];
    uint32_t fusedAxes[MAX_DIMS];
    uint32_t inputStrides[MAX_DIMS];
    uint32_t outputStrides[MAX_DIMS];
};

}

#endif  // REDUCE_ALL_TILING_DATA_H_