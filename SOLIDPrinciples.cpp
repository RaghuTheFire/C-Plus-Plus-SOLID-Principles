#include <iostream>
#include <vector>
#include <string>

// Single Responsibility Principle (SRP)
class Logger 
{
  public: static void Log(const std::string & message) 
  {
    std::cout << message << std::endl;
  }
};

// Open/Closed Principle (OCP)
class Shape 
{
  public: virtual double Area() const = 0;
};

class Rectangle: public Shape 
{
  public: Rectangle(double width, double height): m_width(width),
  m_height(height) {}
  double Area() const override 
  {
    return m_width * m_height;
  }
  private: double m_width,
  m_height;
};

class Circle: public Shape 
{
  public: Circle(double radius): m_radius(radius) {}
  double Area() const override 
  {
    return 3.14159 * m_radius * m_radius;
  }
  private: double m_radius;
};

// Liskov Substitution Principle (LSP)
class Animal 
{
  public: virtual void MakeSound() const = 0;
};

class Dog: public Animal 
{
  public: void MakeSound() const override 
  {
    Logger::Log("Woof!");
  }
};

class Cat: public Animal 
{
  public: void MakeSound() const override 
  {
    Logger::Log("Meow!");
  }
};

// Interface Segregation Principle (ISP)
class Document 
{
  public: virtual void Open() = 0;
  virtual void Close() = 0;
};

class TextDocument: public Document 
{
  public: void Open() override 
  {
    Logger::Log("Opening text document...");
  }
  void Close() override 
  {
    Logger::Log("Closing text document...");
  }
};

class ImageDocument: public Document 
{
  public: void Open() override 
  {
    Logger::Log("Opening image document...");
  }
  void Close() override 
  {
    Logger::Log("Closing image document...");
  }
};

// Dependency Inversion Principle (DIP)
class MessageSender 
{
  public: virtual void SendMessage(const std::string & message) = 0;
};

class EmailSender: public MessageSender 
{
  public: void SendMessage(const std::string & message) override 
  {
    Logger::Log("Sending email: " + message);
  }
};

class SMSSender: public MessageSender 
{
  public: void SendMessage(const std::string & message) override 
  {
    Logger::Log("Sending SMS: " + message);
  }
};

class NotificationService 
{
  public: NotificationService(MessageSender * sender): m_sender(sender) 
  {}
  void SendNotification(const std::string & message) 
  {
    m_sender -> SendMessage(message);
  }
  private: MessageSender * m_sender;
};

int main() 
{
  std::vector < Shape * > shapes = 
  {
    new Rectangle(3, 4),
    new Circle(5)
  };

  for (const auto & shape: shapes) 
  {
    Logger::Log("Area: " + std::to_string(shape -> Area()));
  }

  Animal * animals[] = 
  {
    new Dog(),
    new Cat()
  };
  for (const auto & animal: animals) 
  {
    animal -> MakeSound();
  }

  Document * documents[] = 
  {
    new TextDocument(),
    new ImageDocument()
  };
  for (const auto & document: documents) 
  {
    document -> Open();
    document -> Close();
  }

  NotificationService emailService(new EmailSender());
  emailService.SendNotification("Hello, world!");

  NotificationService smsService(new SMSSender());
  smsService.SendNotification("Hello, world!");

  return 0;
}
