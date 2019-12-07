#include <iostream>
#include "handshake.hpp"
#include "place_fleet.hpp"
#include "attack.hpp"
#include "deserializer.hpp"
#include <windows.h>

int main() {

    Command* handshake = new Handshake("SecondPlayer.in", "Team2.0");
    handshake->save();
    Sleep(3000);
    auto handshake_out = new Deserializer("SecondPlayer.out");
    const std:: string& token = handshake_out->getToken();
    Sleep(3000);
    Command* place_fleet = new PlaceFleet("SecondPlayer.in", token);
    place_fleet->save();
    Sleep(5000);
    auto place_fleet_out = new Deserializer("SecondPlayer.not");
    while(true) {
        if (place_fleet_out->getNotification() == "YOUR TURN") {
            Command* attack = new Attack("SecondPlayer.in", token);
            attack->save();
        }
    }
}
