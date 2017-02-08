#include <ros/ros.h>
//using namespace std;

int main (int argc, char**argv)
{

ros::init(argc,argv,"Hello_ROS");

ros::NodeHandle nh;

ROS_INFO_STREAM("Hello_ROS!");

return 0;
}
