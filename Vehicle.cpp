#include "Vehicle.h"

// ==== Transport ====
Transport::Transport() {
    speed = "100 км/год";
    price = "50000$";
    build();
}

Transport::~Transport() {
    destroy();
}

void Transport::build() {
    std::cout << "Створено транспорт:\nШвидкість: " << speed << "\nЦіна: " << price << "\n";
}

void Transport::destroy() {
    std::cout << "Знищено транспорт:\nШвидкість: " << speed << "\nЦіна: " << price << "\n";
}

// ==== Ship ====
Ship::Ship() {
    std::cout << "Додано корабель\n";
}
Ship::~Ship() {
    std::cout << "Видалено корабель\n";
}

// ==== Plane ====
Plane::Plane() {
    std::cout << "Додано літак\n";
}
Plane::~Plane() {
    std::cout << "Видалено літак\n";
}

// ==== Car ====
Car::Car() {
    std::cout << "Додано автомобіль\n";
}
Car::~Car() {
    std::cout << "Видалено автомобіль\n";
}

// ==== Amphibia ====
Amphibia::Amphibia() {
    std::cout << "Додано амфібію\n";
}
Amphibia::~Amphibia() {
    std::cout << "Видалено амфібію\n";
}

// ==== PlaneAmphibia ====
PlaneAmphibia::PlaneAmphibia() {
    std::cout << "Додано літаючу амфібію\n";
}
PlaneAmphibia::~PlaneAmphibia() {
    std::cout << "Видалено літаючу амфібію\n";
}
