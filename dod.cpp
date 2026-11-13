#include "dod.h"
#include "var.h"

using namespace nsVar;

void nsDod::dod() {
    a *= -(x - 1) * n / (n + 1);   // доданок домножується на коефіцієнт рекурентності
}
