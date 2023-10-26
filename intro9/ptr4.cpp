int main()
{
    int v{ 5 };

    int* ptr0 { &v };             // points to an "int" and is not const itself, so this is a normal pointer.
    const int* ptr1 { &v };       // points to a "const int", but is not const itself, so this is a pointer to a const value.
    int* const ptr2 { &v };       // ptr2 points to an "int", but is const itself, so this is a const pointer (to a non-const value).
    const int* const ptr3 { &v }; // ptr3 points to an "const int", and it is const itself, so this is a const pointer to a const value.

    // if the const is on the left side of the *, the const belongs to the value
    // if the const is on the right side of the *, the const belongs to the pointer

    return 0;
}