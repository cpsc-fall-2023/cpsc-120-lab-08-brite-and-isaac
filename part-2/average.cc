// Brite Bartnek
// bbartnek@csu.fullerton.edu
// @RunningOffCaffeine
// Partners: @IsaacFlores11

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  const int num_args{static_cast<int>(arguments.size())};
  // XTODO: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (num_args < 2) {
    std::cout << "Error: No arguments were given." << std::endl;
    return 1;
  }
  // XTODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double sum{0.0};
  bool first_arg{true};
  for (const std::string& command_line_arg : arguments) {
    if (first_arg) {
      first_arg = false;
      continue;
    }
    sum += std::stod(command_line_arg);
  }
  // XTODO: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  sum = sum / (num_args - 1);
  // XTODO: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  std::cout << "average = " << sum << "\n";
  return 0;
}
