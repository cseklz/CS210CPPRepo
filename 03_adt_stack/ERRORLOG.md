# ERROR LOG
- [18:32] A value was pushed during an earlier test that was not popped. This changed the result of a later test that popped all values before printing true or false.
- [19:10] I forgot to return when inside an if statement in `push()` causing topIndex to increment and an overflow when trying to access `data[100]`.