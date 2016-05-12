#ifndef TEMPERATURMEASUREMENT_H_
#define TEMPERATURMEASUREMENT_H_

class TemperaturMeasurement {

private:
    double value;

public:
    static const double k_cons;
    static const double f_cons_mult;
    static const double f_cons_add;

    TemperaturMeasurement();
    TemperaturMeasurement(double val);
    ~TemperaturMeasurement();

    double getTemperature();

    static double toCelsius(TemperaturMeasurement& tm);
    static double toFahrenheit(TemperaturMeasurement& tm);
    static double toKelvin(TemperaturMeasurement& tm);
};

#endif /* TEMPERATURMEASUREMENT_H_ */
