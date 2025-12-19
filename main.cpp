#include <iostream>
#include "LRUCache.h"

int main() {
    LRUCache cache(3);

    cache.put(1, 100);
    cache.put(2, 200);
    cache.put(3, 300);

    std::cout << cache.get(1) << std::endl;
    cache.put(4, 400);

    std::cout << cache.get(2) << std::endl;
    std::cout << cache.get(3) << std::endl;
    std::cout << cache.get(4) << std::endl;

    return 0;
}

