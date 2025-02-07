# c2_diffbot_diff_driver_controller

Differential driver controller

### ID
c2

### Description
A [ros2_control_demos](https://github.com/ros-controls/ros2_control_demos) used to demonstrate the [ros2_controllers](https://github.com/ros-controls/ros2_controllers) diff_driver_controller


![](../../../imgs/c2_diffbot_diff_driver_controller.svg)

## Reproduction Steps

```bash
Refer to https://github.com/robotperf/benchmarks/tree/main/benchmarks/control/c2_diffbot_diff_driver_controller and review the launch files to reproduce this package.
```

## Results

| Type | Hardware | Metric | Value | Category | Timestamp | Note | Data Source |
| --- | --- | --- | --- | --- | --- | --- | --- |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | Intel i7-12700H | latency | 10.04 | workstation | 08-07-2023 | mean 0.21 ms, rms 1.17 ms, max 10.04 ms, min 0.06 ms, lost 0.00%, update rate 10 Hz | [N/A](https://github.com/robotperf/rosbags/tree/main/N/A) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | Intel i7-12700H | power | 8.0799007415 | workstation | 08-07-2023 | mean 0.21 ms, rms 1.17 ms, max 10.04 ms, min 0.06 ms, lost 0.00%, update rate 10 Hz | [N/A](https://github.com/robotperf/rosbags/tree/main/N/A) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | Intel i5-13600K | latency | 0.44 | workstation | 08-07-2023 | mean 0.02, ms, rms 0.05 ms, max 0.44 ms, min 0.009 ms, lost 0.00%, update rate 10 Hz | [N/A](https://github.com/robotperf/rosbags/tree/main/N/A) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | Intel i5-13600K | power | 35.25370407104492 | workstation | 08-07-2023 | mean 0.02, ms, rms 0.05 ms, max 0.44 ms, min 0.009 ms, lost 0.00%, update rate 10 Hz | [N/A](https://github.com/robotperf/rosbags/tree/main/N/A) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | Intel i7-8700K | power | 5.6572113037109375 | workstation | 2023-07-20 14:24:25 | ✋ | [simulation](https://github.com/robotperf/rosbags/tree/main/simulation) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | Intel i7-8700K | throughput | 10.01 | workstation | 2023-07-20 14:27:59 | ✋mean_benchmark 10.0, rms_benchmark 10.0, max_benchmark 10.01, min_benchmark 9.99, lost messages 0.00 % | [simulation](https://github.com/robotperf/rosbags/tree/main/simulation) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | Intel i7-8700K | latency | 0.5223059999999999 | workstation | 2023-07-20 15:13:35 | ✋mean_benchmark 0.046601422222222216, rms_benchmark 0.05081720068490169, max_benchmark 0.5223059999999999, min_benchmark 0.01007, lost messages 0.00 % | [simulation](https://github.com/robotperf/rosbags/tree/main/simulation) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | NVIDIA AGX Orin Dev. Kit | latency | 1.534866 | edge | 2023-07-21 17:01:38 | ✋mean_benchmark 0.15251065737051792, rms_benchmark 0.17216160760621912, max_benchmark 1.534866, min_benchmark 0.053665000000000004, lost messages 0.00 % | [simulation](https://github.com/robotperf/rosbags/tree/main/simulation) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | NVIDIA AGX Orin Dev. Kit | power | 10.829459190368652 | edge | 2023-07-21 17:26:36 | ✋ | [simulation](https://github.com/robotperf/rosbags/tree/main/simulation) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | NVIDIA AGX Orin Dev. Kit | throughput | 10.03 | edge | 2023-07-21 17:50:39 | ✋mean_benchmark 10.0, rms_benchmark 10.0, max_benchmark 10.03, min_benchmark 9.97, lost messages 0.00 % | [simulation](https://github.com/robotperf/rosbags/tree/main/simulation) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | NVIDIA Jetson Nano | power | 0.0 | edge | 2023-07-24 08:10:48 | ✋ | [simulation](https://github.com/robotperf/rosbags/tree/main/simulation) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | NVIDIA Jetson Nano | latency | 2.604661 | edge | 2023-07-24 08:13:14 | ✋mean_benchmark 0.15753297540983607, rms_benchmark 0.3083908127742882, max_benchmark 2.604661, min_benchmark 0.053334999999999994, lost messages 0.00 % | [simulation](https://github.com/robotperf/rosbags/tree/main/simulation) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | NVIDIA Jetson Nano | throughput | 10.19 | edge | 2023-07-24 08:15:37 | ✋mean_benchmark 10.0, rms_benchmark 10.0, max_benchmark 10.19, min_benchmark 9.82, lost messages 0.00 % | [simulation](https://github.com/robotperf/rosbags/tree/main/simulation) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | Kria KV260 | latency | 8.686646000000001 | edge | 2023-07-24 21:37:32 | ✋mean_benchmark 0.1016960552016985, rms_benchmark 0.40903048302745487, max_benchmark 8.686646000000001, min_benchmark 0.07356, lost messages 0.00 % | [simulation](https://github.com/robotperf/rosbags/tree/main/simulation) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | Kria KV260 | power | 3.5199999809265137 | edge | 2023-07-24 21:39:51 | ✋ | [simulation](https://github.com/robotperf/rosbags/tree/main/simulation) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | Kria KV260 | throughput | 10.01 | edge | 2023-07-24 21:42:14 | ✋mean_benchmark 10.0, rms_benchmark 10.0, max_benchmark 10.01, min_benchmark 9.99, lost messages 0.00 % | [simulation](https://github.com/robotperf/rosbags/tree/main/simulation) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | Kria KR260 | latency | 8.048019 | edge | 2023-07-24 22:39:37 | ✋mean_benchmark 0.09961544008264464, rms_benchmark 0.37533319744221433, max_benchmark 8.048019, min_benchmark 0.073131, lost messages 0.00 % | [simulation](https://github.com/robotperf/rosbags/tree/main/simulation) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | Kria KR260 | power | 3.740000009536743 | edge | 2023-07-24 22:42:01 | ✋ | [simulation](https://github.com/robotperf/rosbags/tree/main/simulation) |
| [:white_circle:](https://github.com/robotperf/benchmarks/blob/main/benchmarks/README.md#type) | Kria KR260 | throughput | 10.0 | edge | 2023-07-24 22:44:25 | ✋mean_benchmark 10.0, rms_benchmark 10.0, max_benchmark 10.0, min_benchmark 10.0, lost messages 0.00 % | [simulation](https://github.com/robotperf/rosbags/tree/main/simulation) |

