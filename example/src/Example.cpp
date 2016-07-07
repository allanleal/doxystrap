#include "Example.hpp"

namespace doxystrap {

Example::Example()
{}

Example::Example(std::string name)
: m_name(name)
{}

Example::~Example()
{}

void Example::setName(std::string name)
{
    m_name = name;
}

std::string Example::name() const
{
    return m_name;
}

} // namespace doxystrap