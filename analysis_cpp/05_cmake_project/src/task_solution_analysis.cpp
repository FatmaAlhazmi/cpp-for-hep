#include "task_solution_analysis.hpp"

#include <fstream>

Summary make_summary(const std::string& sample, const std::string& input_path) {
    std::ifstream input(input_path);

    Summary s;
    s.sample = sample;
    s.events = 0;
    s.zero = 0;
    s.side = 0;
    s.outside = 0;
    s.Rzero = 0.0;

    double rho = 0.0;

    while (input >> rho) {
        s.events++;

        if (rho < 10.0) {
            s.zero++;
        } else if (rho >= 30.0 && rho < 100.0) {
            s.side++;
        } else {
            s.outside++;
        }
    }

    if (s.side > 0) {
        s.Rzero = static_cast<double>(s.zero) / s.side;
    }

    return s;
}

void write_summary(const Summary& s, const std::string& output_path) {
    std::ofstream output(output_path);

    output << "sample events zero side outside Rzero\n";
    output << s.sample << " " << s.events << " " << s.zero << " "
           << s.side << " " << s.outside << " " << s.Rzero << "\n";
}
