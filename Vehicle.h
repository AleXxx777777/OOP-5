#pragma once
#include <iostream>
#pragma execution_character_set("utf-8")
using namespace std;

class Vehicle {
private:
    string drive_type;
    string cost;
    void create();
    void dismantle();
public:
    Vehicle();
    ~Vehicle();
};

class StringVehicle : virtual public Vehicle {
private:
    int doors;
    string transmission;
    string cost;
public:
    StringVehicle();
    ~StringVehicle();
};

class WindVehicle : virtual public Vehicle {
private:
    string engine;
    string transmission;
    string cost;
public:
    WindVehicle();
    ~WindVehicle();
};

class PercussionVehicle : virtual public Vehicle {
private:
    string body;
    string transmission;
    string cost;
public:
    PercussionVehicle();
    ~PercussionVehicle();
};

class HybridVehicle : public StringVehicle, public PercussionVehicle {
public:
    HybridVehicle();
    ~HybridVehicle();
};

class MultiVehicle : public StringVehicle, public WindVehicle, public PercussionVehicle {
public:
    MultiVehicle();
    ~MultiVehicle();
};