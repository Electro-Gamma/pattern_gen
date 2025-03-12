# Pattern Generator

This repository contains a **C++ program** that generates ASCII art patterns based on user input.  
The program uses a predefined character map to convert letters, numbers, and symbols into stylized patterns.

## Features

- **Text-to-Pattern Conversion**: Converts input strings into artistic patterns.
- **Multi-Line Support**: Use `*` in the input string to create new lines.
- **File Export**: Save the generated patterns to a text file.
- **Custom Character Mapping**: Supports letters, numbers, and special characters.

## Requirements

- **C++ Compiler (g++)**  
  Ensure you have a C++ compiler installed. You can install `g++` using:
  ```bash
  sudo apt install g++
  ```
  
## Compilation & Execution

### Compile the Program
```bash
g++ pattern_gen.cpp -o pattern_gen
```

### Run the Program
```bash
./pattern_generator
```

## Usage

1. Enter a **string** when prompted (use `*` for new lines).  
2. View the generated **ASCII pattern** in the console.  
3. Choose whether to **save the pattern to a file**.

### Example Input:
```
hello world!
```
```
hello*world!
```

### Example Output:
```
╔╗╔╗╔═══╗╔╗──╔╗──╔══╗───╔╗╔╗╔╗╔══╗╔═══╗╔╗──╔══╗─╔╗
║║║║║╔══╝║║──║║──║╔╗║───║║║║║║║╔╗║║╔═╗║║║──║╔╗╚╗║║
║╚╝║║╚══╗║║──║║──║║║║───║║║║║║║║║║║╚═╝║║║──║║╚╗║║║
║╔╗║║╔══╝║║──║║──║║║║───║║║║║║║║║║║╔╗╔╝║║──║║─║║╚╝
║║║║║╚══╗║╚═╗║╚═╗║╚╝║───║╚╝╚╝║║╚╝║║║║║─║╚═╗║╚═╝║╔╗
╚╝╚╝╚═══╝╚══╝╚══╝╚══╝───╚═╝╚═╝╚══╝╚╝╚╝─╚══╝╚═══╝╚╝

```
```
╔╗╔╗╔═══╗╔╗──╔╗──╔══╗
║║║║║╔══╝║║──║║──║╔╗║
║╚╝║║╚══╗║║──║║──║║║║
║╔╗║║╔══╝║║──║║──║║║║
║║║║║╚══╗║╚═╗║╚═╗║╚╝║
╚╝╚╝╚═══╝╚══╝╚══╝╚══╝
╔╗╔╗╔╗╔══╗╔═══╗╔╗──╔══╗─╔╗
║║║║║║║╔╗║║╔═╗║║║──║╔╗╚╗║║
║║║║║║║║║║║╚═╝║║║──║║╚╗║║║
║║║║║║║║║║║╔╗╔╝║║──║║─║║╚╝
║╚╝╚╝║║╚╝║║║║║─║╚═╗║╚═╝║╔╗
╚═╝╚═╝╚══╝╚╝╚╝─╚══╝╚═══╝╚╝

```


## Saving to a File

- After entering text, you will be asked:  
  ```
  Do you want to save this pattern to a file? (yes/no):
  ```
- If **yes**, enter a filename (e.g., `output.txt`).  
- The pattern will be saved in the specified file.

## Contributions

Contributions are welcome!  
Feel free to submit pull requests or report issues.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
