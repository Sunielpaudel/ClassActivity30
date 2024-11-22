#include <iostream>
#include "textB.hpp"

int main() {
    
    using namespace textBox1;

    
    TextBox tb1;
    std::cout << "Created a TextBox using the default constructor.\n"
              << "Initial value of TextBox (should be empty): \"" << tb1.getValue() << "\"\n\n";

    TextBox tb2("Welcome to the TextBox!");
    std::cout << "Created a TextBox using the explicit constructor.\n"
              << "Initial value of TextBox: \"" << tb2.getValue() << "\"\n\n";

    tb1.setValue("TextBox updated with new content.");
    std::cout << "Updated the value of the first TextBox using setValue().\n"
              << "New value of TextBox: \"" << tb1.getValue() << "\"\n\n";

    tb2.setValue("New content assigned to the second TextBox.");
    std::cout << "Updated the value of the second TextBox using setValue().\n"
              << "New value of TextBox: \"" << tb2.getValue() << "\"\n\n";

    return 0;
}
