#ifndef TEXTB_HPP
#define TEXTB_HPP

#include <string>

namespace textBox1 {
    class TextBox {
    private:
        std::string value; 

    public:
       
        TextBox();

        explicit TextBox(const std::string& initialValue);

        const std::string& getValue() const noexcept;

        void setValue(const std::string& newValue);
    };
}

#endif  TEXTB_HPP
