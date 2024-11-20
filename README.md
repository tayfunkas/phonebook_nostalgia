# phonebook_nostalgia

A simple console-based phonebook application built in C++ as part of my journey at [42 School](https://www.42.fr/). This project was designed to help me understand and demonstrate fundamental concepts of object-oriented programming (OOP) in C++.

## 📖 Description

The **Nostalgic Phonebook** allows users to:
1. Add up to 8 contacts with details such as first name, last name, nickname, phone number, and a secret.
2. Display all contacts in a structured and formatted table.
3. Select a specific contact by index to view full details.
4. Validate input to prevent invalid or empty fields for names and phone numbers.

## 🛠 Features

- **Encapsulation**: Data (contacts) and logic (PhoneBook methods) are properly separated using classes.
- **Class Interactions**: Contacts are managed as instances of the `Contact` class within the `PhoneBook` class.
- **Data Validation**: Ensures inputs are non-empty and, for phone numbers, contain only digits.
- **String Manipulation**: Truncates and aligns data for a clean, tabular display.
- **Fixed Storage**: Simulates a FIFO system with a fixed array of up to 8 contacts.
- **Robust Input Handling**: Handles edge cases like invalid commands, indices, and extra spaces.

## 🎯 Skills Demonstrated

- **Class Design**: Use of classes, member functions, and access modifiers.
- **Iterative and Conditional Logic**: Processing and validating data with loops and conditionals.
- **String Formatting**: Using `std::setw` for formatted output and truncation logic.
- **Error Handling**: Graceful management of invalid or unexpected input.
- **User Interaction**: Command-line interface for seamless interaction.

## 🚀 How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/nostalgic-phonebook.git
   cd phonebook_nostalgia
   make
   ./phonebook

  Then follow the instructions that ask you for an input "ADD, SEARCH, or EXIT."


  <img width="704" alt="phonebook" src="https://github.com/user-attachments/assets/4cb8523e-976c-4e12-be12-c88a79819772">

   



