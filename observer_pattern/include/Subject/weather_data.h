#ifndef WEATHER_DATA_H
#define WEATHER_DATA_H

#include <list>
#include <memory>

#include "Subject/subject.h"
#include "Observer/observer.h"

class WeatherData : public Subject {
    private:
        std::list<std::weak_ptr<Observer>> observers;
        float temperature;
        float humidity;
        float pressure;

    public:
        WeatherData();
        void registerOberver(const std::shared_ptr<Observer> ob) final;
        void removeObserver(const std::shared_ptr<Observer> ob) final;
        void notifyObservers() final;
        void measurementsChanged();
        void setMeasurements(float tmp, float humi, float press);
        int currentObserversCount();
        ~WeatherData() = default;
};

#endif
