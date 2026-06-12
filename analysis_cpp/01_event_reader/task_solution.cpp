#include <fstream>
#include <iostream>
#include <string>
#include <vector>

struct FourVector {
    double energy;
    double px;
    double py;
    double pz;
};

struct Particle {
    int pid;
    double charge;
    FourVector p;
};

struct Event {
    int id = 0;
    std::vector<Particle> particles;
    Particle photon;
    bool has_photon = false;
};

Particle read_particle(std::ifstream& input) {
    Particle p;
    input >> p.pid >> p.charge >> p.p.energy >> p.p.px >> p.p.py >> p.p.pz;
    return p;
}

int main() {
    std::ifstream input("small_examples/events.txt");

    if (!input) {
        std::cout << "Could not open input file\n";
        return 1;
    }

    std::string tag;
    Event ev;

    int n_events = 0;
    int n_particles = 0;
    int n_photons = 0;
    int missing_photon = 0;

    while (input >> tag) {
        if (tag == "event") {
            ev = Event{};
            input >> ev.id;
        } else if (tag == "particle") {
            Particle p = read_particle(input);
            ev.particles.push_back(p);
        } else if (tag == "photon") {
            ev.photon = read_particle(input);
            ev.has_photon = true;
        } else if (tag == "end") {
            n_events++;
            n_particles += ev.particles.size();

            if (ev.has_photon) {
                n_photons++;
            } else {
                missing_photon++;
            }
        }
    }

    std::cout << "events = " << n_events << "\n";
    std::cout << "particles = " << n_particles << "\n";
    std::cout << "photons = " << n_photons << "\n";
    std::cout << "missing_photon = " << missing_photon << "\n";

    return 0;
}
