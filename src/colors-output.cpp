#include "colors.hpp"

int main() {

  print("> [style] (ansi code)\n");

  print("Styles\n");
  print("Reset         (0)");
  print("Bold          (1)", style::bold);
  print("Dim           (2)", style::dim);
  print("Italic        (3)", style::italic);
  print("Underline     (4)", style::underline);
  print("Strikethrough (9)", style::strikethrough);
  print("Normal        (22)");

  print("-----------------------------");

  print("Foreground colors\n");
  print("Black         (30)", fore::black);
  print("Red           (31)", fore::red);
  print("Green         (32)", fore::green);
  print("Yellow        (33)", fore::yellow);
  print("Blue          (34)", fore::blue);
  print("Magenta       (35)", fore::magenta);
  print("Cyan          (36)", fore::cyan);
  print("White         (37)", fore::white);

  print("-----------------------------");

  print("Background colors\n");
  print("Black         (40)", back::black);
  print("Red           (41)", back::red);
  print("Green         (42)", back::green);
  print("Yellow        (43)", back::yellow);
  print("Blue          (44)", back::blue);
  print("Magenta       (45)", back::magenta);
  print("Cyan          (46)", back::cyan);
  print("White         (47)", back::white);

  return 0;
}
