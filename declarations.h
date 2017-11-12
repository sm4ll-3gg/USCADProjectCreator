#ifndef DECLARATIONS_H
#define DECLARATIONS_H

#include <QString>

namespace PrDeclarations {
enum SupportType{S000 = 0b000, S001 = 0b001, S010 = 0b010, S011 = 0b011,
                 S100 = 0b100, S101 = 0b101, S110 = 0b110, S111 = 0b111};

enum LoadType{NONE = 0, CONCENTRATED = 1, DISTRIBUTED = 2};
}

#endif // DECLARATIONS_H
