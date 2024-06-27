#include <iostream>
#include <string>
class Vehicle {
protected:
    std::string make;
    std::string model;
    int year;

public:
    Vehicle(const std::string& mk, const std::string& mdl, int yr)
        : make(mk), model(mdl), year(yr) {}
    void setMake(const std::string& mk) { make = mk; }
    std::string getMake() const { return make; }

    void setModel(const std::string& mdl) { model = mdl; }
    std::string getModel() const { return model; }

    void setYear(int yr) { year = yr; }
    int getYear() const { return year; }
};
class Car : public Vehicle {
private:
    int seatingCapacity;
    std::string fuelType;

public:
    Car(const std::string& mk, const std::string& mdl, int yr, int seatCap, const std::string& fuel)
        : Vehicle(mk, mdl, yr), seatingCapacity(seatCap), fuelType(fuel) {}
    void setSeatingCapacity(int seatCap) { seatingCapacity = seatCap; }
    int getSeatingCapacity() const { return seatingCapacity; }

    void setFuelType(const std::string& fuel) { fuelType = fuel; }
    std::string getFuelType() const { return fuelType; }
};
class Truck : public Vehicle {
private:
    double payloadCapacity;
    double towingCapacity;

public:
    Truck(const std::string& mk, const std::string& mdl, int yr, double payloadCap, double towingCap)
        : Vehicle(mk, mdl, yr), payloadCapacity(payloadCap), towingCapacity(towingCap) {}
    void setPayloadCapacity(double payloadCap) { payloadCapacity = payloadCap; }
    double getPayloadCapacity() const { return payloadCapacity; }

    void setTowingCapacity(double towingCap) { towingCapacity = towingCap; }
    double getTowingCapacity() const { return towingCapacity; }
};

int main() {
    Car car("Toyota", "Camry", 2020, 5, "Petrol");
    std::cout << "Car Make: " << car.getMake() << std::endl;
    std::cout << "Car Model: " << car.getModel() << std::endl;
    std::cout << "Car Year: " << car.getYear() << std::endl;
    std::cout << "Car Seating Capacity: " << car.getSeatingCapacity() << std::endl;
    std::cout << "Car Fuel Type: " << car.getFuelType() << std::endl;
    Truck truck("Ford", "F-150", 2020, 3000.5, 7500.3);
    std::cout << "Truck Make: " << truck.getMake() << std::endl;
    std::cout << "Truck Model: " << truck.getModel() << std::endl;
    std::cout << "Truck Year: " << truck.getYear() << std::endl;
    std::cout << "Truck Payload Capacity: " << truck.getPayloadCapacity() << " lbs" << std::endl;
    std::cout << "Truck Towing Capacity: " << truck.getTowingCapacity() << " lbs" << std::endl;

    return 0;
}
