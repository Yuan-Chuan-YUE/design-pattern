#include <iostream>
#include <memory>

#include "Subject/weather_data.h"
#include "Observer/current_conditions_display.h"

int main(int argc, const char ** argv){
    std::shared_ptr<WeatherData> weatherData = std::make_shared<WeatherData>();
    std::shared_ptr<CurrentConditionsDisplay> ccd = std::make_shared<CurrentConditionsDisplay>();
    ccd->setSubject(weatherData);
    weatherData->setMeasurements(26.5, 30, 100);
    weatherData->removeObserver(ccd);

    std::cout << "current observers count: " << weatherData->currentObserversCount() << std::endl;
    return 0;
}
