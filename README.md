# C++ Colors Library

> 🎨 A collection of namespaces and functions that will help you to style your console outputs.

### Features

- Ready for use! Drop it in your codebase and be happy!!!
- Simple and well-written interfaces so you don't have to worry about readability.
- `Fore` namespace that has ANSI code for the main (more supported) foreground colors.
- `Style` namespace that has ANSI code for apply style like bold, italic, underline, and so on.
- Written following [Google's c++ style guide](https://google.github.io/styleguide/cppguide.html).

## ⬇️ Getting Started

1. Download or clone the repository
2. Copy the file at `src` into your codebase
3. See [usage](#usage) and [api](#api)

```bash
# (1)
git clone https://github.com/kauefraga/cpp-colors.git
cd cpp-colors

# (2)
cp src/colors.cpp ../path/to/your/project
```

You are welcome to open issues and pull requests!

## Usage

Include the library in your code and then use just the namespaces to output "something" in bold red.

```cpp
// Already includes <iostream> and <string>
#include "../path/to/the/library/colors.cpp"

int main() {
  std::cout << style::bold << fore::red << "something" << '\n';
  // style::bold + fore::red works too, because << operator also concatenates

  return 0;
}
```

## 📖 API

### Functions

- `print(string text, string color)` - Prints out a text with a style (color, bold...)

### Modifiers (`style` namespace)

- `style::reset` - Reset the current style.
- `style::bold` - Make the text bold. Alias: `style::b`
- `style::dim` - Make the text have lower opacity.
- `style::italic` - Make the text italic. Alias: `style::i` *(not widely supported)*
- `style::underline` - Put a horizontal line below the text. Alias: `style::u` *(not widely supported)*
- `style::normal` - Make the text normal.
- `style::strikethrough` - Puts a horizontal line through the center of the text. Alias: `style::st` *(Not widely supported)*

### Colors (`fore` namespace only)

- `fore::black`
- `fore::red`
- `fore::green`
- `fore::yellow`
- `fore::blue`
- `fore::magenta`
- `fore::cyan`
- `fore::white`

Read the doxygen documentation at [code](src/colors.cpp) too.

## 🧻 Resources

These are the contents that i consume to develop this library:

- [ANSI escape code](https://en.wikipedia.org/wiki/ANSI_escape_code)
- [Python - Colorama's codebase](https://github.com/tartley/colorama/blob/master/colorama/ansi.py)
- [List of ANSI color escape sequences](https://stackoverflow.com/questions/4842424/list-of-ansi-color-escape-sequences)

## 📝 License

This project is licensed under the MIT License - See the [LICENSE](https://github.com/kauefraga/cpp-colors/blob/main/LICENSE) for more information.
