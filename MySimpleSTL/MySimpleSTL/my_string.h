#ifndef MYSTRING_H
#define MYSTRING_H

namespace mystl
{

    template <class CharT> class char_traits;

    template <class T > struct allocator;

    template<
        class CharT,
        class Traits = char_traits<CharT>,
        class Allocator = allocator<CharT>
    > class basic_string;


    class string
    {
    public:
        typedef size_t size_type;
        string();
        string(size_type count, char ch);
        string(const char* s);
        const char& front() const;
        const char& back() const;
    };


};
#endif
