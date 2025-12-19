# C++ LRU Cache

A clean and efficient implementation of an **LRU (Least Recently Used) cache** in C++, designed with **O(1)** time complexity for both retrieval and insertion.

This project demonstrates practical use of C++ STL containers, memory-aware design, and a Makefile-based build workflow.

---

## Features
- O(1) `get` and `put` operations
- Automatic eviction of least recently used items
- Uses `unordered_map` and doubly linked list (`std::list`)
- Clear separation of interface and implementation
- Built with C++17 and Makefile

---

## Project Structure
cpp-lru-cache/
├── include/
│ └── LRUCache.h
├── src/
│ └── LRUCache.cpp
├── main.cpp
├── Makefile
└── .gitignore

yaml
Copy code

---

## Build & Run

### Requirements
- C++17 compatible compiler (g++)
- make

### Commands
```bash
make
./lru_cache
```

Example Output
diff
Copy code
100
-1
300
400
This output confirms correct eviction and access behavior.

Use Case
LRU caches are commonly used in:

Databases

Operating systems

Web servers

Memory management systems

This implementation reflects real-world cache design patterns used in backend and systems programming.

Author
Eliana Bazan
GitHub: https://github.com/eliana0511

yaml
Copy code

---

## 🍼 HOW TO ADD IT (2 options)

### Option 1: Edit on GitHub (easiest)
1. Go to your repo
2. Click `README.md`
3. Click ✏️ Edit
4. Paste the content above
5. Commit changes

### Option 2: Terminal
```bash
nano README.md
```

Paste → CTRL + O → Enter → CTRL + X

Then:

bash
Copy code
git add README.md
git commit -m "Add project README"
git push
