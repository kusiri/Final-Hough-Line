#include <ros/ros.h>
#include<iostream>
#include<sensor_msgs/Point.h>

int main(int argc,char** argv){
  ros::init(argc, argv,"publisher");
  ros::NodeHandle nh;

  ros::Publisher img_raw = nh.advertise<sensor_msgs::Point>("point", 10);

  ros::Rate rate(1.0);

  while (ros::ok()) {
   sensor_msgs::Point point;
   point.x = 6.0;
   point.y = 18.0;
   point.z = -21.5;

   img_raw.publish(point);

    rate.sleep();
  }


  return 0;
}
