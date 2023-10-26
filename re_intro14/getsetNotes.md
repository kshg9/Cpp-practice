# Getters and setters :

### Prefixed with “get” or “set”:
```cpp
int getDay() { return m_day; }        // getter
void setDay(int day) { m_day = day; } // setter
```


### No prefix:
```cpp
int day() { return m_day; }        // getter
void day(int day) { m_day = day; } // setter
```
Use as you like here, not much preference. In no-prefix version of the code compiler manages getters and setters.

* Do not return non-const references to private data members


### Member initializer list formatting
```cpp
Foo(int x, int y) : m_x { x }, m_y { y }
{
}

Foo(int x, int y) :
    m_x { x },
    m_y { y }
{
}

Foo(int x, int y)
    : m_x { x }
    , m_y { y }
{
}
```

### Errors deligating / Bad practices

```cpp
#include <iostream>
struct Foo
{
    int x{};
    int y{};

public:
    Foo()
    {
        x = 5;
    }

    Foo(int value): y { value }
    {
        // intent: call Foo() function
        // actual: value initializes nameless temporary Foo (which is then discarded)
        Foo(); // note: this is the equivalent of writing Foo{}
    }
};

int main()
{
    Foo f{ 9 };
    std::cout << f.x << ' ' << f.y; // prints 0 9
}
```