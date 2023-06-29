#pragma once
#include <string>
#include <iostream>

/* ANSI escape code (See: http://en.wikipedia.org/wiki/ANSI_escape_code)
  1. Needs to start with Control Sequence Introducer (CSI) = \033[
  2. You can assign three comma-separated parameters like so: \033[1;2;3 (you don't need to use all of them)
  3. Ends with m character
*/

/// @brief A collection of ANSI escape code to control foreground colors.
namespace fore {
  const std::string black = "\033[30m";
  const std::string red = "\033[31m";
  const std::string green = "\033[32m";
  const std::string yellow = "\033[33m";
  const std::string blue = "\033[34m";
  const std::string magenta = "\033[35m";
  const std::string cyan = "\033[36m";
  const std::string white = "\033[37m";

  const std::string bright_black = "\033[90m";
  const std::string bright_red = "\033[91m";
  const std::string bright_green = "\033[92m";
  const std::string bright_yellow = "\033[93m";
  const std::string bright_blue = "\033[94m";
  const std::string bright_magenta = "\033[95m";
  const std::string bright_cyan = "\033[96m";
  const std::string bright_white = "\033[97m";

  /// @brief An alias for fore::bright_black.
  const std::string& gray = bright_black;
}

/// @brief A collection of ANSI escape code to control background colors.
namespace back {
  const std::string black = "\033[40m";
  const std::string red = "\033[41m";
  const std::string green = "\033[42m";
  const std::string yellow = "\033[43m";
  const std::string blue = "\033[44m";
  const std::string magenta = "\033[45m";
  const std::string cyan = "\033[46m";
  const std::string white = "\033[47m";

  const std::string bright_black = "\033[100m";
  const std::string bright_red = "\033[101m";
  const std::string bright_green = "\033[102m";
  const std::string bright_yellow = "\033[103m";
  const std::string bright_blue = "\033[104m";
  const std::string bright_magenta = "\033[105m";
  const std::string bright_cyan = "\033[106m";
  const std::string bright_white = "\033[107m";

  /// @brief An alias for back::bright_black.
  const std::string& gray = bright_black;
}

/// @brief A collection of ANSI escape code to apply styles to output text.
namespace style {
  const std::string reset = "\033[0m";
  const std::string bold = "\033[1m";
  const std::string dim = "\033[2m";
  const std::string italic = "\033[3m";
  const std::string underline = "\033[4m";
  const std::string strikethrough = "\033[9m";
  const std::string normal = "\033[22m";

  /// @brief An alias for style::bold.
  const std::string& b = bold;

  /// @brief An alias for style::italic.
  const std::string& i = italic;

  /// @brief An alias for style::underline.
  const std::string& u = underline;

  /// @brief An alias for style::strikethrough.
  const std::string& st = strikethrough;
}

/// @brief Prints out a text with a style (color, bold...)
/// @param text is the message to be displayed.
/// @param color is an ANSI escape/color code. (Default is style::normal)
/// @param eol is an end of line character. (Default is \\n)
void print(
  const std::string text,
  const std::string& color = style::normal,
  const char eol = '\n'
) {
  std::cout << color << text << style::reset << eol;
}
