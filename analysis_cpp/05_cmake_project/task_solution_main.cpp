#include "task_solution_analysis.hpp"

int main() {
    Summary s = make_summary("toy", "small_examples/rhos.txt");
    write_summary(s, "outputs/summary_task.txt");

    return 0;
}
