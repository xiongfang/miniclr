//Licensed under the MIT license.
#include "OpCodes.h"

using namespace Cil;


const OpCode*  OpCodes::OneByteOpCode = new new OpCode [0xe0 + 1];

const OpCode*  OpCodes::TwoBytesOpCode =  new OpCode [0x1e + 1];