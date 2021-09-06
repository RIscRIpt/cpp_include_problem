// precompiled header for lib A
namespace A {
#include "a/a.h"
}

// precompiled header for lib B
namespace B {
#include "b/b.h"
}

int main() {
    return 0; // A::V + B::V; // B::V is not defined
}
