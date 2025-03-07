Here is the code that demonstrates the error when initializing data members in the incorrect order:  

```cpp
#include <iostream>

class Test {
private:
    int a, b;

public:
    Test(int i, int j) : b(j), a(i + b) { // Incorrect order (b is initialized before a)
        std::cout << "a: " << a << ", b: " << b << std::endl;
    }
};

int main() {
    Test t(4, 6);
    return 0;
}
```

### **Explanation of the Error:**
- In the initialization list, `b(j)` initializes `b` first.
- Then, `a(i + b)` attempts to use `b`, but in reality, `b` is not yet initialized at that moment.
- However, the order in which member variables are initialized **depends on their declaration order in the class**, not the order in the initialization list.
- Since `a` is declared before `b`, `a` must be initialized first.
- This can lead to **undefined behavior or a compilation error**.

### **Corrected Code:**
To fix the issue, initialize `a` first as follows:

```cpp
#include <iostream>

class Test {
private:
    int a, b;

public:
    Test(int i, int j) : a(i), b(a + j) { // Correct order
        std::cout << "a: " << a << ", b: " << b << std::endl;
    }
};

int main() {
    Test t(4, 6);
    return 0;
}
```

### **Key Takeaways:**
- Data members **are initialized in the order they are declared in the class, not in the order they appear in the initialization list**.
- If `b` is declared after `a`, then `a` must be initialized before `b` to avoid using an uninitialized variable.



## [Late Bindin](./13_pointer_to_derived.cpp)
## [Pure Virtual Function](./abstract_function_pure_virtual_function.cpp)