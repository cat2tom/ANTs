#include "antsRegistrationTemplateHeader.h"

namespace ants {

//Instantiate the 2DDouble version
int antsRegistration2DDouble(ParserType::Pointer & parser)
{
    return  DoRegistration<2>( parser );
}

} //end namespace ants
