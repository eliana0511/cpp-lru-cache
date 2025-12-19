#include "LRUCache.h"

LRUCache::LRUCache(int capacity) : capacity(capacity) {}

int LRUCache::get(int key) {
    auto it = map.find(key);
    if (it == map.end()) {
        return -1;
    }

    cache.splice(cache.begin(), cache, it->second);
    return it->second->second;
}

void LRUCache::put(int key, int value) {
    auto it = map.find(key);

    if (it != map.end()) {
        it->second->second = value;
        cache.splice(cache.begin(), cache, it->second);
        return;
    }

    if (cache.size() == capacity) {
        auto last = cache.back();
        map.erase(last.first);
        cache.pop_back();
    }

    cache.emplace_front(key, value);
    map[key] = cache.begin();
}

