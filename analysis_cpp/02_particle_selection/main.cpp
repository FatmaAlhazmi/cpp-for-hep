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

bool is_charged(Particle p) {
    return p.charge != 0;
}

bool is_muon(Particle p) {
    return p.pid == 13 || p.pid == -13;
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
    int n_charged = 0;
    int n_muons = 0;
    int n_photons = 0;

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

            if (ev.has_photon) {
                n_photons++;
            }

            for (Particle p : ev.particles) {
                if (is_charged(p)) {
                    n_charged++;
                }

                if (is_muon(p)) {
                    n_muons++;
                }
            }
        }
    }

    std::cout << "events = " << n_events << "\n";
    std::cout << "charged_particles = " << n_charged << "\n";
    std::cout << "muons = " << n_muons << "\n";
    std::cout << "photons = " << n_photons << "\n";

    return 0;
}
