/*
   @@@@@@@@@@@@@@@@@@@@
   @@@@@@@@@&@@@&&@@@@@
   @@@@@ @@  @@    @@@@
   @@@@@ @@  @@    @@@@
   @@@@@ @@  @@    @@@@ Copyright (c) 2023, Acceleration Robotics®
   @@@@@ @@  @@    @@@@ Author: Víctor Mayoral Vilches <victor@accelerationrobotics.com>
   @@@@@ @@  @@    @@@@ Author: Alejandra Martínez Fariña <alex@accelerationrobotics.com>
   @@@@@@@@@&@@@@@@@@@@
   @@@@@@@@@@@@@@@@@@@@

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. 
*/

#ifndef ROBOTPERF_DISPARITY_INPUT_COMPONENT_HPP_
#define ROBOTPERF_DISPARITY_INPUT_COMPONENT_HPP_

#include <ament_index_cpp/get_resource.hpp>
#include <rclcpp/rclcpp.hpp>
#include <image_transport/image_transport.hpp>
#include <stereo_msgs/msg/disparity_image.hpp>

namespace robotperf
{

namespace perception
{

class DisparityInputComponent
  : public rclcpp::Node
{
public:
  explicit DisparityInputComponent(const rclcpp::NodeOptions &);

protected:
  // Create subscriber to Disparity image with callback function
  rclcpp::Subscription<stereo_msgs::msg::DisparityImage>::SharedPtr sub_disparity_;
  rclcpp::Publisher<stereo_msgs::msg::DisparityImage>::SharedPtr pub_disparity_;


  size_t get_msg_size(stereo_msgs::msg::DisparityImage::ConstSharedPtr disparity_msg);
  
  void disparityCb(const stereo_msgs::msg::DisparityImage::SharedPtr disparity_msg);
};

}  // namespace perception

}  // namespace robotperf

#endif  // ROBOTPER_AIAMOUTPUTPUT_COMPONENT_HPP_