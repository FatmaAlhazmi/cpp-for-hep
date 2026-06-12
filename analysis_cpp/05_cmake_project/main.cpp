#include "analysis.hpp"

int main() {
    Summary s = make_summary("toy", "small_examples/rhos.txt");
    write_summary(s, "outputs/summary.txt");

    return 0;
}
