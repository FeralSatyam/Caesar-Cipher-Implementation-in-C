# Caesar-Cipher-Implementation-in-C
This program encrypts plaintext using the Caesar cipher, a substitution cipher where each letter in the plaintext is shifted a fixed number of places down or up the alphabet. It's a fundamental example of encryption techniques and is often used as an educational tool in computer science.

Features:
1. Command-Line Argument: Accepts a single integer as the encryption key, determining the shift amount.
2. Input Validation: Ensures the user provides exactly one command-line argument, which is a positive integer.
3. Case Sensitivity: Preserves the case of the original text; uppercase and lowercase letters are shifted appropriately.
4. Non-Alphabetic Characters: Leaves digits, punctuation, and whitespace unchanged.
5. User Prompt: Asks the user to input the plaintext to be encrypted.
6. Output: Displays the resulting ciphertext after encryption.

What I Learned:
1. Command-Line Arguments: Handling and validating input from the command line.
2. String Manipulation: Using functions from string.h for operations like strlen and strcmp.
3. Character Classification: Utilizing ctype.h functions such as isupper, islower, and isdigit to assess character types.
4. Type Casting: Converting between characters and their ASCII integer representations for arithmetic operations.
5. Memory Management: Managing string lengths and ensuring proper null-termination for character arrays.

Notes:
1. The program uses the CS50 library for the get_string function to obtain user input. Ensure that the CS50 library is installed and properly linked during compilation.
2. The encryption wraps around the alphabet; for example, with a shift of 3, 'Z' becomes 'C'.
3. Input validation checks that the key is a positive integer and that exactly one command-line argument is provided.
