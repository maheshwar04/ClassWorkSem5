class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    def greet(self):
        return f"Hello, I am {self.name} and I am {self.age} years old."

def create_person(name, age):
    return Person(name, age)

if __name__ == "__main__":
    import sys
    name = sys.argv[1]
    age = sys.argv[2]
    person = create_person(name, age)
    print(person.greet())
else:
    print(f"This module is imported as {__name__}")