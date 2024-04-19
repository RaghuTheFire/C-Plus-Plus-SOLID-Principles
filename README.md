# SOLID-Principles

This C++ code demonstrates the implementation of the SOLID principles, which are a set of design principles that aim to make software designs more understandable, flexible, and maintainable. 
Here's an explanation of the code: 
1. **Single Responsibility Principle (SRP)**: The `Logger` class has a single responsibility, which is to log messages to the console. It encapsulates the logging functionality, making it easier to change the logging mechanism in the future without affecting other parts of the code.
2. **Open/Closed Principle (OCP)**: The `Shape` class is an abstract base class that defines the `Area()` method. The `Rectangle` and `Circle` classes inherit from `Shape` and provide their own implementations of the `Area()` method. This design allows for the addition of new shape types without modifying the existing code, adhering to the Open/Closed Principle.
3. **Liskov Substitution Principle (LSP)**: The `Animal` class is an abstract base class, and the `Dog` and `Cat` classes inherit from it. Both `Dog` and `Cat` provide their own implementations of the `MakeSound()` method. This design ensures that instances of `Dog` and `Cat` can be substituted for instances of `Animal` without breaking the program's behavior.
4. **Interface Segregation Principle (ISP)**: The `Document` interface defines two methods: `Open()` and `Close()`. The `TextDocument` and `ImageDocument` classes implement this interface, but they may not need all the methods defined in the interface. By separating the interface into smaller, more specific interfaces, the code adheres to the Interface Segregation Principle, reducing the need for classes to implement methods they don't need.
5. **Dependency Inversion Principle (DIP)**: The `MessageSender` interface defines the `SendMessage()` method. The `EmailSender` and `SMSSender` classes implement this interface. The `NotificationService` class depends on the `MessageSender` interface, not on the concrete implementations (`EmailSender` and `SMSSender`). This design follows the Dependency Inversion Principle, making it easier to swap out the message sending implementation without modifying the `NotificationService` class.
  
In the `main()` function, the code demonstrates the usage of these principles: - It creates instances of `Rectangle` and `Circle`, and calculates their areas using the `Area()` method defined in the `Shape` class. - It creates instances of `Dog` and `Cat`, and calls the `MakeSound()` method on each animal. - It creates instances of `TextDocument` and `ImageDocument`, and calls the `Open()` and `Close()` methods on each document. - It creates instances of `NotificationService` with `EmailSender` and `SMSSender`, and sends notifications using the `SendNotification()` method. Overall, this code showcases how the SOLID principles can be applied to create a more modular, extensible, and maintainable software design.



# What happens if we don't use SOLID?
1. Tight coupling occurs
2. Duplication of code
3. Unknown issues in application development lifecycle
4. requires time to do modification in code
5. code not testable

# Why use SOLID?
1. reduces complexity of code.
2. reusability
3. reduces error
4. increase readability, extensibility
5. better testability
6. reduces tight coupling

# Solution to successful development of application depends on?
1. Architecture (e.g MVC)
2. Design Principles (e.g SOLID)
3. Design Patterns (e.g Singleton)
