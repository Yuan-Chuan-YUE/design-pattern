#ifndef CURRENT_CONDITIONS_DISPLAY_H
#define CURRENT_CONDITIONS_DISPLAY_H

#include <memory>

#include "Observer/observer.h"
#include "Subject/weather_data.h"

class CurrentConditionsDisplay : public Observer{
    private:
        float temperature;
        float humidity;
        std::shared_ptr<WeatherData> weatherData;

    public:
        CurrentConditionsDisplay() = default;
        void update(float temp, float humi, float press) final;
        void setSubject(std::shared_ptr<WeatherData> weatherData);
        void display();
};

#endif
