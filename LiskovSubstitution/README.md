# Liskov Substitution Principle

## Thought Process

Whenever you see a child class which has a different nature to its parent class, make it inherit/implement another interface than its current parent class/interface. For example, Birds do fly, but penguin does not, but it is still a bird. you can build an interface ISwim, or create a SwimmingBird class and let penguin inherit from it.

## Definition

Derived types must be completely substitutable for their base types.

## Implementation Guidelines

* No new exceptions can be thrown by the derived type
* Clients should not know which specific derived type they are calling
* New derived types just extend without replacing the functionality of parent type.
