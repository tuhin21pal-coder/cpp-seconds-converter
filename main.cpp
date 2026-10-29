#include <iostream>
#include <string>

int main(){
    int timeSec;
    std::cout<<"Enter the time in seconds : ";
    std::cin>>timeSec;
    if(timeSec<0 || timeSec>86400){
        std::cout<<"Invalid time.";
        return 0;
    }
    int hour = timeSec/3600;
    int minute = (timeSec%3600)/60;
    int sec = timeSec%60;

    std::cout<<"1.24 hours format."<<'\n';
    std::cout<<"2.12 hours format."<<'\n'<<'\n';
    int choice;
    std::cout<<"Enter your choice : ";
    std::cin>>choice;
    switch(choice){
        case 1: {
            if(hour == 24){
                hour =0;
            }
            std::cout<<hour<<" hours "<<minute<<" minutes "<<sec<<" seconds ";
            break;
        }
        case 2: {
            std::string period;
            if(hour > 12 && hour != 24){
                hour = hour -12;
                period = "PM";
            }
            else if(hour == 24 || hour == 0){
                hour = 12;
                period = "AM";
            }
            else if(hour == 12){
                period = "PM";
            }
            else{
                period = "AM";
            }
            std::cout<<hour<<" hours "<<minute<<" minutes "<<sec<<" seconds "<<period;
            break;
        }
        default:
            std::cout<<"Invalid option.";
    }
    return 0;
}