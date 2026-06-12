#pragma once

#include <string>

struct Summary {
    std::string sample;
    int events;
    int zero;
    int side;
    double Rzero;
};

Summary make_summary(const std::string& sample, const std::string& input_path);
void write_summary(const Summary& s, const std::string& output_path);
