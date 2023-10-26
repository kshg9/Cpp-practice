```cpp
simple.setID(2);
// conv
Simple::setID(&simple, 2);
```

```cpp
void setID(int id) { m_id = id; }
// conv
void setID(Simple* const this, int id) { this->m_id = id; }
```

```cpp
// Method Chaining when 'Calc&' returns by '*this'
calc.add(5).sub(3).mult(4);
```
### 'this' is a pointer and not a reference