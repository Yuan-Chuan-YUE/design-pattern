#include <memory>
#include <iostream>

#include "Observer/current_conditions_display.h"
#include "Subject/weather_data.h"

void CurrentConditionsDisplay::setSubject(std::shared_ptr<WeatherData> weatherData){
    this->weatherData = weatherData;
    weatherData->registerOberver(this->shared_from_this());
}

void CurrentConditionsDisplay::update(float temp, float humi, float press){
    this->temperature = temp;
    this->humidity = humi;
    this->display();
}

void CurrentConditionsDisplay::display(){
    std::cout << "Current conditions: " << this->temperature << "C degrees and " << this->humidity << "\% humidity\n";
}
