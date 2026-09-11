# READ ME

## Reflection Questions
1. `topIndex` starts at `-1`. Since valid indexes begin at `0`, `-1` means there is no top element. This lets `isEmpty()` check whether `topIndex == -1` without special-casing for an empty stack.
---
2. `push()` first checks `isFull()`. If there is room, `++topIndex` moves to the next open position, and `value` is stored in `data[topIndex]`. Reversing that order would try to store the first value at `data[-1]` and leave `topIndex` ahead of the actual top element.
---
3. - `push()`: **O(1)** — checks for space, increments `topIndex`, and writes one `value`.
   - `pop()`: **O(1)** — checks for emptiness, reads one `value`, and decrements `topIndex`. 
   - `peek()`: **O(1)** — checks for emptiness and reads `data[topIndex]`. 
   - `isEmpty()`: **O(1)** — compares `topIndex` with `-1`. 
   - `isFull()`: **O(1)** — compares `topIndex` with `99`. 
   - `size()`: **O(1)** — returns `topIndex + 1`.

	None of these functions loops through `data`.
---
4. `isFull()` returns `true`, `Stack is full` is printed, and `push()` returns without a value because its return type is void. `topIndex` stays at 99, and `data` is unchanged. I chose this behavior to allow the program to continue by not going out-of-bounds.
---
5. `isEmpty()` returns `true`, `Stack is empty: ` is printed, and both `pop()` and `peek()` return `-1` because their return type is `int`. `topIndex` stays at `-1`, and `data` is unchanged. I chose this behavior because exceptions are not allowed, and I output a message because -1 could be a value in the stack.
---
6. For a larger fixed stack, I could increase the size of `data` and update the limit used by `isFull()`. The operations would remain **O(1)**. An automatically growing stack would require dynamic memory and copying the elements into a larger array, making a resizing push operation **O(n)**.
---
7. A linked-list stack could grow without a fixed 100-element limit. However, each node would require extra memory for a pointer, and the nodes would not be stored together in memory like array elements.