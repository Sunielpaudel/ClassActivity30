#include "textB.hpp"

namespace textBox1 {

    TextBox::TextBox() : value("") {}

    TextBox::TextBox(const std::string& initialValue) : value(initialValue) {}

    const std::string& TextBox::getValue() const noexcept {
        return value;
    }

    void TextBox::setValue(const std::string& newValue) {
        value = newValue;
    }

} 
