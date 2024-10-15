#include "clock.h"
#include <iostream>
#include <chrono>

Clock::Clock()
{
    hour = 0;
    minute = 0;
    second = 0;
}
 
Clock::~Clock()
{
    hour = 0;
    minute = 0;
    second = 0;

}
int Clock::get_seconds()
{
    return second;
}
int Clock::get_minutes()
{
    return minute;
}
int Clock::get_hours()
{
    return hour;
}
void Clock::set_seconds(int s)
{
    if (s < 60){
        second = s;
    }
    
}
void Clock::set_minutes(int m)
{
    if (m < 60){
        minute = m;
    }
}
void Clock::set_hours(int h)
{
    if (h <= 12){
        hour = h;
    }
}
void Clock::display()
{
    std::cout << hour << ':' << minute << ':' << second << std::endl;
}
void Clock::tick()
{

}
void Clock::sync()
{
    using std::chrono::system_clock;
    // system_clock::time_point today = system_clock::now();
    // std::time_t tt;
    // tt = system_clock::to_time_t(today);
    // std::cout << "Time: " << ctime(&tt); 
    // system_clock::duration dur = tt;

    auto now = std::chrono::system_clock::now();

    // Convert to duration since epoch
    auto duration_since_epoch = now.time_since_epoch();

    // Output the duration in seconds
    auto seconds = std::chrono::duration_cast<std::chrono::seconds>(duration_since_epoch).count();
    std::cout << "Seconds since epoch: " << seconds << std::endl;
    hour = (seconds/(60 * 60));
    std::cout << "Hour: " << hour << std::endl;
    

}