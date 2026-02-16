## 13-02
Interesting stuff. `new` keyword declares memory on the heap instead of the stack. No syntax is needed, you just need a variable to store the memory address. `int  *ptr = new int;` and you have a variable called `ptr` that stroed the memory adress where the value of an integer is stored. Keep in mind the the `delete` keyword must be used to avoid memory leaks!

## 14-02
Forgot to add a log. Writing this on 16-02. Learned about the `new` operator and the `delete` operator. `new` allocates memory and is way easier than `malloc`. If you want to allocate memory for an array you just do `someVariable = new typeOfData[N];` and then delete it be calling `delete [] someVariable;`. The brackets (`[]`) indicate you are dealing with an array. Otherwise you would just use `delete singleVariable;`.

Also learned a bit with `references` and the difference in pointers. References are basically a nickname. They cannot be `NULL` like a pointer can and have to be set at moment of initialization.

## 16-02
Using the references in functions. Used this already in CPP00 but useful to get in to more detail. Basically using references in your function calls allows you to use the actual variable instead of creating a copy, putting it on the stack for the duration of the function call and then deleting it the moment the function exits. It's basically a better way of using pointers since they can never be NULL.
