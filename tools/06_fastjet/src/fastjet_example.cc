#include <fastjet/ClusterSequence.hh>

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::ifstream input("small_examples/particles.txt");

    if (!input) {
        std::cout << "Could not open input file\n";
        return 1;
    }

    std::vector<fastjet::PseudoJet> particles;

    double px = 0.0;
    double py = 0.0;
    double pz = 0.0;
    double E = 0.0;

    std::string first;

    while (input >> first) {
        if (first == "#") {
            std::string rest;
            std::getline(input, rest);
            continue;
        }

        px = std::stod(first);
        input >> py >> pz >> E;

        particles.push_back(fastjet::PseudoJet(px, py, pz, E));
    }

    double R = 0.4;

    fastjet::JetDefinition jet_def(fastjet::antikt_algorithm, R);
    fastjet::ClusterSequence cs(particles, jet_def);

    std::vector<fastjet::PseudoJet> jets = fastjet::sorted_by_pt(cs.inclusive_jets(1.0));

    std::cout << "jets = " << jets.size() << "\n";

    for (std::size_t i = 0; i < jets.size(); ++i) {
        std::cout << "jet " << i + 1
                  << " pt = " << jets[i].pt()
                  << " E = " << jets[i].E()
                  << "\n";
    }

    return 0;
}
