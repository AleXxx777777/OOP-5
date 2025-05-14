#pragma once
#include <iostream>
#include <string>

class Transport {
private:
    std::string speed;
    std::string price;
    void build();
    void destroy();
public:
    Transport();
    virtual ~Transport();
};

class Ship : virtual public Transport {
public:
    Ship();
    virtual ~Ship();
};

class Plane : virtual public Transport {
public:
    Plane();
    virtual ~Plane();
};

class Car : virtual public Transport {
public:
    Car();
    virtual ~Car();
};

class Amphibia : public Ship, public Car {
public:
    Amphibia();
    virtual ~Amphibia();
};

class PlaneAmphibia : public Ship, public Plane, public Car {
public:
    PlaneAmphibia();
    virtual ~PlaneAmphibia();
};
