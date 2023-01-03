#include "rclcpp/rclcpp.hpp"
#include "publisher_library/publisher_library.h"


int main(int argc, char ** argv)
{
  rclcpp::init(argc,argv);
  auto node = std::make_shared<PublisherLibrary>();
  RCLCPP_INFO(node->get_logger(), "My Use Publisher Library ROS2 node started");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
