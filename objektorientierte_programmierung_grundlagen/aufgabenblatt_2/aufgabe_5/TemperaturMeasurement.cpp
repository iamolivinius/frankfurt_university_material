#include "TemperaturMeasurement.h"

TemperaturMeasurement::TemperaturMeasurement() {
    value = 0.0;
}

TemperaturMeasurement::TemperaturMeasurement(double val) {
    value = val;
}

TemperaturMeasurement::~TemperaturMeasurement() {

}

const double TemperaturMeasurement::k_cons = 273.15;
const double TemperaturMeasurement::f_cons_mult = 1.8;
const double TemperaturMeasurement::f_cons_add = 32;

double TemperaturMeasurement::getTemperature() {
    return value;
}

double TemperaturMeasurement::toCelsius(TemperaturMeasurement& tm) {
    return tm.getTemperature() - k_cons;
}

double TemperaturMeasurement::toFahrenheit(TemperaturMeasurement& tm) {
    return (tm.getTemperature() - k_cons) * f_cons_mult + f_cons_add;
}

double TemperaturMeasurement::toKelvin(TemperaturMeasurement& tm) {
    return tm.getTemperature();
}
