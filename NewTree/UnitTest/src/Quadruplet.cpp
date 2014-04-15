#include "Quadruplet.h"
#include <sstream>

std::ostream& operator<<(std::ostream& stream, const Quadruplet& quadruplet)
{
    stream << "<" << quadruplet.getIdentifier().c_str() << ", " << quadruplet.getValue() << ", " << quadruplet.getType() << ", " << quadruplet.getKind()  << ">";
    return stream;
}
