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

namespace ops {

class ReduceAll : public OpDef {
public:
    explicit ReduceAll(const char* name) : OpDef(name)
    {
        // ========== 输入定义 ==========
        
        // 输入0: self - 布尔张量
        this->Input("self")
            .ParamType(REQUIRED)
            .DataType({ge::DT_BOOL, ge::DT_INT8})
            .Format({ge::FORMAT_ND, ge::FORMAT_ND})
            .UnknownShapeFormat({ge::FORMAT_ND, ge::FORMAT_ND})
            .AutoContiguous();

        // this->Input("axes")
        //     .ParamType(REQUIRED)
        //     .DataType({ge::DT_INT64})
        //     .Format({ge::FORMAT_ND})
        //     .UnknownShapeFormat({ge::FORMAT_ND})
        //     .AutoContiguous()
        //     .ValueDepend(REQUIRED);

        // ========== 输出定义 ==========
        
        // 输出: out - 归约结果
        this->Output("out")
            .ParamType(REQUIRED)
            .DataType({ge::DT_BOOL, ge::DT_INT8})
            .Format({ge::FORMAT_ND, ge::FORMAT_ND})
            .UnknownShapeFormat({ge::FORMAT_ND, ge::FORMAT_ND})
            .AutoContiguous();

        // ========== 属性定义 ==========
        // 属性: dim - 指定归约的轴 (对应 aclIntArray)
        this->Attr("dim")
            .AttrType(OPTIONAL)
            .ListInt({});
        
        // 属性: keepdim - 是否保留归约后的维度
        this->Attr("keepdim")
            .AttrType(OPTIONAL)
            .Bool(false);  // 默认值为 false

        // ========== AI Core 配置 ==========
        this->AICore().AddConfig("ascend910b");
    }
};

OP_ADD(ReduceAll);

} // namespace ops
