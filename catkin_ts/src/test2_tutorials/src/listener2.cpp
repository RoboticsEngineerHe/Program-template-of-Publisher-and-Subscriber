#include "ros/ros.h"
#include "std_msgs/String.h"

void chatter2Callback(const std_msgs::String::ConstPtr& msg)
{
ROS_INFO("I heard: [%s]", msg->data.c_str());
}

int main(int argc,char **argv)
{


ros::init(argc, argv, "listener2");

ros::NodeHandle n;

ros::Subscriber sub =n.subscribe("chatter2",1000,chatter2Callback);

ros::spin();

return 0;

}
