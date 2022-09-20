#include "Subject/weather_data.h"

class Observer;

WeatherData::WeatherData(){
    temperature = 0.0;
    humidity = 0.0;
    pressure = 0.0;
}

int WeatherData::currentObserversCount(){
    return observers.size();
}

void WeatherData::registerOberver(const std::shared_ptr<Observer> ob){
    observers.push_back(ob);
}

void WeatherData::removeObserver(const std::shared_ptr<Observer> ob){
    
    for(auto iter = observers.begin();iter != observers.end(); ++iter){
        if((iter->lock()).get() == ob.get()){
            observers.erase(iter);
            break;
        }
    }
}

void WeatherData::notifyObservers(){
    for(auto iter = observers.begin(); iter != observers.end(); ++iter){
        (iter->lock())->update(temperature, humidity, pressure);
    }
}

void WeatherData::measurementsChanged(){
    this->notifyObservers();
}

void WeatherData::setMeasurements(float temp, float humi, float press){
    this->temperature = temp;
    this->humidity = humi;
    this->pressure = press;
    this->measurementsChanged();
}
