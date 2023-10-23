#include "cappuccino.h"

Cappuccino::Cappuccino(): EspressoBased() {
    this->name = "Cappuccino";
    ingredients.push_back(new Espresso(2));
    ingredients.push_back(new Milk(2));
    ingredients.push_back(new MilkFoam(1));
}

Cappuccino::Cappuccino(const Cappuccino& cap) : EspressoBased(cap) {
    name = cap.name;
    for (const auto& i : cap.side_items) {
        side_items.push_back(i->clone());
    }
}

void Cappuccino::operator=(const Cappuccino &cap) {
    if (this == &cap){
        return;
    }

    for (const auto& i : side_items) {
        delete i;
    }
    side_items.clear();

    for(const auto& i : ingredients)
        delete i;
    ingredients.clear();

    for (const auto& i : cap.ingredients) {
        ingredients.push_back(i->clone());
    }

    for (const auto& i : cap.side_items) {
        side_items.push_back(i->clone());
    }

    name = cap.name;
}

std::string Cappuccino::get_name() {
    return this->name;
}

double Cappuccino::price() {
    double price = 0;

    for (const auto& i : ingredients) {
        price += i->price();
    }

    for (const auto& i : side_items) {
        price += i->price();
    }

    return price;
}

void Cappuccino::add_side_item(Ingredient *side) {
    side_items.push_back(side);
}

std::vector<Ingredient *> &Cappuccino::get_side_items() {
    return side_items;
}

void Cappuccino::brew() {
}

Cappuccino::~Cappuccino()
{
    for(const auto& i : side_items)
        delete i;
    side_items.clear();
}