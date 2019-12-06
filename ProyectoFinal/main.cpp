#include <iostream>
#include "handshake.hpp"
#include "place_fleet.hpp"
#include "attack.hpp"
#include "deserializer.hpp"

int main() {

    Command* handshake = new Handshake("FirstPlayer.in", "Team1.0");
    handshake->save();
    Deserializer* deserializer = new Deserializer("FirstPlayer.out");
    std:: string token = deserializer->getToken();

    Command* place_fleet = new PlaceFleet("PlaceFleet.in", token, "A", "B", "1", "H");
    if (deserializer->getStatus() == "ACCEPTED") {
        place_fleet->save();
    }

    Command* attack = new Attack("Attack.in", token, "B", "3");
    attack->save();


    delete handshake;
    delete place_fleet;
    delete attack;
    return 0;
}
