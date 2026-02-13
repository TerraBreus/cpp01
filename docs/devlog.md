## 13-02
Interesting stuff. `new` keyword declares memory on the heap instead of the stack. No syntax is needed, you just need a variable to store the memory address. `int  *ptr = new int;` and you have a variable called `ptr` that stroed the memory adress where the value of an integer is stored. Keep in mind the the `delete` keyword must be used to avoid memory leaks!

