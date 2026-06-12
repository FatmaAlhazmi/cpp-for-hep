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

FourVector add(FourVector a, FourVector b) {
    FourVector c;
    c.energy = a.energy + b.energy;
    c.px = a.px + b.px;
    c.py = a.py + b.py;
    c.pz = a.pz + b.pz;
    return c;
}

double dot(FourVector a, FourVector b) {
    return a.energy*b.energy - a.px*b.px - a.py*b.py - a.pz*b.pz;
}

double xg(Particle photon, double sqrts) {
    return 2.0*photon.p.energy/sqrts;
}

int main() {
    std::ifstream input("small_examples/events.txt");

    if (!input) {
        std::cout << "Could not open input file\n";
        return 1;
    }

    const double sqrts = 240.0;

    std::string tag;
    Event ev;

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
            if (ev.has_photon && ev.particles.size() >= 2) {
                FourVector pair = add(ev.particles[0].p, ev.particles[1].p);
                double pair_m2 = dot(pair, pair);

                double photon_pt2 = ev.photon.p.px*ev.photon.p.px
                                  + ev.photon.p.py*ev.photon.p.py;

                std::cout << "event " << ev.id
                          << " xg = " << xg(ev.photon, sqrts)
                          << " pair_m2 = " << pair_m2
                          << " photon_pt2 = " << photon_pt2 << "\n";
            }
        }
    }

    return 0;
}
