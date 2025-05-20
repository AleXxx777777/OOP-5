#include "Vehicle.h"

void Vehicle::create() {
    cout << "Assembled: Vehicle\n";
}

void Vehicle::dismantle() {
    cout << "Disassembled: Entire Vehicle\n";
}

Vehicle::Vehicle() {
    create();
}

Vehicle::~Vehicle() {
    dismantle();
}

StringVehicle::StringVehicle() {
    cost = "moderate";
    doors = 4;
    transmission = "manual";
    cout << "Has " << doors << " doors, " << transmission << " transmission and costs: " << cost << endl;
    cout << "That's a sedan car!\n";
}

StringVehicle::~StringVehicle() {
    cout << "Disassembled: doors, transmission, cost\n";
}

WindVehicle::WindVehicle() {
    cost = "high";
    engine = "turbo";
    transmission = "automatic";
    cout << "Uses " << engine << " engine, " << transmission << " transmission and costs: " << cost << endl;
    cout << "That's a sports car!\n";
}

WindVehicle::~WindVehicle() {
    cout << "Disassembled: engine, transmission, cost\n";
}

PercussionVehicle::PercussionVehicle() {
    cost = "low";
    body = "steel frame";
    transmission = "manual";
    cout << "Has " << body << " body, " << transmission << " transmission and costs: " << cost << endl;
    cout << "That's a truck!\n";
}

PercussionVehicle::~PercussionVehicle() {
    cout << "Disassembled: body, transmission, cost\n";
}

HybridVehicle::HybridVehicle() {
    cout << "A unique combination of sedan and truck features!\n";
}

HybridVehicle::~HybridVehicle() {
    cout << "Disassembled the hybrid vehicle\n";
}

MultiVehicle::MultiVehicle() {
    cout << "It combines sedan, sports car, and truck capabilities\n";
}

MultiVehicle::~MultiVehicle() {
    cout << "Disassembled the multi-vehicle\n";
}