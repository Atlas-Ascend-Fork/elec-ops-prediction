<p align="center">
  <img src="https://img.shields.io/badge/CANN-OpenSoftware%202.0-blue" />
  <img src="https://img.shields.io/badge/Electrical%20Engineering%20SIG-CANN%20Community-orange" />
  <img src="https://img.shields.io/badge/license-Apache%202.0-green" />
  <img src="https://img.shields.io/badge/status-active-brightgreen" />
</p>

> **elec-ops-prediction** 是 CANN 社区 Electrical Engineering SIG（电力行业兴趣小组）旗下的电力负荷预测算子库，
> 聚焦于电力系统运行、调度、规划与市场交易中的预测核心需求，面向华为昇腾（Ascend）硬件平台进行深度优化。

---

## 项目背景

电力负荷预测是电力系统运行调度和规划的核心基础技术。随着新能源高渗透率的持续提升，传统方法在面对复杂时序模式时存在"**算不了、算得慢、算不准**"的瓶颈。

本仓库通过在昇腾 CANN 平台上提供专用优化算子，使电力 AI 预测模型具备以下能力：

- **电网物理约束实时计算**：内嵌物理约束，保障模型输出的工程可解释性
- **新能源出力特征提取**：应对风光出力的强波动性与不确定性
- **长时序负荷稳定性约束**：满足电力系统对时序一致性的严格要求




## 核心算子列表

| 算子名称                    | 场景     | 描述               | 状态     |
| ----------------------- | ------ | ---------------- | ------ |
| `ReduceAll`             | 数学计算算子 | 对任意轴上的规约方式做了性能优化 | ✅ 已发布  |
| `TemporalStabilityLoss` | 长时序预测  | 长时序负荷稳定性约束损失算子   | 🚧 开发中 |


---

## 🤝 参与贡献

欢迎所有对电力 AI 和昇腾开发感兴趣的开发者参与共建！贡献方式：

1. 提交 Issue 反馈问题或建议
2. Fork 本仓库并提交 Pull Request
3. 参与 Electrical Engineering SIG 定期研讨会
4. 完善文档与示例

贡献规范请参考 [`CONTRIBUTING.md`]()。

---

## 👥 维护团队

**Maintainers**

|姓名|GitCode ID|单位|
|---|---|---|
|梁寿愚|@jason2025|南方电网人工智能研究中心|
|陆璐|@Lulu_scut|华南理工大学|
|陈辰|@xchencehn|杭州天宽科技|
|张玉橙|@Splendid2025|昇腾产品线|
|田野|@tianye525|AI算力基础设施|

**Committers**

|姓名|GitCode ID|单位|
|---|---|---|
|余涛|@yutao_scut|华南理工大学电力学院|
|刘迪|@weixin_34344963|清华大学电机系|
|江豪|@yhyyyl|华南理工大学 / 南方电网联培|
|陈昀|@edconeone|华南理工大学|
|莫程翔|@Andrewmo1|华为公司|
|李博|@gcw_FHrfwZBn|华为公司|

---

## 📄 许可证

本项目基于 [Apache License 2.0]() 开源，基于 **CANN OpenSoftware 2.0**。
