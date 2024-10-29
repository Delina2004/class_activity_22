Name Extractor
A simple C++ program that extracts first and last names from a full name input string.
Description
This program takes a full name as input and separates it into first and last names. It handles multi-word names by storing all name parts in a vector and considering the first element as the first name and the last element as the last name.
Features

Handles single-line input with spaces
Extracts first and last names
Supports multi-word names
Simple and lightweight implementation

Project Structure
Copyname-extractor/
├── src/
│   ├── main.cpp
│   └── nameExtractor.cpp
├── include/
│   └── nameExtractor.hpp
└── README.md
Requirements

C++ compiler (C++11 or later)
Standard C++ libraries

Installation

Clone the repository or download the source files
Compile the program using your preferred C++ compiler:

bashCopyg++ -o nameExtractor main.cpp nameExtractor.cpp -I./include
Usage

Run the compiled program:

bashCopy./nameExtractor

Enter a full name when prompted:

CopyEnter full name: John William Smith

The program will output the first and last names:

CopyFirst Name: John
Last Name: Smith
How It Works
The program uses a simple string parsing algorithm to:

Read the full name using getline()
Split the input string at spaces into a vector of name parts
Extract the first element as the first name
Extract the last element as the last name

Contributing
Feel free to submit issues and enhancement requests.
License
This project is open source and available under the MIT License.
